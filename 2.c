#include <stdio.h>
int main() {
    int a,b,result;
    printf("enter two integer ");
    scanf("%d %d",&a,&b);
    if(a==b){
        result = 0;
    }
    if(a>b){
        result = 1;
    }
    if(a<b){
        result = -1;
    }
    switch (result)
    {
    case 0:
        printf("both integer are equal ");
        break;
    case 1:
        printf("the first integer is greater");
        break;
    case -1:
        printf("the second integer is greater");
        break;
    
    default:
        printf("invalid comparison");
        break;
    }
    return 0;
}