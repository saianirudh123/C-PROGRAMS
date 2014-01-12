#include<stdio.h>
#include<stdlib.h>
struct linked_list{
                     int number;
                     struct linked_list *next;
                  };
typedef struct linked_list node;
void Buildonetwothree(node *p);
void print(node *p);
int main()
{
  node *head;
  head=(node*)malloc(sizeof(node));
  Buildonetwothree(head);
  printf("\n");
  print(head);
  return 0;
}
int i=1;
void Buildonetwothree(node *list)
{
  if(i<=3)
  { list->number=i;
    list->next=(node*)malloc(sizeof(node));
    ++i;
    Buildonetwothree(list->next); 
  }
  else
   list->next=NULL;
  return;
}
void print(node *list)
{
  if(list->next!=NULL)
  {
      printf("%d-->",list->number);

      print(list->next);

  }
  return ;
}
