//Matrix operations
#include<stdio.h>
void inputmatrix(int mat[10][10],int rows,int cols){
    int i,j;
    printf("enter matrix elements: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("enter elements at position (%d ,%d ) :",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
        
    }
    
}
void displaymatrix(int mat[10][10],int rows,int cols){
    int i,j;
    printf("matrix: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t",mat[i][j]);
            printf("\n");
        }
        
    }
    
}
void summatrix(int mat[10][10],int mat1[10][10],int sum[10][10],int rows,int cols){
    int i,j;
    printf("enter matrix elements for 1: \n");
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            printf("enter elements at position (%d ,%d ) :",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
        
    }
    printf("enter matrix elements for 2: \n");
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            printf("enter elements at position (%d ,%d ) :",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
        
    }
    // adding to matrix
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            sum[i][j]=mat1[i][j]+mat[i][j];
        }
        
    }
    //printing result
    printf("sum of two matrix \n");
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }


}
void submatrix(int mat[10][10],int mat1[10][10],int sub[10][10],int rows,int cols){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("enetr the elements in matrix(%d,%d) ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
        
    }
    printf("enter matrix elements for 2: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("enetr the elements in matrix(%d,%d) ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
        
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sub[i][j]=mat[i][j]-mat1[i][j];
        }
        
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d",sub[i][j]);
        }
        printf("\n");
    }
    
    
    
}
void transposeMatrix(int rows, int cols, int matrix[10][10], int result[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}


int main(){
    int cont,no1,no2,co,mat1[10][10],mat2[10][10],sum[10][10],rows,cols;
    do {
        printf("menu \n 1.input \n 2.display matrix \n 3.sum of matrix \n 4.subraction \n5.traspose of matrix \n");
        printf("enter the choice ");
        scanf("%d",&co);
        switch (co)
        {
        case 1:
            printf("enter the number of rows and cols for the matrix");
            scanf("%d %d",&rows,&cols);
            inputmatrix(mat1,rows,cols);
            inputmatrix(mat2,rows,cols);
            break;
        
        case 2:
            printf("\n matrix 1: \n");
            displaymatrix(mat1,rows,cols);
            printf("\n matrix 2: \n");
            displaymatrix(mat2,rows,cols);
            break;
            
        case 3:
            printf("enter the number of rows and cols for the matrix ");
            scanf("%d %d",&rows,&cols);
            summatrix(mat1,mat2,sum,rows,cols);
            break;

        case 4:
            printf("enter the number of rows and cols for the matrix ");
            scanf("%d %d",&rows,&cols);
            submatrix(mat1,mat2,sum,rows,cols);
            break;

        case 5:
            printf("Enter the number of rows and columns for the matrix: ");
            scanf("%d %d", &rows, &cols);
            int matrix[10][10], result[10][10];
            
            inputmatrix(matrix, rows, cols);

            printf("Original Matrix:\n");
            displaymatrix(matrix, rows, cols);

            transposeMatrix(rows, cols, matrix, result);

            printf("\nTransposed Matrix:\n");
            displaymatrix(result, cols, rows);
            break;
    
        

        default:
            printf("invlaid option");
            break;
        }
        printf("do you want to continue yes-1 no-2 ");
        scanf("%d",&cont);

    }
    while(cont==1);

    return 0;
}