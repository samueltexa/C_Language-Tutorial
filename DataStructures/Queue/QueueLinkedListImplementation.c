//Implementing Queue using Linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
   int data;
   struct Node* next;
} Node;

typedef struct {
   Node* front;
   Node* rear;
} Queue;

void enqueue(Queue* queue, int data) {
   Node* newNode = (Node*)malloc(sizeof(Node));
   newNode->data = data;
   newNode->next = NULL;

   if (queue->rear == NULL) {
      queue->front = newNode;
      queue->rear = newNode;
   } else {
      queue->rear->next = newNode;
      queue->rear = newNode;
   }
}

int dequeue(Queue* queue) {
   if (queue->front == NULL) {
      printf("Queue is empty. Cannot dequeue element.\n");
      return -1;
   } else {
      Node* temp = queue->front;
      int data = temp->data;

      queue->front = queue->front->next;
      if (queue->front == NULL) {
         queue->rear = NULL;
      }

      free(temp);
      return data;
   }
}

int main() {
   Queue queue;
   queue.front = NULL;
   queue.rear = NULL;

   enqueue(&queue, 10);
   enqueue(&queue, 20);
   enqueue(&queue, 30);

   printf("Dequeued item: %d\n", dequeue(&queue));
   printf("Dequeued item: %d\n", dequeue(&queue));
   printf("Dequeued item: %d\n", dequeue(&queue));
   printf("Dequeued item: %d\n", dequeue(&queue));

   return 0;
}
