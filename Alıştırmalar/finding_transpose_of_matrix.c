#include <stdio.h>


int main()
{
    int row,col;

    printf("Please enter a row: ");
    scanf("%d",&row);

    printf("Please enter a col: ");
    scanf("%d",&col);

    int matrix[row][col];
    int matrix1[col][row];

    // ENTERING ELEMENTS OF MAIN MATRIX

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Please enter an %d.%d element of matrix: ",(i+1),(j+1));
            scanf("%d",&matrix[i][j]);
        }    
    }

   printf("\n");
   printf("\n");

    // CREATE TRANSPOSE OF MAIN MATRIX

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
             matrix1[i][j] = matrix[j][i];
        }
        
    }


    // SHOW MAIN MATRIX
     printf("Main Matrix: \n");

     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
             printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
   
   printf("\n");
   printf("\n");

    // SHOW TRANSPOSE OF MAIN MATRIX
      printf("Transpose of Main Matrix: \n");

      for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
             printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
