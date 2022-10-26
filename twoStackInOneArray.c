#include<stdio.h>
#define size 100
int array[size];
int top1=-1;
int top2=size;
void push1(int data);
void push2(int data);
void pop1();
void pop2();
void display1();
void display2();
int i , n1,n2 ,x1,x2,a1,a2,choice;

int main(){
	
	do{
		printf("\nenter the no of elements of first array");
		scanf("%d" , &n1);
		printf("\nenter the no of elements of second array");
		scanf("%d" , &n2);
		if(n1+n2>size)
			printf("\n\tmax number of elements is 100");
		}
	while(n1+n2 > size);
	
	printf("\nenter element to be pushed into first stack");
	for(i = 0 ; i<n1 ; i++)
	{	
		scanf("%d" , &x1);
		push1(x1);
	}
	
	printf("\nenter element to be pushed into second stack");	
	for(i = 0 ; i<n2 ; i++)
	{
		scanf("%d" , &x2);
		push2(x2);
	}
	
	printf("\n first stack");
	display1();
	printf("\n second stack");
	display2();
	
	  printf("\n\t 1.PUSH FIRST STACK\n\t 2.POP FIRST STACK\n\t 3.DISPLAY FIRST STACK\n\t 4.PUSH SECOND STACK\n\t 5.POP SECOND STACK\n\t 6.DISPLAY SECOND STACK\n\t 7.EXIT");
	  
	    do
	    {
		printf("\n Enter the Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
		    case 1:
		    {
		    	printf("\nenter element to be pushed");
			scanf("%d" , &a1);
		        push1(a1);
		        break;
		    }
		    case 2:
		    {
		        pop1();
		        break;
		    }
		    case 3:
		    {
		        display1();
		        break;
		    }
		    case 4:
		    {
		   	printf("\nenter element to be pushed");
			scanf("%d" , &a2);
		        push2(a2);
		        break;
		    }
		    case 5:
		    {
		        pop2();
		        break;
		    }
		    case 6:
		    {
		        display2();
		        break;
		    }
		    
		    case 7:
		    {
		        printf("\n\t EXITING");
		        break;
		    }
		    default:
		    {
		        printf ("\n\t Please Enter a Valid Choice(1/2/3/4/5/6/7)");
		    }

		}
	    }
	    while(choice!=7);
	    
   } //close main
   
   void push1(int data){
   	if(top1<top2-1)
   	{
   		top1++;
   		array[top1] = data;
   		}
   		
	else
		printf("stackoverflow");
	}
	
    void push2(int data){
	   	if(top1<top2-1)
	   	{
	   		top2--;
	   		//if(data == 7)
	   			//printf("top2 value for 7 (1) : %d" , top2);
	   		array[top2] = data;
	   		}
	   		
		else
			printf("stackoverflow");
	}
	
     void pop1()
     {
     	if(top1>=0){
     		printf("\n\t popped element is: %d" , array[top1]);
     		top1--;
     		}
	else
		printf("stack empty");
	}
	
	
     void pop2()
     {
     	if(top2<size){
     		printf("\n\t popped element is: %d" , array[top2]);
     		top2++;
     		}
	else
		printf("stack empty");
	}
	
     void display1()
     {
     	for(i = top1 ; i>=0 ; i--)
     		printf("\n%d" , array[i]);
     		
	}
	
	void display2()
     {
     	for(i = top2 ; i<size ; i++)
     	{	
     		printf("\n value of i :%d" , i);
     		printf("\n%d", array[i]);
     	
     		}
     		
	}
     
	
	


		
   	
	
	
	
