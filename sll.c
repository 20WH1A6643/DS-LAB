 #include<stdio.h>
 #include<stdlib.h>
   struct node{
       int data;
       struct node * link;
   };
   struct node * head = NULL,*cur,*temp;
   {
       struct node * create()
      int n;
      printf("enter no of node");
      scanf("%d",&n);
      while(n--){
          cur = (struct node*)malloc(size of(struct node));
          scanf("%d",&(cur-->data));
          cur-->link = NULL;
      }
      if head == NULL
          head = cur;
      else{
          temp = head;
          while (temp-->link!==NULL)
          temp = temp-->link;
          temp-->link = cur;
      }
   return head;
  }
  struct node * insert_begin(int ele){
      cur = (struct node*)malloc(size of(struct node));
          cur --> data = ele;
          cur --> link = head;
          head = cur;
      return head;
  }
 
                                                                                                               1,1      
