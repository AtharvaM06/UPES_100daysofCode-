/*
Q143: Find and print the student with the highest marks.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void) {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    struct Student students[100];
    int top_idx = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number, marks for student %d: ", i + 1);
        if (scanf("%49s %d %d", students[i].name, &students[i].roll_no, &students[i].marks) != 3) {
            return 1;
        }
        if (students[i].marks > students[top_idx].marks) {
            top_idx = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", students[top_idx].name, students[top_idx].marks);
    return 0;
}
