#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int q[10],r=-1,f=-1;
void insert();
int rem();
void disp();

main()
{
	int ch;
	do{
		printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
					break;
			case 2:rem();
					break;
			case 3:disp();
					break;
			case 4:exit(0);
			default:printf("Invalid Choice\n");		
		}
	}while(ch!=4);
	return 0; 
}


void insert()
{
	if(r==MAX-1)
	{
		printf("Queue is full");
		return;
	}
	int e;
	printf("Enter the Element");
	scanf("%d",&e);
	r=r+1;
	q[r]=e;
	if(f==-1)
	f=0;
}
int rem()
{
	int e;
	if(f==-1)
	{
		printf("Queue is Empty\n");
	}
	else
	e=q[f];
	if(f>r)
	f=r=-1;
	else
	f=f+1;
	printf("the deleted Element is %d",e);
}
void disp()
{
	int i;
	if(f==-1)
	{
		printf("Queue is Empty");
		return;
	}
	printf("elements are");
	for(i=f;i<=r;i++)
	printf("%d",q[i]);
}
