#include<stdio.h>
typedef struct{
	int row;
	int col;
	int value;
	}terms;

void main()
{
	terms M[100];
	int m, n;
	printf("enter the no of rows and columns:");
	scanf("%d %d", &m, &n);
	int matrix [m][n];
	printf("enter the elements");
	for(int i =0;i<m;i++)
	{
		for(int j =0 ; j<n; j++)
		{
			scanf("%d" ,&matrix[i][j]);
		}
	}
	
	M[0].row = m;
	M[0].col = n;
	
	int notzero = 0;
	int z;
	
	for(int i =0,z=1;i<m;i++)
	{
		for(int j =0 ; j<n; j++,z++)
		{
			if(matrix[i][j] != 0)
		 	{
		 		//printf("hi:\t %d\n",matrix[i][j] );
		 		notzero++;
		 		M[z].row = i;
		 		M[z].col = j;
		 		M[z].value = matrix[i][j];
		 		printf("value of row %d\t %d\t %d\n", M[z].row ,M[z].col ,M[z].value);
		 	}
	 	}
 	}
 
 	M[0].value = notzero;
 	printf("%d %d %d\n" , M[2].row , M[2].col, M[2].value);
 	for(int i =0; i<=notzero; i++)
 	{
 		printf("%d %d %d\n" , M[i].row , M[i].col, M[i].value);
 		}
}
