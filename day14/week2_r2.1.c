/* Program Name: week2.c
 * program to enter information for up to 100 people.
 * The program prints a report based on the numbers entered.
 */

/* included files */
#include <stdio.h>
#include <string.h>

/* defined constraints */

#define MAX 100
#define YES 1
#define NO  0
#define MAX_FNAME 15
#define MAX_LNAME 20
#define MAX_PHONE 9
/* variables */

struct record {
    char fname[MAX_FNAME + 1];     /* first name + NULL */
    char lname[MAX_LNAME + 1];     /* last name + NULL */
    char phone[MAX_PHONE + 1];      /* phone number + NULL */
    long income;            /* income */
    int month;              /* birthday month */
    int day;                /* birthday day */
    int year;               /* birthday year */
};

struct record list[MAX];    /* declare structure */

int last_entry = 0;          /* total number of entries */

/* fuction prototypes */

int main(void);
int number_input(void);
char character_input(void);
void get_data(void);
void display_report(void);
int continue_fuction(void);
void clear_kb(void);

/* start of program */

int main(void) {
    int count = YES;
    int ch;

    while (count == YES) {
        printf("\n");
        printf("\n  MENU");
        printf("\n =========\n");
        printf("\n1. Enter names");
        printf("\n2. Print report");
        printf("\n3. Quit");
        printf("\n\nEnter Selection ==> ");

        ch = number_input();

        switch (ch) {
            case 1: get_data();
                break;
            case 2: display_report();
                break;
            case 3: printf("\n\nThank you for using this program!");
                count = NO;
                break;
            default: printf("\n\nInvalid choice, please select 1 to 3!");
                break;
        }
    }
}

/* Using fgets and sscanf to get rid of a trailing newline character*/
int number_input(void) {
    const int buffersize = 80;
    char buffer[buffersize];
    int number;
    
    fgets(buffer, buffersize, stdin);
    sscanf(buffer, "%d", &number);
    return (number);
}

char character_input(void) {
    const int buffersize = 80;
    char buffer[buffersize];
    char ch;

    fgets(buffer, buffersize, stdin);
    sscanf(buffer, "%c", &ch);
    return (ch);
}

/* Fuction: get_data()
 * Purpose: This fuction gets the data from the user.
 *      It continues to get data until either 100 people are entered,
 *      or the user enters 0 for the month.
 * Returns: nothing
 * Notes: This allows 0/0/0 to be entered for birthdays in case the user is unsure.
 *      It also allows for 31 days in each month.
 */

void get_data(void) {
    int count;
    int ctr;

    for (count = YES; last_entry < MAX && count == YES; last_entry++) {
        printf("\n\nEnter information for Person %d.", last_entry + 1);

        printf("\n\nEnter first name: ");
        fgets(list[last_entry].fname, MAX_FNAME + 1, stdin);
        list[last_entry].fname[strcspn(list[last_entry].fname, "\n")] = 0;
        /* using fgets over gets and removing the newline character */

        printf("\nEnter last name: ");
        fgets(list[last_entry].lname, MAX_LNAME + 1, stdin);
        list[last_entry].lname[strcspn(list[last_entry].lname, "\n")] = 0;


        printf("\nEnter phone in 123-4568 format: ");
        fgets(list[last_entry].phone, MAX_PHONE + 1, stdin);
        list[last_entry].phone[strcspn(list[last_entry].phone, "\n")] = 0;


        printf("\nEnter yearly income (whole dollars): ");
        list[last_entry].income = number_input();

        printf("\nEnter Birthday:");
        do {
            printf("\n\tMonth (0 - 12): ");
            list[last_entry].month = number_input();
        } while (list[last_entry].month < 0 || list[last_entry].month > 12);

        do {
            printf("\n\tDay (0 - 31): ");
            list[last_entry].day = number_input();
        } while (list[last_entry].day < 0 || list[last_entry].day > 31);

        do {
            printf("\n\tYear (1800 - 2023): ");
            list[last_entry].year = number_input();
        } while (list[last_entry].year < 1800 || list[last_entry].year > 2023);

        count = continue_fuction();
    }

    if (last_entry == MAX)
        printf("\n\nMaximum number of names has been entered!\n");
}

/* Function: display_report()
 * Purpose: This function displays a report to the screen
 * Returns: nothing
 * Notes: More information could be displayed.
 *      change stdout to stdprn to print report
 */

void display_report() {
    long month_total = 0, grand_total = 0;
    int x, y;

    fprintf(stdout, "\n\n");    /* skip a few lines */
    fprintf(stdout, "\n     REPORT");
    fprintf(stdout, "\n     ========");

    for (x = 0; x <= 12; x++) {
        /* for each month, including 0 */
        month_total = 0;
        for (y = 0; y < last_entry; y++) {
            if (list[y].month == x) {
                fprintf(stdout, "\n\t%s %s %s %ld", list[y].fname, list[y].lname, list[y].phone, list[y].income);
                month_total += list[y].income;
            }
        }
        fprintf(stdout, "\nTotal for month %d is %ld", x, month_total);
        grand_total += month_total;
    }
    fprintf(stdout, "\n\nReport totals:");
    fprintf(stdout, "\nTotal Income is %ld", grand_total);
    fprintf(stdout, "\nAverage Income is %ld", grand_total / last_entry);

    fprintf(stdout, "\n\n * * * End of Report * * *");
}

/* Function: continue_function(void)
 * Purpose: This function asks the user if they wish to continue.
 * Returns: YES - if user wishes to continue
 *          NO - if user wishes to quit
 */

int continue_fuction(void) {
    char ch;

    printf("\n\nDo you wish to continue? (Y)es / (N)o: ");
    ch = character_input();

    while (ch != 'n' && ch != 'N' && ch != 'y' && ch != 'Y') {
        printf("\n%c is invalid!", ch);
        printf("\n\nPlease enter \'N\' to Quit or \'Y\' to continue: ");
        ch = character_input();
    }

    if (ch == 'n' || ch == 'N')
        return(NO);
    else
        return(YES);
}

/* Function: clear_kb()
 * Purpose: This function clears the keyboard of extra characters.
 *      due to how fgets work, Enter needs to be pressed
 * Returns: Nothing
 */

void clear_kb(void) {
    puts("Press [ENTER] to continue... ");
    char junk[80];
    fgets(junk, 80, stdin);
    junk[strcspn(junk, "\n")] = 0;
}