#include<stdio.h>
#include<stdlib.h>
struct linked_list{
                      int number;
                      struct linked_list  *next;
                  };
typedef struct linked_list node;
void create(node *p);
int count(node *p);
void print(node *p);
int main()
{
  int d;
  node *head;
  /* void create(node *p);
  int count(node *p);
  void print(node *p);*/
  head=(node*)malloc(sizeof(node));
  create(head);
  printf("\n");
  print(head);
  printf("\n");
  d=count(head);
  printf("\nNumber of Items= %d\n",d);
  return 0;
}

void create(node *list)
{
    printf("\nInput the number\n");
    printf("(type -999 at the end):\n");
    scanf("%d",&list->number);
    
    if(list->number==-999)
      list->next=NULL;
    else
     {
         list->next=(node*)malloc(sizeof(node));
         create(list->next);
     }
    return;
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

int count(node *list)
{  int ctr;
   if(list->next==NULL)
       return 0;
   else
   {    return(1+count(list->next));
       /* while(list->next!=NULL)
           {
               ctr++;
               list->next->next;
           }
    return ctr;*/
  }
}



