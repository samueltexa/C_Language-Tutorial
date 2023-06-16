//Implementing a queue using an Array
#include <stdio.h>

#define MAX_SIZE 100

typedef struct {
   int items[MAX_SIZE];
   int front;
   int rear;
} Queue;

void enqueue(Queue *queue, int data) {
   if (queue->rear == MAX_SIZE - 1) {
      printf("Queue is full. Cannot enqueue element.\n");
   } else {
      queue->items[++queue->rear] = data;
   }
}

int dequeue(Queue *queue) {
   if (queue->front > queue->rear) {
      printf("Queue is empty. Cannot dequeue element.\n");
      return -1;
   } else {
      return queue->items[queue->front++];
   }
}

int main() {
   Queue queue;
   queue.front = 0;
   queue.rear = -1;

   enqueue(&queue, 10);
   enqueue(&queue, 20);
   enqueue(&queue, 30);

   printf("Dequeued item: %d\n", dequeue(&queue));
   printf("Dequeued item: %d\n", dequeue(&queue));
   printf("Dequeued item: %d\n", dequeue(&queue));
   printf("Dequeued item: %d\n", dequeue(&queue));

   return 0;
}
