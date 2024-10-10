#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void display();
int main()
{
	top=-1;
	printf("enter the size of yhe stack");
	scanf("%d",&n);
	printf("\n stack operation using array");
	printf("\n\t1.push\n2.pop\n3.display\n\t4.exit");
	do
	{
		printf("entr the choice");
		scanf("%d",&choice);
		switch(choice)
			{
			case1:
			{
			push();
			break;
			}
			case2:
			{
			pop();
			break;
			}
			case3:
			{
			display();
			break;
			}
			case4:
			{
			printf("\n\t exit");
			break;
			}
			default:
			{
			printf("\n\t enter a valid choice:(1/2/3/4)");
			}
			}
			}
			while(choice !=4);
			return 0;
			}
			void push()
			{
			if(top==n-1)
			{
			printf("\n\t stack is overflow");
			}
			else
			{
			printf("enter a value to be pushed:");
			scanf("%d",&x);
			top++;
			stack[top]=x;
			}
			}
			void pop()
			{
			if(top==-1)
			{
			printf("\n\t stack is underflow");
			}
			else
			{
			printf("\n\t the popped element is %d",stack[top]);
			top--;
			}
			}
			void display()
			{
			if(top=0)
			{
			printf("\n the element in stack");
			for(i=top;i>=0;i--)
			printf("\n%d",stack[i]);
			}
			}

	
