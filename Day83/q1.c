/*
Q133: Create an enum for months and print how many days each month has.
*/

#include <stdio.h>
#include <string.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main(void) {
    char mname[20];
    printf("Enter month (e.g., JAN, FEB): ");
    if (scanf("%19s", mname) != 1) return 1;

    enum Month m = 0;
    if (strcmp(mname, "JAN") == 0) m = JAN;
    else if (strcmp(mname, "FEB") == 0) m = FEB;
    else if (strcmp(mname, "MAR") == 0) m = MAR;
    else if (strcmp(mname, "APR") == 0) m = APR;
    else if (strcmp(mname, "MAY") == 0) m = MAY;
    else if (strcmp(mname, "JUN") == 0) m = JUN;
    else if (strcmp(mname, "JUL") == 0) m = JUL;
    else if (strcmp(mname, "AUG") == 0) m = AUG;
    else if (strcmp(mname, "SEP") == 0) m = SEP;
    else if (strcmp(mname, "OCT") == 0) m = OCT;
    else if (strcmp(mname, "NOV") == 0) m = NOV;
    else if (strcmp(mname, "DEC") == 0) m = DEC;

    switch (m) {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("31 days\n");
            break;
        default:
            printf("Invalid month\n");
            break;
    }

    return 0;
}
