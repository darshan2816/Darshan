
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a[n];
    int *ptr=a;
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
     printf("Elements are:\n");
    for(i=0;i<n;i++){
    printf("%d\n",*(ptr+i));
}
}