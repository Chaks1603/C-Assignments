#include<math.h>  
int main()
{
    int i, j, n, aj[10][10],transpose[10][10] sum = 0, sum1 = 0, a = 0, normal;

    printf("\nEnter the number of rows x columns of the matrix: \n\n");
    scanf("%d", &n);

    printf("\nEnter the %d elements of the first matrix: \n\n", n*n);

    for(i = 0; i < n; i++)   // to iterate the rows
    {
        for(j = 0; j < n; j++)   // to iterate the columns
        {
            scanf("%d", &aj[i][j]);
            a = aj[i][j]*aj[i][j];  // finding square of each element
            sum1 += a;  // same as sum1 = sum1 + a
        }
    }
    
    printf("\n Matrix outlook :- \n");  //printing the matrix
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    		printf("%d\t" , aj[i][j]);
			printf("\n");
	}
	
	// computing the transpose
    for (i = 0; i < n; i++)
    for ( j = 0; j < n; j++)
    {
      transpose[j][i] = aj[i][j];
    }

    // printing the transpose
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < n; i++)
    for ( j = 0; j < n; j++)
    {
      printf("%d\t", transpose[i][j]);
      printf("\n");
    }
    normal = sqrt((double)sum1);    // typecasting to double value

    printf("\n\nThe normal of the given matrix is: %d", normal);
    for(i = 0; i < n; i++)
    {
        sum = sum + aj[i][i];   // sum of the diagonal elements
    }
    printf("\n\nThe Trace of the given matrix is: %d", sum);
    
    return 0;
}
