#include<stdio.h>
int dtb(int decimal){
    int binary=0,rem=0,base=1;
    while(decimal>0){
        rem=decimal%2;
        binary=binary+rem*base;
        decimal=decimal/2;
        base=base*10;
    }
    return binary;
}
int dto(int decimal){
    int octal=0,rem=0,base=1;
    while(decimal>0){
        rem=decimal%8;
        octal=octal+rem*base;
        decimal=decimal/8;
        base=base*10;
    }
    return octal;
}
int btd(long long binary){
    int decimal=0,rem=0,base=1;
    while (binary > 0){
        rem=binary%10;
        decimal=decimal+rem*base;
        binary=binary/10;
        base=base*2;
    }
    return decimal;
}
int otd(int octal){
    int decimal=0,rem=0,base=1;
    while (octal > 0){
        rem=octal%10;
        decimal=decimal+rem*base;
        octal=octal/8;
        base=base*8;
    }
    return decimal;
}
int main(){
    int choice,cont,decimal,octal,answer;
    long long binary;
    do{
    printf("MENU\n");
    printf("1. Decimal to Binary\n");
    printf("2. Decimal to Octal\n");
    printf("3. Decimal to Hexadecimal\n");
    printf("4. Binary to Decimal\n");
    printf("5. Octal to Decimal\n");
    printf("6. Hexadecimal to Decimal\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            printf("Enter the number ");
            scanf("%d",&decimal);
            answer = dtb(decimal);
            printf("%d",answer);
            break;
        case 2:
            printf("Enter the number ");
            scanf("%d",&decimal);
            answer = dto(decimal);
            printf("%d",answer);
            break;
        // case 3:
        //     printf("enter the number");
        //     scanf("%d",&decimal);
        //     answer = dth(decimal);
        //     printf("%d",answer);
        //     break;
        case 4:
            printf("Enter the number ");
            scanf("%lld",&binary);
            answer = btd(binary);
            printf("%d",answer);
            break;
        case 5:
            printf("Enter the number ");
            scanf("%d",&octal);
            answer = otd(octal);
            printf("%d",answer);
            break;
        // case 6:
        //     /* code */
        //     printf("invaion");
        //     break;
        default:
            printf("Invalid option");
            break;
    }

    printf("\nDo u want to continue(yes-1/no-2) ");
    scanf("%d",&cont);
    }while (cont==1);

    return 0;

}