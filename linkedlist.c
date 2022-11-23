
#include <stdio.h>
#include <stdlib.h>

 
struct node
{
    struct node* prev;
    int data;
    struct node* next;
};
 
struct node* head = NULL;
struct node* tail = NULL;


struct node* create_node(int data);
void insert_at_beginning(int data);
void print_from_beginning();
void insert_at_end(int data);
void insert_after_key(int key, int data);
void insert_before_key(int key, int data);
void insert_at_pos(int pos, int data);
int length();

int main(){
	insert_at_beginning(5);
	insert_at_beginning(6);
	print_from_beginning();
	insert_at_end(20);
	print_from_beginning();
	insert_after_key(6, 143);
	print_from_beginning();
	insert_before_key(5,69);
	print_from_beginning();
	insert_at_pos(1,34);
	print_from_beginning();
	
}

void print_from_beginning()
{
    struct node* temp = head;
 
    while (temp != NULL) {
        printf("%d", temp->data);
        printf(" ");
        temp = temp->next;
    }
    printf("\n");
}
 
 
struct node* create_node(int data)
{
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
 
    if (new_node == NULL)
    {
        return NULL;
    }
    else
    {
        new_node->prev = NULL;
        new_node->data = data;
        new_node->next = NULL;
    }
}

 
/* inserts a new node at beginning of the list */
void insert_at_beginning(int data)
{
    struct node* new_node = create_node(data);
 
    if (new_node == NULL)
    {
        printf("insufficient memory");
        return;
    }
    else if(head == NULL)
    {
        head = new_node;
        tail = new_node; //this is the link between tail and head, if this line is not present itll show segmentation error
    }
    else
    {
        head->prev = new_node;
        new_node->next = head;
        head = new_node;
    }
    printf("\n* Node with data %d was inserted in the front\n", data);
}

void insert_at_end(int data)
{
	struct node* new_node = create_node(data);
	
 
    if (new_node == NULL)
    {
        printf("insufficient memory");
        return;
    }
    else if(head == NULL)
    {
    	head = new_node;
    	tail = new_node;//this is the link between tail and head, if this line is not present itll show segmentation error
    	}
    else{
    	tail->next = new_node;
    	new_node->prev = tail;
    	tail = new_node;
    }

}

void insert_after_key(int key, int data){

	struct node* new_node = create_node(data);
	struct node* ptr = head;
	
	if(new_node == NULL)
	{
	 	printf("insufficient memory");
       	 	return;	
	}
	else if(head == NULL)
    	{
    		printf("list is empty, inserted data as first element\n");
    		head = new_node;
    		tail = new_node;//this is the link between tail and head, if this line is not present itll show segmentation error
    	}
    	else if(ptr->next == NULL)
    	{
    		ptr->next = new_node;
        	new_node->prev = ptr;
        	tail = new_node;
    	}
    	else{
    		
    		
    		while(ptr->data != key && ptr->next != NULL)
    		{
    			ptr = ptr->next;	
    		}
    		
    		struct node* temp = ptr->next;
    		new_node->next = temp;
    		ptr->next = new_node;
    		temp->prev = new_node;
    		new_node->prev = ptr;
    		
    		
    		
    	
    	}
    	
	
}

void insert_before_key(int key, int data){

	struct node* new_node = create_node(data);
	struct node* ptr = head;
	
	if(new_node == NULL)
	{
	 	printf("insufficient memory");
       	 	return;	
	}
	else if(head == NULL)
    	{
    		printf("list is empty, inserted data as first element\n");
    		head = new_node;
    		tail = new_node;//this is the link between tail and head, if this line is not present itll show segmentation error
    	}
    	else if(ptr->prev == NULL) //if its the head
    	{
    		ptr->prev = new_node;
        	new_node->next = ptr;
        	head = new_node;
    	}
    	else{
    		
    		
    		while(ptr->data != key && ptr->next != NULL)
    		{
    			ptr = ptr->next;	
    		}
    		
    		struct node* temp = ptr->prev;
    		temp->next = new_node;
    		new_node->prev = temp;
    		new_node->next = ptr;
    		ptr->prev = new_node;
    		
    		
    		
    		
    	
    	}
    	
	
}

int length(){

	struct node* ptr = head;
	int count = 1;
	while(ptr->next!= NULL)
		{
			count++;
			ptr = ptr->next;
		}
	return count;
}

void insert_at_pos(int pos, int data){

	struct node* new_node = create_node(data);
	struct node* ptr = head;
	int d = data;
	if(new_node == NULL)
	{
	 	printf("insufficient memory");
       	 	return;	
	}
	else if(head == NULL)
    	{
    		printf("list is empty, inserted data as first element\n");
    		head = new_node;
    		tail = new_node;//this is the link between tail and head, if this line is not present itll show segmentation error
    	}
    	else
    	{
    		for(int i = 1; i <= pos; i++){
    			ptr = ptr->next;
    		}	
    		
    		
    		insert_before_key(ptr->data, d);
    	}
	







}
