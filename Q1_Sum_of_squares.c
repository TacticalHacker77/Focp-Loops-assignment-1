/*
Given a positive integer n, calculate the sum of the series: 
1² + 2² + 3² + 4² + ... + n² 
*/

#include <stdio.h>
int main (void){
    int i =0;
    int n;
    int sum=0;
    printf("Enter The Last Term to be squared  ");
    scanf("%d", &n);
while (i<n)
{
    i= i+1;
    sum = sum + i*i;
}
printf("Sum of series is %d", sum);




    return 0;
}