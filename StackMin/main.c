#include <stdio.h>
#include <stdlib.h>
int pop();
int push();
int getMin();
int stack[100];
int top,x,n,topg,xg,choice;
int aux[100];
int ng;

int main()

{
    ng = 100;
    top=-1;
    topg = -1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);

    printf("enter the elements of  the stack");

    for(int i = 0; i< n ; i++)
    {
        //printf("%d", top);
         if(top>=n-1)
            {
                printf("\n\tSTACK is overflow");

            }
        else
            {
                printf(" \nEnter a value to be pushed:");
                scanf("%d",&x);
                top++;
                stack[top]=x;
            }


        if(topg == -1)
            {
                //printf("\n topg inside insert topg==-1%d" , topg);
                        topg++;
                        aux[topg]=x;
                     //   printf("\n inserting min no: %d to auxarray " , aux[topg]);
            }
         else
                {

                if(aux[topg]>=x){
                    topg++;
                    aux[topg]=x;
                 //   printf("%d" , aux[topg]);
                }
            }
    }


    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                printf("\n min after pushing %d" , getMin());
               // display();
                break;
            }
            case 2:
            {
                pop();
                printf("min after popping %d" ,getMin());
               // display();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXITING");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }

        }
    }
    while(choice!=4);

    printf("final min %d" , getMin());

    return 0;
}

int push()
{
     if(top>n-1)
    {
        printf("\n\tSTACK is overflow");

    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    //    printf("\n topg inside push first else%d" , topg);
    }

    if(topg == -1)
    {
      //  printf("\n topg inside push topg==-1%d" , topg);
                topg++;
                aux[topg]=x;
              //  printf("\n inserting min no: %d to auxarray " , aux[topg]);
    }

    else{

        if(aux[topg]>=x){
            topg++;
            aux[topg]=x;
        }
    }

    return 0;
}

int pop()
{
    int t;
    if(top<=-1)
    {
        printf("\n\t There are no more elements to pop");
    }
    else
    {
        t = stack[top];
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }

    if(t == aux[topg])
    {
        topg--;
    }

return 0;
}

int getMin()
{
    return aux[topg];
}

void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(int i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }

}
