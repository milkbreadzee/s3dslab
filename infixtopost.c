#include<stdio.h>
#include<ctype.h>
char stack[100];
int top = -1;

//push code
void push(char x)
{
    stack[++top] = x;
}

//pop code
char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

//priority assigning
int priority(char x){
	if(x == '(') // ) not included bc we use it to pop in the driver code anyways.
		return 0;
	if( x == '+' || x == '-')
		return 1;
	if(x =='*' || x == '/')
		return 2;
	return 0; //??? if operator doesnt match itll assume top priority?
}

//driver code
void main(){
	char e[100];
	char*exp,x;
	printf("enter the expression:");
	scanf("%s", &e);
	exp = e;
	
	while(*exp!= '\0'){
		if(isalnum(*exp))
			printf("%c", *exp);
		else if(*exp == '(')
			push(*exp);
		else if(*exp == ')')
			{
				while((x = pop()) != '(') 
					printf("%c",x);
				//pop() : we dont need this here bc 
				//it already gets popped in the while loop when it checks for condition true.
			}
		else
			{
				//if(*exp == '-')
				//	printf("\n im -");
				//if(*exp == '/')
				//	printf("%c",stack[top]);
				while(priority(stack[top]) >= priority(*exp))
					printf("%c",pop());
				push(*exp);	
			}
			
		exp++; //???
			
	}//close while
	
	//print postfix
	while(top!=-1){
		printf("%c",pop());
	}
}
