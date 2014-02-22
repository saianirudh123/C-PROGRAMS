#include<stdio.h>
#include<stdlib.h>
struct linked_list{
                      int number,ctr;
                      struct linked_list  *next;
                  };
typedef struct linked_list node;
void create(node *p);
/*int count(node *p);*/
void print(node *p);
node *insert(node *p);
node *find(node *p,int a);
int main()
{ 
  node *head,*c;
  /* void create(node *p);
  int count(node *p);
  void print(node *p);*/
  head=(node*)malloc(sizeof(node));
  head->ctr=0;
  create(head);
  printf("\n");
  print(head);
  printf("\n");
  /*d=count(head);
  printf("\nNumber of Items= %d\n",d);*/
  c=insert(head);
  print(c);
  return 0;
}
void print(node *list)
{
    if(list->next!=NULL)
      {
        printf("%d-->",list->number);
        
        if(list->next->next==NULL)
           printf("%d",list->next->number);
        
           print(list->next);
      }
     return ;
}

void create(node *list)
{
    printf("\nInput the number\n");
    printf("(type -999 at the end):\n");
     scanf("%d",&list->number);
    
    if(list->number==-999)
     { 
       list->next=NULL;
       list->ctr=1;
      }
    else
     {
         list->next=(node*)malloc(sizeof(node));
         list->next->ctr=list->ctr+1;
         create(list->next);
     }
    return ;
}
node *insert(node *head)
{
  node *find(node *p,int a);
  node *new;
  node *n1;
  int key;
  int x;

 printf("\nValue of the Item?\n");
 scanf("%d",&x);
 printf("Value of the position(-999 if last)?\n");
 scanf("%d",&key);

 if(head->ctr==key-1)
 {  
   new=(node*)malloc(sizeof(node));
   new->number=x;
   new->next=head;
   head=new;
 }
 else
 {
   n1=find(head,key);

   if(n1==NULL)
     printf("\nKey is not found\n");
   else
   {
     new=(node*)malloc(sizeof(node));
     new->number=x;
     new->next=n1->next;
     n1->next=new;
   }
 }
 return(head);
}
node *find(node *list,int key)
{
  if(list->next->ctr==key-1)
   return(list);
  else
   if(list->next->next==NULL)
     return(NULL);
  else
    find(list->next,key);
}

