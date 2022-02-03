#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};

struct node *head = NULL, *cur, *temp, *temp1;
int pos, c;

struct node *Create(){
	int n;
	printf("Enter no.of nodes\n");
	scanf("%d",&n);
	while(n--){
		cur = (struct node *)malloc(sizeof(struct node));
		printf("Enter data value: ");
		scanf("%d", &(cur -> data));

		if (head == NULL){
			cur -> link = cur;
			head = cur;
		}
		else{
			temp = head;
			while (temp -> link != head)
				temp = temp -> link;
			temp -> link = cur;
			cur -> link = head;
		}
	}
	return head;
}

void display(struct node *head){
	temp = head;
	while(temp -> link != head){
		printf("%d -> ", temp -> data);
		temp = temp -> link;
	}
	printf("%d -> ", temp -> data);
	printf("\n");
}

struct node *Insert_begin(struct node *head){
	cur = (struct node *)malloc(sizeof(struct node));
	printf("Enter value to insert at begin: ");
	scanf("%d", &(cur -> data));
	cur -> link = head;
	temp = head;
	while(temp -> link != head)
		temp = temp -> link;
	temp -> link = cur;
	head = cur;
	return head;
}

struct node *Insert_end(struct node *head){
	cur = (struct node *)malloc(sizeof(struct node));
	printf("Enter value to insert at begin: ");
	scanf("%d", &(cur -> data));
	cur -> link = head;
	temp = head;
	while(temp -> link != head)
		temp = temp -> link;
	temp -> link = cur;
	return head;
}

struct node *Insert_pos(struct node *head){
	cur = (struct node *)malloc(sizeof(struct node));
    printf("Enter value to insert: ");
 	scanf("%d", &(cur -> data));
	printf("Enter where the element should be inserted: ");
	scanf("%d", &pos);
	c = 1;
	temp = head;
	while (c < pos - 1){
		temp = temp -> link;
		c++;
	}
	cur -> link = temp -> link;
	temp -> link = cur;
	return head;
}

struct node *Delete_begin(struct node *head){
	temp = temp1 = head;
	while(temp -> link != head)
		temp = temp -> link;
	temp -> link = temp1 -> link;
	head = temp1 -> link;
	printf("deleted element %d\n", temp1 -> data);
	free(temp1);
	return head;
}

struct node *Delete_end(struct node *head){
	temp = head;
	while(temp -> link != head){
		temp1 = temp;
		temp = temp -> link;
	}
	temp1 -> link = head;
	printf("deleted element %d\n", temp -> data);
	free(temp);
	return head;
}

struct node *Delete_pos(struct node *head){
	printf("Enter where the element should be deleted: ");
	scanf("%d", &pos);
	c = 1;
	temp = head;
	while (c < pos){
		temp1 = temp;
		temp = temp -> link;
		c++;
	}
	temp1 -> link = temp -> link;
	printf("deleted element %d\n", temp -> data);
	free(temp);
	return head;
}

int main() {
	int ch;
	while(1){
		printf("1 - Create\n2 - Display\n3 - Insert at begin\n4 - insert at end\n5 - insert at position\n6 - delete at begin\n7 - delete at end\n8 - delete at position\n9 - exit\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);
	switch(ch){
		case 1:
			head = Create();
			break;
		case 2:
			display(head);
			break;
		case 3:
			head = Insert_begin(head);
			break;
		case 4:
			head = Insert_end(head);
			break;
		case 5:
			head = Insert_pos(head);
			break;
		case 6:
			head = Delete_begin(head);
			break;
		case 7:
			head = Delete_end(head);
			break;
		case 8:
			head = Delete_pos(head);
			break;
		case 9:
			exit(0);
		}
	}
	return 0;
}
/*Output:
1 - Create
2 - Display
3 - Insert at begin
4 - insert at end
5 - insert at position
6 - delete at begin
7 - delete at end
8 - delete at position
9 - exit
Enter your choice: 1
Enter no.of nodes
3
Enter data value: 5
Enter data value: 3
Enter data value: 7
1 - Create
2 - Display
3 - Insert at begin
4 - insert at end
5 - insert at position
6 - delete at begin
7 - delete at end
8 - delete at position
9 - exit
Enter your choice: 2
5 -> 3 -> 7 ->
1 - Create
2 - Display
3 - Insert at begin
4 - insert at end
5 - insert at position
6 - delete at begin
7 - delete at end
8 - delete at position
9 - exit
Enter your choice: 3
Enter value to insert at begin: 9
1 - Create
2 - Display
3 - Insert at begin
4 - insert at end
5 - insert at position
6 - delete at begin
7 - delete at end
8 - delete at position
9 - exit
Enter your choice: 2
9 -> 5 -> 3 -> 7 ->
1 - Create
2 - Display
3 - Insert at begin
4 - insert at end
5 - insert at position
6 - delete at begin
7 - delete at end
8 - delete at position
9 - exit
Enter your choice: 4
Enter value to insert at begin: 1
1 - Create
2 - Display
3 - Insert at begin
4 - insert at end
5 - insert at position
6 - delete at begin
7 - delete at end
8 - delete at position
9 - exit
Enter your choice: 2
9 -> 5 -> 3 -> 7 -> 1 ->
1 - Create
2 - Display
3 - Insert at begin
4 - insert at end
5 - insert at position
6 - delete at begin
7 - delete at end
8 - delete at position
9 - exit
Enter your choice: 5
Enter value to insert: 11
Enter where the element should be inserted: 4
1 - Create
2 - Display
3 - Insert at begin
4 - insert at end
5 - insert at position
6 - delete at begin
7 - delete at end
8 - delete at position
9 - exit
Enter your choice: 2
9 -> 5 -> 3 -> 11 -> 7 -> 1 ->
1 - Create
2 - Display
3 - Insert at begin
4 - insert at end
5 - insert at position
6 - delete at begin
7 - delete at end
8 - delete at position
9 - exit
Enter your choice: 6
deleted element 9
1 - Create
2 - Display
3 - Insert at begin
4 - insert at end
5 - insert at position
6 - delete at begin
7 - delete at end
8 - delete at position
9 - exit
Enter your choice: 2
5 -> 3 -> 11 -> 7 -> 1 ->
1 - Create
2 - Display
3 - Insert at begin
4 - insert at end
5 - insert at position
6 - delete at begin
7 - delete at end
8 - delete at position
9 - exit
Enter your choice: 7
deleted element 1
1 - Create
2 - Display
3 - Insert at begin
4 - insert at end
5 - insert at position
6 - delete at begin
7 - delete at end
8 - delete at position
9 - exit
Enter your choice: 2
5 -> 3 -> 11 -> 7 ->
1 - Create
2 - Display
3 - Insert at begin
4 - insert at end
5 - insert at position
6 - delete at begin
7 - delete at end
8 - delete at position
9 - exit
Enter your choice: 8
Enter where the element should be deleted: 3
deleted element 11
1 - Create
2 - Display
3 - Insert at begin
4 - insert at end
5 - insert at position
6 - delete at begin
7 - delete at end
8 - delete at position
9 - exit
Enter your choice: 2
5 -> 3 -> 7 ->
1 - Create
2 - Display
3 - Insert at begin
4 - insert at end
5 - insert at position
6 - delete at begin
7 - delete at end
8 - delete at position
9 - exit
Enter your choice: 9
*/
