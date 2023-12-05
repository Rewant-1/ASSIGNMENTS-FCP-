#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter values of x and y\n");
    scanf("%d%d",&x,&y);
    z=x%y;
    switch(z)
    { 
        case 0:
           printf("Number is divisible\n");
           break ;
        case 1:
           printf("Number is not divisible,, remainder is 1\n");
           break ;
        case 2:
           printf("Number is not divisible, remainder is 2\n");
           break ;
        case 3:
           printf("Number is not divisible, remainder is 3\n");
           break;
        case 4:
           printf("Number is not divisible, remainder is 4\n");
           break ;
        case 5:
            printf("Number is not divisible, remainder is 5\n");
            break ;
        case 6:
             printf("Number is not divisible, remainder is 6\n");
             break ;
        case 7:
             printf("Number is not divisible, remainder is 7\n");
             break ;
        case 8:
             printf("Number is not divisible, remainder is 8\n");
             break ;
    }
return 0;

}