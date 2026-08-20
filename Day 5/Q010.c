//Write a program to input time in seconds and convert it to hours:minutes:seconds format

#include <stdio.h>

int main()
{
    int totalsec, hr, min, sec;

    printf("\nInput time in seconds and convert it to hours:minutes:seconds format\n");
    printf("Enter time in Seconds : ");
    scanf("%d", &totalsec);

    if (totalsec<=0) {
        printf("Enter a valid time in seconds");
    }
    else {
        hr = totalsec /3600;
        min = (totalsec % 3600) / 60;
        sec = totalsec % 60;

        printf("\nTIme in hh:mm:ss = %d:%d:%d\n\n",hr,min,sec);
    }
    
    return 0;
}