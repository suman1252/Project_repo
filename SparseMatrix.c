//Sparse Matrix
/*
#include<stdio.h>
#define MAX_DIM 100

int isSparseMatrix(int mat[][MAX_DIM],int rows,int cols)
{
    int nonZeroCount=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(mat[i][j]!=0)
            {
                nonZeroCount++;
            }
        }
    }
    float density=(float) nonZeroCount;
    if(density<0.5)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int rows,cols;
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&rows,&cols);
    if(rows<=0||cols<=0||rows>MAX_DIM||cols>MAX_DIM)
    {
        printf("Invalid input \n");
        return 1;
    }
    int matrix[MAX_DIM][MAX_DIM];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    if(isSparseMatrix(matrix,rows,cols))
    {
        printf("The matrix is sparse.\n");
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(matrix[i][j])
                {
                    continue;
                }
                else{
                    printf("%3d%3d%3d",i,j,matrix[i][j]);
                }
                printf("\n");
            }
        }
    }
    else{
        printf("The matrix is not sparse.\n");
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                printf("%3d",matrix[i][j]);
            }
            printf("\n");
        }
    }
    printf("end prg.");
    return 0;
}
*/
