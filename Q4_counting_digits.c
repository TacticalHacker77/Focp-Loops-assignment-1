#include <stdio.h>
int main (void){
int count = 0;
long long n; 
scanf("%lld", &n);
if(n==0){
    count = 1;
} else{

    for(count = 0; n>0; count++){
        n /= 10;
        
    }
}
printf("no of digits: %d", count);



    return 0;
}