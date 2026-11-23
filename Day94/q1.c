/*
Q144: Write a function that accepts a structure as parameter and prints its members.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
}

int main(void) {
    struct Student s;
    printf("Enter student details (Name Roll Marks): ");
    if (scanf("%49s %d %d", s.name, &s.roll_no, &s.marks) != 3) {
        return 1;
    }

    printStudent(s);
    return 0;
}
