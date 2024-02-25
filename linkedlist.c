#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	
};
struct node *head=NULL;
void insert(int e)
{
	struct node *t;
	if(head==NULL)
	{
		head=(struct node *)malloc(sizeof(struct node));
		head->data=e;
		head->next=NULL;
	}
	else
	{
		t=head;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next= (struct node*)malloc(sizeof(struct node));
		t->next->data=e;
		t->next->next=NULL;

	}
}
void delete(int e)
{
	struct node *t;
	if(head==NULL)
	{
		printf("the ll is empty");
	}
	else if(head->data==e)
	{
		head=head->next;
	}
	else
	{
		t=head;
		while(t->next!=NULL&&head->data!=e)
		{
			t=t->next;
		}
	if(t->next==NULL)
	{
		printf("element not found");
	}
	else
	{
	    t->next=t->next->next;
	}
	}
}
void disp()
{

struct node *t;

t=head;
while(t!=NULL)
{
	
	printf("\n%d\t",t->data);
	t=t->next;
}
}

int main()
{
	printf("******************the list is*******************");
	insert(10);

	insert(30);
	
	insert(50);

	insert(70);
	disp();
	delete(30);
	disp();

	delete(20);
	
	disp();
	return 0;
}
