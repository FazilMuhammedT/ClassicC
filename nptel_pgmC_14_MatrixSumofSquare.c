#include <stdio.h>

/* Matrix Problem
 * The first line of the input consists of two positive integers m and n
 * This line is followed by m lines, each containing n integers signigying m X n matrix A.
 * We have to calculate the sum of the squares of the sum of numbers in each row and print it.
 */

int main (){

	int m, n, A[10][10], sum = 0, totalSum = 0;

	printf("Enter m and n values : " );
	scanf("%d%d",&m,&n);

	printf("Enter the row and column values\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	
	printf("Entered Matrix row and column values\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ",A[i][j]);
			sum += A[i][j];
		}
		totalSum += sum * sum;
		sum = 0;
		printf("\n");
	}

	printf("Sum of the square of the sum of numbers in each row is %d\n",totalSum);

	return 0;
} 
