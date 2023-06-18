#include <stdio.h>

struct data {
    int value1;
    float value2;
    float value3;
} info;

struct data *ptr_to_data;

struct name_data {
    char name[21];
    struct name_data *name_data_ptr;
};

typedef struct {
    char address1[31];
    char address2[31];
    char city[11];
    char state[3];
    char zip[11];
} RECORD;

int main() {
    info.value1 = 100;
    ptr_to_data = &info;
    ptr_to_data->value2 = 5.5;
    (*ptr_to_data).value3 = 5.5;

    RECORD myaddress = {"Unit 23", "24-36 Pacific Hwy", "Wahroonga", "NSW", "2142"};
}