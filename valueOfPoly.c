#include<stdio.h>
#include<math.h>
typedef struct{
	int coeff;
	int exp;
	}terms;

int main(){
	int size,x,i = 0;
	printf("enter polynomial size");
	scanf("%d", &size);
	terms p[size];
	printf("enter the coeff and power of the polynomial");
	for(i = 0; i<size ; i++)
	{
		scanf("%d %d" , &p[i].coeff , &p[i].exp);
	}
	
	printf("enter value to evaluate");
	scanf("%d", &x);
	
	int result = 0;
	for(i=0; i<size;i++)
	{
		//printf("%d\n",p[i].exp );
		//printf("%d\n", p[i].coeff);
		int z = floor((pow(x, p[i].exp)));
		int expo = p[i].exp;
		int coef = p[i].coeff;
		int a = coef*z;
		result = result + a;
		//printf("%d\n",z);
		//printf("%d", p[i].coeff*(pow(x,p[i].exp)));
		
		//printf("%d\n", coef*z);
		
		//printf("%d", result);
		
	}
	
	printf("evaluated result : %d" , result);
}
