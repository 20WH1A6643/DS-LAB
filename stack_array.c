#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int top = -1,stack[SIZE],i;
void push(int ele){
    stack[++top] = ele;
    }
    int pop()
    {
    return(stack[top--]);
    }
    int peek()
    {
    return(stack[top]);
    }
    void display()
    {
        for(i = top;i>=0;i--)
            printf("%d\n",stack[i]);
    }
//main function
int main(){
int ch,element;
while(1){
    printf("\n1-push \n2-pop \n3-peek \n4-display \n5-exit");
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch){
     case 1:if(top == SIZE-1)
                printf("stack overflow");
            else{    
                printf("enter element to be inserted");
                scanf("%d",&element);
                push(element);
                }
                break;
    case 2:if(top == -1)
                printf("stack underflow");
                else
                printf("deleted element id %d",pop());
                break;
    case 3:if(top == -1)
                printf("stack underflow");
           else 
                printf("top element  is %d",peek());
                break;
    case 4:if(top == -1)
                printf("stack underflow");
           else
                display();
                break;
    case 5:exit(0);
               }
        }
}        







