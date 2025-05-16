#include <stdio.h>
int i, num, isprime=1;
int main(){
    printf("enter the num starting from psirive 2");
    scanf("%d", &num);
    for(i=2;<i=num/2;i++){
        if(num%2==0){
            printf("its not a prime\n");
        }
        else{
            printf("its a prime\n");
        }
    }
    }