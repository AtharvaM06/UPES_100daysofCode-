/*
Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
*/

#include <stdio.h>

int main(void) {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: Cannot open numbers.txt\n");
        return 1;
    }

    int num, sum = 0, count = 0;
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count > 0) {
        double avg = (double)sum / count;
        printf("Sum = %d\nAverage = %.2f\n", sum, avg);
    } else {
        printf("No numbers found in file.\n");
    }

    return 0;
}
