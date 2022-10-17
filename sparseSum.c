#include <stdio.h>
typedef struct{
	int row;
	int col;int value;
}terms;

int main()
{
	int a,b;
	printf("enetr the no of non zero elements of matrix 1:\n");
	scanf("%d" , &a);
	//printf("enetr the no of non zero elements of matrix 2:\n");
	//scanf("%d" , &b);
	terms M1[a];
	terms M2[3];
	terms MS[a+b];
	
	printf("enter sparse matrix1 in the order : row column value");
	for(int i = 0; i<=a ; i++)
	{
		scanf("%d %d %d ", &M1[i].row ,&M1[i].col ,&M1[i].value );
	}
	printf("enter sparse matrix2 in the order : row column value");
	for(int i = 0; i<=b ; i++)
	{
		scanf("%d %d %d ", &M2[i].row ,&M2[i].col ,&M2[i].value );
		if(i == 3)
			printf("hi");
	}
	MS[0].row = M1[0].row;
	MS[0].col = M1[0].col;
	
	if(M1[0].row != M2[0].row && M1[0].col != M2[0].col)
		printf("cannot add. incompatible matrix size");
		
	int z = 1, x = 1, y= 1;
	
	for(int i = 0; i< M1[0].row; i++)
	{
		for(int j = 0 ; j< M1[0].col;j++)
		{
			if(M1[x].row == i && M1[x].col == j && M2[y].row == i && M2[y].col == j)
				{
					MS[z].row = i;
					MS[z].col = j;
					MS[z].value = M1[x].value + M2[y].value;
					x++;
					y++;
					z++;
					
				}
			else if(M1[x].row == i && M1[x].col == j)
				{
					MS[z].row = i;
					MS[z].col = j;
					MS[z].value = M1[x].value;
					x++;
					z++;
				}
			else if(M2[y].row == i && M2[y].col == j)
			{
				
					MS[z].row = i;
					MS[z].col = j;
					MS[z].value =M2[y].value;
					y++;
					z++;
			}
		}
		
	}
	
	MS[0].value = --z;
	
	printf("sum of sparse matrix");
	for(int i = 0; i<MS[0].value; i++){
		printf("%d\t %d\t %d\n" ,MS[i].row, MS[i].col, MS[i].value);
	}
}


