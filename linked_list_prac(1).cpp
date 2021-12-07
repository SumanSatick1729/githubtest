#include<stdio.h>
#include<stdlib.h>

struct node{
	int val;
	node *next;
};

void add_at_end(node **pt,int n)
{
	  node* Q=*pt, *temp;
   	if((*pt)==NULL)
   	{
   		(*pt)=(node*)malloc(sizeof(node));
   	 (*pt)->val=n;
   	 (*pt)->next=NULL;
				}
				else
				{
					while(Q->next!=NULL)
					Q=Q->next;
					
					temp=(node*)malloc(sizeof(node));
					temp->val=n;
					temp->next=NULL;
					
					Q->next=temp;
				}
}

void display(node *pt)
{
	while(pt!=NULL)
	{
		printf("%d ",pt->val);
		pt=pt->next;
	}
}

add_at_first(node** pt,int n)
{
	node* Q=*pt, *temp;
   	if((*pt)==NULL)
   	{
   		(*pt)=(node*)malloc(sizeof(node));
   	 (*pt)->val=n;
   	 (*pt)->next=NULL;
				}
					else
				{
					temp=(node*)malloc(sizeof(node));
					temp->val=n;
					temp->next=*pt;
					*pt=temp;
				}
			}
	void	delete_at_end(node** pt)
	{
		node* Q=*pt;
		if((*pt) == NULL)
		{
			printf("\ndelete not possible");
		}
		else
		{
		while(Q->next->next!=NULL)
		 Q=Q->next;
		 Q->next=NULL;
	}
}

void delete_at_first(node** pt)
{
	node* Q=*pt;
	if((*pt) == NULL)
		{
			printf("\ndelete not possible");
		}
		else
		{
	   *pt=Q->next;
	   Q->next=NULL;
	   free(Q);
	}
}

 void add_at_anypo(node** pt,int pos,int n)
 {
 	node* Q=*pt,*temp;
   	if((*pt)==NULL)
   	{
   		(*pt)=(node*)malloc(sizeof(node));
   	 (*pt)->val=n;
   	 (*pt)->next=NULL;
				}
				else if(pos==1)
				{
					temp=(node*)malloc(sizeof(node));
					temp->val=n;
					temp->next=*pt;
					*pt=temp;
					}
					 else 
					 {
					 	 int i=1;
					  while(i<pos-1)
					 {
					 	Q=Q->next;
					 	i++;
						}
					temp=(node*)malloc(sizeof(node));
					temp->val=n;
					temp->next=Q->next;
					Q->next=temp;
				}
		/*	int count=1;
				while(Q->next!=NULL)
				{
				 Q=Q->next;
				 count++;
				}
				printf("%d",count);
				if(pos>count)
				 	printf("\ninvalid position");*/
			}
	void	delete_at_anypo(node** pt,int pos)
		{
			 node* Q=*pt,*temp;
	if((*pt) == NULL)
		{
			printf("\ndelete not possible");
		}
		else if(pos==1)
		{
			*pt=Q->next;
			Q->next=NULL;
		}
		else
		{
		  int i=1;
				while(i<pos-1)
				{
					Q=Q->next;
					i++;
					}	
				temp=(node*)malloc(sizeof(node));
				temp=Q->next;
				Q->next=temp->next;
				temp->next=NULL;
				free(temp);
			}
		}
int main()
{
	node *LList=NULL;
	add_at_end(&LList,2);
	add_at_end(&LList,9);
	add_at_end(&LList,5);
	add_at_end(&LList,7);
	display(LList);
	
	printf("\n");
	add_at_first(&LList,8);
	add_at_first(&LList,4);
	display(LList);
	
	printf("\n");
	delete_at_end(&LList);
	display(LList);
	
	printf("\n");
	delete_at_first(&LList);
	display(LList);
	
	printf("\n");
	add_at_anypo(&LList,3,6);
	add_at_anypo(&LList,4,3);
	display(LList);
	
	printf("\n");
	delete_at_anypo(&LList,1);
	display(LList);
}
