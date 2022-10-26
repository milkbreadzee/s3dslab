#include<stdio.h>
int n,c,x,a,b,ch,num,top1,top2;
void toBin(int data);
void toHex(int data);
void pushbin(int data);
void pushhex(int data);
void pop();
void displayBin();
void displayHex();
int stack[100];
int stack2[100];

int main(){
	
	top1 = -1;
	top2= -1;
	c=0;
	ch=0;
	
	printf("enter the decimal no : \n");
	scanf("%d" , &n);
	
	toBin(n);
	displayBin();
	toHex(n);
	printf("\n");
	displayHex();
	//int x2 = toHex(n);
	//printf("\nthe binary equivalent of %d is : %d" , n ,x1);
	//printf("\nthe binary equivalent of %d is : %d" , n ,x2);
	
	}
	
void toBin(int data)
{
	num = data;
	while(num!=0)
	{
		a = num%2;
		pushbin(a);
		c++;
		num = num/2;
		}	
}

void toHex(int data)
{
	num = data;
	while(num!=0)
	{
		b = num%16;
		pushhex(b);
		ch++;
		num = num/16;
		}
}


void pushbin(int data)
{
    if(top1>=99)
    {
        printf("\n\tSTACK is overflow");

    }
    else
    {
        top1++;
        stack[top1]=data;
    }
}

void pushhex(int data)
{
	if(top2>=99)
    {
        printf("\n\tSTACK is overflow");

    }
    else
    {
    	if(data>=10 && data<=15)
    	{
    		//printf("\n\tdata1%d" , data);
    		top2++;
    		switch(data){
    			case 10: { stack2[top2] = 65;//printf("\n\tstack2%d" , stack2[top2]);
    					break;}
			case 11: { stack2[top2] = 66;//printf("\n\tstack2%d" , stack2[top2]);
    					break;}
			case 12: { stack2[top2] = 67;//printf("\n\tstack2%d" , stack2[top2]);
    					break;}
			case 13: { stack2[top2] = 68;//printf("\n\tstack2%d" , stack2[top2]);
    					break;}
			case 14: { stack2[top2] = 69;//printf("\n\tstack2%d" , stack2[top2]);
    					break;}
			case 15: { stack2[top2] = 70;//printf("\n\tstack2%d" , stack2[top2]);
    					break;}
			}
		}
	else{
	
		top2++;
		//printf("\n\tdata2%d" , data);
		stack2[top2]=data;
		
		}
    }
}

void displayBin()
{
	for(int i = c ; i>=0 ; i--){
		printf("%d", stack[i]);
		
	}
}

void displayHex()
{
	for(int i = ch; i>=0 ; i--)
	{
		if(stack2[i]>=65 && stack2[i]<=70){
		char q = stack2[i];
			printf("%c" , q);
			}
			
		else
			 printf("%d", stack2[i]);
	}
}	
		
