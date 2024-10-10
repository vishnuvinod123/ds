#include<stdio.h>
int queue[10],i,n,front=-1,rear=-1,cn,a;
void enqueue();
void dequeue();
void display();
int main()
{
printf("enter the size of the circular queue:\n");
scanf("%d",&n);
while(ch!=4)
{
printf("\n queue operation=\n");
printf("1.enqueue2.dequeue3.display\n");
printf("eneter your choice");
scanf("%d",&ch);
switch(ch)
{
case1:
{
enqueue();
break;
}
case2:
{
dequeue();
break;
}
case3:
{
display();
break;
}
}
}
}
void enqueue()
{
int item;
printf("enter the element");
scanf("%d",&item);
if(rear==(maxsize-1))
{
printf("full");
}
else if (front==-1&&rear==-1)
{
front=0;
rear=0;
}
else
{
rear=rear+1;
}
queue[rear]=item;
printf("\n value inserted");
}
void dequeue()
{
int item;
if(front==-1||front>rear)
{
printf("empty");
}
else
{
item=queue[front];
front=front+1;
printf("value deleted");
}
}
void display()
{
int i;
if(front<=rear)
{
printf("queue elements are given below");
for(i=front;i<rear;i++)
{
printf("\t%d",queue[i]);
}
}
else
{
printf("queue is empty");
}
}
