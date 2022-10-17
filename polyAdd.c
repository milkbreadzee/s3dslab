#include<stdio.h>
typedef struct{
	int coeff;
	int exp;
	}terms;

void main()
{
	int size1;
	int size2;
	
	printf("enter size of the first polynomial");
	scanf("%d", &size1);
	printf("enter size of the second polynomial");
	scanf("%d", &size2);
	
	terms p1[size1];
	terms p2[size2];
	
	
	printf("enter the first polynomial : coeff, expo");
	for(int i = 0; i<size1; i++){
		scanf("%d" "%d", &p1[i].coeff , &p1[i].exp);
	}
	printf("enter the second polynomial : coeff, expo");
	for(int i = 0; i<size2; i++){
		scanf("%d" "%d", &p2[i].coeff , &p2[i].exp);
	}
	
	int c = size1 +size2;
	terms sum[c];
	int i = 0, j= 0, z= 0;
	
	while(i<size1 && j<size2)
	{
		if(p1[i].exp > p2[j].exp)
		{
			sum[z].exp = p1[i].exp;
			sum[z].coeff = p1[i].coeff;
			i++;
			z++;
		}
		
		else if(p2[j].exp > p1[i].exp)
		{
			sum[z].exp = p2[j].exp;
			sum[z].coeff = p2[j].coeff;
			j++;
			z++;
		}
		
		else{
		sum[z].exp = p1[i].exp;
		sum[z].coeff= p1[i].coeff + p2[j].coeff;
		z++;
		i++;
		j++;
		}
	}
	
	while(i<size1){
	sum[z].exp = p1[i].exp;
	sum[z].coeff = p1[i].coeff;
	i++;
	z++;
	}
	while(j<size1){
	sum[z].exp = p2[j].exp;
	sum[z].coeff = p2[j].coeff;
	j++;
	z++;
	}
	
	printf("sum of polynomials:\n");
	for(int i =0; i <z;i++)
	{
		printf("%d", sum[i].coeff);
		printf("x^ %d\t", sum[i].exp);
		if(i!= (z))
			printf("+");
	}
	
	
}
