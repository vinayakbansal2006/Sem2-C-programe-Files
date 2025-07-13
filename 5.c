#include<stdio.h>
int binarysearch(int a[],int n,int m){
    int beg,end,mid,flag=0;
    beg = 0;
    end = n-1;
    while(beg<=end)
    {
        mid =(beg+end)/2;
        if (a[mid]==m)
        {
            printf("\n element found at position %d",mid);
            return mid; 
        }
        if (a[mid]>m)
        {
            end=mid-1;
        }
        if(a[mid]<m)
        {
            beg=mid+1;
        }
    }
    if (flag== -1){
        printf("\n element not found");
    }
}
int main(){
    int i,n,key;
    printf("enter the size of array ");
    scanf("%d",&n);
    int arr[n];

    printf("enter %d sorted number: \n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("enter the element to search");
    scanf("%d",&key);

    int result = binarysearch(arr,n,key);

    if(result != -1){
        printf("element %d found at index %d.\n",key,result);
    }
    else {
        printf(" element %d not found in array.\n,key");
    }
    
    return 0;
}