#include<stdio.h>
#include<string.h>
void compare(char s1[100],char s2[100]){
    if (strcmp(s1,s2)==0)
    {
        printf("string are equal \n");
    }
    else{
        printf("string are not equal \n");
    }
    

}
void copy(char s1[10],char s3[10]){
    printf("%s",s1);
    strcpy(s3,s1);
    printf("%s",s3);

}


void join(char s1[100],char s2[100]){
    strcat(s1,s2);
    printf("%s\n", s1);

}

// void substring
void occ(char s1[10]){
    printf("enter string");
    scanf("%s",s1);
    printf("the length of string is : %lu",strlen(s1));

}
void vowels(char s1[10]){
    int count =0;
    int i =0;
    char ch;
    while (s1[i] != '\0')
    {
        if (ch== 'a' || ch== 'e' ||ch== 'i' ||ch== 'o' ||ch== 'u'){
            count ++;
            i++;

        }
        
            
        
        
    }
    printf("total number of vowels %d",count);
}

int main(){
    int choice,cont;
    char s1[10],s2[10],s3[10];
    printf("menu \n 1) compare \n 2) copy \n 3) concate \n 4) occurence \n 5) vowels \n");
    printf("enter choice\n");
    scanf("%d",&choice);
    do
    {
        switch (choice)
        {
        case 1 :
            printf("enter string 1");
            scanf("%s",s1);
            printf("enter string 2");
            scanf("%s",s2);
            compare(s1,s2);
            break;
        case 2:
            printf("enter string 1");
            scanf("%s",s1);
            printf("%s",s1);
            copy(s1,s3);
            break;
        case 3:
            printf("enter string 1");
            scanf("%s",s1);
            printf("enter string 2");
            scanf("%s",s2);
            join(s1,s2);
            break;
        case 4:
            /*printf("enter string 1");
            scanf("%s",&s1);
            printf("enter string 2");
            scanf("%s",&s2);
            compare(s1,s2);*/
            occ(s1);
            break;
        case 5:
            printf("enter string 1 \n");
            scanf("%s",s1);
            vowels(s1);
            break;


        default:
            break;
        }
        printf("do u want to continue 1 for yes 2 for no");
        scanf("%d",&cont);
        
    } while (cont == 1);
    
    
    
    
    
    
    return 0;
}