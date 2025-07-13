#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,discriminant,r1,r2,realpart,imaginarypart;
    printf("enter the coffiecent of x2 ");
    scanf("%d",&a);
    printf("enter the coffiecent of x ");
    scanf("%d",&b);
    printf("enter the constant ");
    scanf("%d",&c);

    discriminant=b*b - 4*a*c;
    if(discriminant>=0){

    
    r1 = (-b+sqrt(discriminant))/2*a;
    r2 = (-b-sqrt(discriminant))/2*a;

    printf("the first root is %f \n",&r1);
    printf("the second root is %f \n",&r2);
    }
    else{
        double realpart = -b/(2*a);
        double imaginarypart = sqrt(-discriminant)/(2*a);
        printf("roots are complex \n");
        printf("r1 = %1f +%1f \n",realpart,imaginarypart);
        printf("r2 = %1f +%1f \n",realpart,imaginarypart);

    }
    return 0;
}