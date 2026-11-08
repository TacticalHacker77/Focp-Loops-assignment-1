#include <stdio.h>
int main (void){
    int n;
    printf("Enter number");
    scanf("%d", &n);
    int fact =1;
 
    int i =n;
if(i==0){
        fact = 1;
}
    while (i>0)
{
 
    fact = fact*i;
    i--;
    printf("Yo see the calculation %d", fact);
    
}
printf("Fcatorial is %d", fact);


    return 0;
}
// do while with increment