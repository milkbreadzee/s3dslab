#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* stack;
int top = -1;
int isPalindrome();
void push(char ch);
char pop();


int isPalindrome(char str[]){
	
	int len = strlen(str); //getting length for dynamic mem allocation so as to not waste memory.
	stack = (char*)malloc(len*sizeof(char)); //created stack with enough memory to hold the inputted string.
	
	//comparing the two halves of the string.
	//if the len is odd, we ignore the middle letter.
	
	int i, mid = len/2;
	
	//put the first half of the string into the stack.
	while(i< mid){
		push(str[i]);
		i++;
		}
	
	//ignoring the middle character if its odd in lenght
	if(len%2 != 0){
		i++;}
	
	while(str[i]!= '\0') { //checking if its the end of the string. \0 is the null terminator
	//its used to mark the end of a string.
	
		char ch = pop();
		
		if(ch != str[i]){
			return 0;}
		i++;
	} //closing while loop
	
	return 1;
}//close method
		
	
	
	
	
/// push code
void push(char ch){
	stack[++top] = ch;
	}
//pop code
char pop(){
	return stack[top--];
	}
	
	

void main(){

	char str[] = "hiih";
	
	if(isPalindrome(str))
		printf("yes");
	else
		printf("no");
}

