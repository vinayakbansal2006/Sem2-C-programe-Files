#include <stdio.h>
int main() {
    int a,choice,p1,y;
    printf("enter the number  ");
    scanf("%d",&a);
    // vinayak bansal 24070122233

    while (y=1)
    {
    printf("enter the choice  ");
    scanf("%d",&choice);


    switch (choice)
    {

    case 1:
    if(a%2==0){
        printf("the number is even \n");
    }
    else{
        printf("the number is odd \n");
    }
        
        break;



    case 2:
        for (int i=2;i<a;i++){
        
            if (a%i==0){
                printf("%d number is composite \n",a);
            break;
            }
            else{
                printf("%d number is prime \n",a);
            break;
            }
        }
        break;
    


    default:
        printf("invalid output");
        break;
    }
    
    printf("do you want to continue");
    scanf("%d",&y);
    }
    return 0 ;

}