#include<stdio.h>
int main(){
int a[3][3],b[3][3],c[3][3],r,i,j,k;
int m=3,n=3,p=3,q=3;
for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
    { a[i][j]=(i+2)+(j-5);
        b[i][j]=(i+1)+ (j+1); }
}
printf("Adjoint of matix c\n");
for (i=0;i<3;i++)
{ for(j=0;j<3;j++)
    { c[i][j]=a[(j+1)%3][(i+1)%3]*a[(j+2)%3][(i+2)%3]-a[(j+1)%3][(i+2)%3]*a[(j+2)%3][(i+1)%3];
       printf("%d ",c[i][j]);
    }
printf("\n");
}

 

return 0;
}