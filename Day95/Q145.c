/*
Q145: Return a structure containing top student's details from a function.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student findTopStudent(struct Student arr[], int n) {
    int top_idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i].marks > arr[top_idx].marks) {
            top_idx = i;
        }
    }
    return arr[top_idx];
}

int main(void) {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    struct Student arr[100];
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number, marks for student %d: ", i + 1);
        if (scanf("%49s %d %d", arr[i].name, &arr[i].roll_no, &arr[i].marks) != 3) {
            return 1;
        }
    }

    struct Student top = findTopStudent(arr, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll_no, top.marks);
    return 0;
}
