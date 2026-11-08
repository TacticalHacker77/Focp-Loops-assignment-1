#include <stdio.h>
int main (void){
    int a;
    int r;
    int n;
    printf("Enter first term");
    scanf("%d", &a);
    printf("Enter common ratio");
    scanf("%d", &r);
    printf("Enter number of term");
    scanf("%d", &n);
    int sum=0;
while (n){
    sum = sum + a;
    a = a*r;
    // printf("see what happens to n above n--%d\n", n);
    n--;
    // printf("see what happens to n below n--%d\n", n);
}
printf("Sum of the series %d", sum);



    return 0;
}