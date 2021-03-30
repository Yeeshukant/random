#include<stdio.h>
#include<errno.h>
#include<string.h>
//this program sorts integer number input by user in ascending order
int main()
{
    int n=0, temp, digit;
    printf("Please enter a number:\n");
    scanf("%d", &n);
    for(digit=0; digit<=9; digit++){
        for (temp=n; temp>0; temp/=10){
        if((temp%10)==digit) printf("%d" ,digit);}
       // this program will not work for digits more than 9
} if (digit>9){ printf("Value of error:%d\n", errno);
printf("error message %s\n", strerror(errno));
perror("message:");
printf("enter only 9 digit number");}
printf("\n");}
