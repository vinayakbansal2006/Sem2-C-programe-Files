#include <stdio.h>
int main(){
    int a=0,b=1,sum,n,i;
    sum=a+b;
    printf("enter limit ");
    scanf("%d",&n);
    printf("%d %d\n",a,b);
    for (int i = 3; i <= n; i++)
    {
        printf("%d \n",sum);
        a=b;
        b=sum;
        sum = a+b;
        
    }
    return 0;
}