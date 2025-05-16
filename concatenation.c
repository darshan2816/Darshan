#include<stdio.h>
 #include<string.h>
 int main(){
     char a[20];
     printf("Enter a name:");
     scanf("%s",&a);
     strcat(a ," Nagaloti");
     printf("After concatination:%2s",a);
 }