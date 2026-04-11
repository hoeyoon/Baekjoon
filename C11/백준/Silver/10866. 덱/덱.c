#include <stdio.h>
#include <string.h>

#define MAX_DEQUE_SIZE 10001

typedef struct{
    int data[MAX_DEQUE_SIZE];
    int front;
    int rear;
} Deque;

void init(Deque *q){
    q->front = 0;
    q->rear = 0;
}

int empty(Deque *q){
    return q->rear == q->front;
}

int full(Deque *q){
    return (q->rear + 1) % MAX_DEQUE_SIZE == q->front;
}

void push_front(Deque *q, int x){
    if(full(q)){
        return;
    }
    q->data[q->front] = x;
    q->front = (q->front - 1 + MAX_DEQUE_SIZE) % MAX_DEQUE_SIZE;
}

void push_back(Deque *q, int x){
    if(full(q)){
        return;
    }
    q->rear = (q->rear + 1) % MAX_DEQUE_SIZE;
    q->data[q->rear] = x;
}

int pop_front(Deque *q){
    if(empty(q)){
        return -1;
    }
    q->front = (q->front + 1) % MAX_DEQUE_SIZE;
    return q->data[q->front];
}

int pop_back(Deque *q){
    if(empty(q)){
        return -1;
    }
    int x = q->data[q->rear];
    q->rear = (q->rear - 1 + MAX_DEQUE_SIZE) % MAX_DEQUE_SIZE;
    return x;
}

int size(Deque *q){
    return (q->rear - q->front + MAX_DEQUE_SIZE) % MAX_DEQUE_SIZE;
}

int front(Deque *q){
    if(empty(q)){
        return -1;
    }
    return q->data[(q->front + 1) % MAX_DEQUE_SIZE];
}

int back(Deque *q){
    if(empty(q)){
        return -1;
    }
    return q->data[q->rear];
}

int main(){
    Deque q;
    init(&q);
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int x;
        char str[15];
        scanf("%s", str);
        if(strcmp(str, "push_front") == 0){
            scanf("%d", &x);
            push_front(&q, x);
        }
        else if(strcmp(str, "push_back") == 0){
            scanf("%d", &x);
            push_back(&q, x);
        }
        else if(strcmp(str, "pop_front") == 0){
            printf("%d\n", pop_front(&q));
        }
        else if(strcmp(str, "pop_back") == 0){
            printf("%d\n", pop_back(&q));
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