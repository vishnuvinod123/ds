#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void display();
int main()
{
top=-1;
printf("enter the size of the stack\n");
scanf("%d",&n);
printf("\n stack operation using array\n");
printf("\n1.push\n2.pop\n3.display\n4.exit\n");
do
{
printf("enter the choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("\n\t exit\n");
break;
}
default:
{
printf("\n\t enter a valid choice:(1/2/3/4)\n");
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
printf("\n\t stack is overflow\n");
}
else
{
printf("enter a value to be pushed:\n");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top==-1)
{
printf("\n\t stack is underflow\n");
}
else
{
printf("\n\t the popped element is %d\n",stack[top]);
top--;
}
}
void display()
{
if(top==-1)
{
printf("stack is empty\n");
}
else
{
printf("\n the element in stack\n");
for(i=0;i<=top;i++)
{
printf("\n%d",stack[i]);
}
}
}
