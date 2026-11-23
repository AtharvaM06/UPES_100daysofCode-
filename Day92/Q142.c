/*
Q142: Store details of 5 students in an array of structures and print all.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student students[5];

    printf("Enter details of 5 students (Name Roll Marks):\n");
    for (int i = 0; i < 5; i++) {
        if (scanf("%49s %d %d", students[i].name, &students[i].roll_no, &students[i].marks) != 3) {
            return 1;
        }
    }

    printf("\n%-10s %-10s %-10s\n", "Name", "Roll No", "Marks");
    printf("------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%-10s %-10d %-10d\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}
