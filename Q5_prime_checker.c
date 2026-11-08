#include <stdio.h>
int main(void)
{
    int n;
    int div = 2;
    int truefalse = 1;
    int loopruntime = 0;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("False");
    }
    else
    {
        while (n > div)
        {
            loopruntime++;
            if (n % div == 0)
            {
                truefalse = 0; 
                printf("False\n");
                break;
                
            }
            printf("The loop is still running and see div %d\n", div);
            div++;
        }
    }

    if(truefalse){
        printf("True\n");
    }

    // if(n%div!=0){
    //     printf("True");
    // }
    printf("see the loop runtime %d", loopruntime);
    return 0;
}