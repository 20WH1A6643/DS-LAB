#include<stdio.h>
#include<stdlib.h>
struct node{
    int data,element;
    struct node*link;
    };
    struct node*top = NULL,*cur,*temp;
    
void push(int element)
{
    cur = (struct node*)malloc(sizeof(struct node));
    cur-> data = element;
    if(top == NULL)
        cur->link = NULL;
    else
        cur->link = top;
        top = cur;
}
int pop(){
    temp = top;
    if(top == NULL)
        printf("stack underflow\n");
    else{
        top = top->link;
        return(temp->data);
        free(temp);
        }
}
int peek(){
           return (top->data);
          }
void display(){
        temp = top;
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp = temp->link;
        }    
}
int main(){
        int element,ch;
        while(1){
               printf("1-push\n 2-pop\n 3-peek\n 4-display/n 5-exit");
               printf("enter your choice");
               scanf("%d",&ch);
               switch(ch){
                      case 1:printf("enter element");
                             scanf("%d",&element);
                             push(element);
                             break;
                      case 2:printf("deleted element");
                             break;
                      case 3:if(top == NULL)
                                printf("stack underflow");
                             else
                                printf("topmost element %d",peek());
                             break;
                      case 4:if(top == NULL)
                                printf("stack underflow");
                             else
                                display();
                             break;
                      case 5:exit(0);
                }
        }
}        
                                


