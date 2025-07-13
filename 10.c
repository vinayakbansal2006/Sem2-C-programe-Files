#include<stdio.h>
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
    int binary,ans;
    binary=10;
    ans=otd(binary);
    printf("%d",ans);
    return 0;
}