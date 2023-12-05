#include<stdio.h>
int main(){
int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num%3==0 && num%5==0 && num%6==0 && num%7==0 && num%8==0 ){
       printf("Number is divisible by 3,5,6,7,8\n");
    }
    else
        printf("Number is not divisible\n");
        return 0;
}