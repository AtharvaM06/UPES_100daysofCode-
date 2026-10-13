//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
int main() {
    char date[11];
    printf("Enter a date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    // Check if the input format is correct
    if (date[2] != '/' || date[3] != '0' || date[4] != '4' || date[5] != '/') {
        printf("Invalid date format. Please use dd/04/yyyy.\n");
        return 1;
    }

    // Change the month from "04" to "Apr"
    date[3] = 'A';
    date[4] = 'p';
    date[5] = 'r';

    printf("Date in dd-Apr-yyyy format: %s", date);
    return 0;
}