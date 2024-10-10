#include<stdio.h>
int main()
{
int a[10],b[30],c[20],j,n,m,i,k,temp;
printf("enter the first array limit:");
scanf("%d",&n);
printf("enter the first array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the second array limit:");
scanf("%d",&m);
printf("enter the second array elements:\n");
for(j=0;j<m;j++)
{
scanf("%d",&b[j]);
}
printf("element of the first array:");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("element of the second array:\n");
for(j=0;j<m;j++)
{
printf("%d\t",b[j]);
}

for(i=0;i<n;i++)
{
for(j=1+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<m-1;i++)
{
for(j=i+1;j<m;j++)
{
if(b[i]>b[j])
{
temp=b[i];
b[i]=b[j];
b[j]=temp;
}
}
}

printf("\n elements aftr merging:");
i=j=k=0;
while(i<n&&j<m)
{
if(a[i]<=b[j])
{
c[k++]=a[i++];
}
else
{
c[k++]=b[j++];
}
}
while(i<n)
{
c[k++]=a[i++];
}
while(j<m)
{
c[k++]=b[j++];
}
for(k=0;k<n+m;k++)
{
printf("%d\t",c[k]);
}
return 0;
}
