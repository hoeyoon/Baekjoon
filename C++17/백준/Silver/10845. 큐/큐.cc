#include <stdio.h>
#include <string.h>

#define MAX_STACK_SIZE 10001

typedef struct{
    int queue[MAX_STACK_SIZE];
    int front;
    int rear;
} Queue;

void init(Queue *q){
    q->front = -1;
    q->rear = -1;
}

int empty(Queue *q){
    return q->rear == q->front;
}

void push(Queue *q, int x){
    if(q->rear == MAX_STACK_SIZE - 1){
        return;
    }
    q->queue[++(q->rear)] = x;
}

int pop(Queue *q){
    if(empty(q)){
        return -1;
    }
    int x = q->queue[++(q->front)];
    return x;
}

int size(Queue *q){
    return q->rear - q->front;
}

int front(Queue *q){
    if(empty(q)){
        return -1;
    }
    return q->queue[q->front + 1];
}

int back(Queue *q){
    if(empty(q)){
        return -1;
    }
    return q->queue[q->rear];
}

int main(){
    Queue q;
    init(&q);
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        char str[10];
        scanf("%s", str);
        if(strcmp(str, "push") == 0){
            int x;
            scanf("%d", &x);
            push(&q, x);
        }
        else if(strcmp(str, "pop") == 0){
            printf("%d\n", pop(&q));
        }
        else if(strcmp(str, "size") == 0){
            printf("%d\n", size(&q));
        }
        else if(strcmp(str, "empty") == 0){
            printf("%d\n", empty(&q));
        }
        else if(strcmp(str, "front") == 0){
            printf("%d\n", front(&q));
        }
        else if(strcmp(str, "back") == 0){
            printf("%d\n", back(&q));
        }
    }
    return 0;
}