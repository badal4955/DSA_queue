#include<stdio.h>
#include<stdlib.h>
struct queue
{
   int size;
   int f;
   int r;
   int *arr;
};
int isfull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    else{
    return 0;
    }
}
int isempty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }else{
    return 0;
    }
}
void enqueue(struct queue *q,int val){
    if(isfull(q)){
    printf("this queue is full");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}
int main()
{
    struct queue q;
    q.size = 2;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    // if(isempty(&q)){
    //     printf("queue is empty");
    // }
    
    enqueue(&q, 12);
    enqueue(&q, 13);

if (isfull(&q))
    {
        printf("queue is full");
    }

if(isempty(&q)){
        printf("queue is empty");
    }

    return 0;
}