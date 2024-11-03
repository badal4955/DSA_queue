#include <stdio.h>
#include <stdlib.h>
struct node *f = NULL;
struct node *r = NULL;

struct node
{
   int data;
   struct node *next;
};

void linkedlistTraversal(struct node *ptr)
{
   printf("printing the element of this linked list\n");
   while (ptr != NULL)
   {
      printf("Element:%d\n", ptr->data);
      ptr = ptr->next;
   }
}

void enqueue(int val)
{
   struct node *n = (struct node *)malloc(sizeof(struct node));
   if (n == NULL)
   {
      printf("queue is full");
   }
   else
   {
      n->data = val;
      n->next = NULL;
      if (f == NULL)
      {
         f = r = n;
      }
      else
      {
         r->next = n;
         r = n;
      }
   }
}
int main()
{

   enqueue(34);
   enqueue(4);
   enqueue(7);
   enqueue(17);
   linkedlistTraversal(f);

   return 0;
}