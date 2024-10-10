#include<stdio.h>
int front=-1,rear=-1;
int maxsize,queue[100];
void enqueue();
void dequeue();
void display();
int main()
{
int choice=1;
printf("queue with array\n");
printf("enter the size of the queue(max100):\n");
scanf("%d",&maxsize);
printf("\n queue operation=\n");
printf("1.enqueue2.dequeue3.display\n");
while(choice<4 &&choice!=0)
{
printf("eneter your choice");
scanf("%d",&choice);
switch(choice)
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

