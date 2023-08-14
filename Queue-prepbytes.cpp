#include<bits/stdc++.h>
using namespace std;
typedef struct Queue
{
	int front,rear;
	int size,capacity;
	int *arr;
}Queue;
Queue* createQueue(int capacity)
{
	Queue *qu =(Queue*)malloc(sizeof(Queue));
	qu->capacity=capacity;
	qu->front=0;
	qu->size=0;
	qu->rear=capacity-1;
	qu->arr=(int*)malloc(qu->capacity*sizeof(int));
	return qu;
}
int isFull(Queue *queue)
{
	return queue->size==queue->capacity;
}
int isEmpty(Queue *queue)
{
	return queue->size==0;
}
int front(Queue *queue)
{
	if(isEmpty(queue))
	return INT_MIN;
	return queue->arr[queue->front];
}
int rear(Queue *queue)
{
	if(isEmpty(queue))
	 return INT_MIN;
	return queue->arr[queue->rear]; 
}
void enqueue(Queue *queue,int data)
{
	if(isFull(queue))
	{
		cout<<"Queue is full"<<endl;
		return;
	}
	queue->rear=(queue->rear+1)%(queue->capacity);
	queue->arr[queue->rear]=data;
	queue->size=queue->size+1;
}
void display(Queue *queue)
{
	for(int i=0;i<queue->size;i++)
	{
		cout<<queue->arr[(queue->front+i)%queue->capacity]<<" ";
		cout<<endl;
	}
}
int main()
{
	int capacity,n;
	cin>>capacity>>n;
	Queue *queue=createQueue(capacity);
	for(int i=0;i<n;++i)
	{
		int ele;
		cin>>ele;
		enqueue(queue,ele);
	}
	display(queue);
	cout<<"Front element="<<front(queue)<<endl;
	cout<<"Rear element="<<rear(queue)<<endl;
	return 0;
}
