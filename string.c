#include<stdio.h>
#include<stdlib.h>
#define N 10
typedef struct node
{
	char string[10];
	struct node *next;
}link;
int main()
{
	link *p;
	link *q;
	link *h;
	int i=1;
	int num;
	p=(link *)malloc(sizeof(link));
	scanf("%s",p->string);
	h=p;
	for(;i<N;i++)
	{
		q=(link *)malloc(sizeof(link));
		scanf("%s",q->string);
		p->next=q;
		p=q;
	}
	while(h!=NULL)
	{
		printf("%s ",h->string);
		h=h->next;
	}
	printf("\n");
	return 0;
}

