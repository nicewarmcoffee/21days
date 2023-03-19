/*  program to enter the ages and incomes of up to 10 people.
    the program prints a report based on the nubmers entered. */

#include <stdio.h>

#define MAX 100
#define YES 1
#define NO 0


long income[MAX];
int month[MAX], day[MAX], year[MAX]; /* to hold birthdays */

int x, y, ctr; /* for counters */
int cont; /* for program control */
long month_total, grand_total;

void main(void);
int display_instruction(void);
void get_data(void);
void display_report();
int continue_function(void);

void main() {
    cont = display_instruction();

    if (cont == YES) {
        get_data();
        display_report();
    }
    else
        printf("\nProgram aborted by user!\n\n");
}

/* Function: display_instruction() */
/* displays instructions and menu */
/* returns user's choice */

int display_instruction(void) {
    printf("\n\n");
    printf("This program enables you to enter up to 99 people's incomes and birthdays. \
It then prints the incomes by month along with the overall income and overall average.");
    printf("\n");

    cont = continue_function();

    return(cont);
}

/* Function: get_data() */
/* this function gets data from the users.
    it contniues to get data until either 100 people are entered,
    or until the user enters 0 for the month. */
/* note: this allows 0/0/0 to be entered for birthdays in case the suer is unsure
    it also allows for 31 days in each month. */

void get_data(void) {
    for (cont = YES, ctr = 0; ctr < MAX && cont == YES; ctr++) {
        printf("\nEnter information for person %d.", ctr+1);
        printf("\n\tEnter birthday: ");

        do {
            printf("\n\tMonth (0 - 12): ");
            scanf("%d", &month[ctr]);
        } while (month[ctr] < 0 || month[ctr] > 12);

        do {
            printf("\n\tDay (0 - 31): ");
            scanf("%d", &day[ctr]);
        } while (day[ctr] < 0 || day[ctr] > 31);

        do {
            printf("\n\tYear (0 - 1994): ");
            scanf("%d", &year[ctr]);
        } while (year[ctr] < 0 || year[ctr] > 1994);

        printf("\nenter yearly income (whole dollars): ");
        scanf("%ld", &income[ctr]);

        cont = continue_function();
    }

    /* ctr equals the number of people that were entered */
}

/* Function: display_report() */
/* displays a report to the screen */

void display_report() {
    grand_total = 0;
    printf("\n\n\n");
    printf("\n\tSALARY SUMMARY");
    printf("\n\t==============");

    for (x = 0; x <= 12; x++) {
        month_total = 0;
        for (y = 0; y < ctr; y++) {
            if (month[y] == x)
                month_total += income[y];
        }

        printf("\nTotal for month %d is %ld", x, month_total);
        grand_total += month_total;
    }
    
    printf("\n\nReport totals:");
    printf("\nTotal income is %ld", grand_total);
    printf("\nAverage income is %ld", grand_total / ctr);
    printf("\n\n * * * End of Report * * *");
}

/* Function: continue_fuction() */
/* this fuction asks the user if they wish to continue */

int continue_function(void) {
    printf("\n\nDo you wish to continue? (0=No/1=Yes): ");
    scanf("%d", &x);

    while (x < 0 || x > 1) {
        printf("\n%d is invalid!", x);
        printf("\nPlease enter 0 to Quit or 1 to Continue: ");
        scanf("%d", &x);
    }

    if (x == 0)
        return (NO);
    else
        return (YES);
}