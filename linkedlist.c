#include<stdio.h>
#include<stdlib.h>
struct node
{
	int val;
	struct node*next;
}
struct node*head;
void push();
void pop();
void display();
int main()
{
	int choice=1;
	printf("singly linked list using stack\n");
	while(choice<4&&choice!=0)
	{
		printf("\n1.push\n2.pop\n3.display");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
		}
		{
			return 0;
		}
	}
}
void push()
{
	int val;
	struct node*ptr=(struct node*)malloc(sizeof(struct node*));
	if(ptr==null)
	{
		printf("stack is full");
	}
	else
	{
		printf("enter the element to push:\n");
		scanf("%d",&val);
		if(head==null)
		{
			ptr->val=val;
			ptr->next=null;
			head=ptr;
		}
		else
		{
			ptr->val=val;
			ptr->next=head;
			head=ptr;
		}
		printf("element pushed\n");
	}
}
void pop()
{
		int item;
		struct node*ptr;
		if(head==null)
		{
			printf("stack is empty\n");
		}
		else
		{
			item=head->val;
			ptr=head;
			head=head->next;
			free(ptr);
			printf("item poped\n");
		}
}
void display()
{
	int i;
	struct node*ptr;
	ptr=head;
	if(ptr==null)
		{
			printf("is empty\n");
		}
	else
		{
			printf("the elements are\n");
			while(ptr!=null)
			{
				printf("%d\n",ptr->val);
				ptr=ptr->next;
			}
		}
}
