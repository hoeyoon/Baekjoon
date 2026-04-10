#include <stdio.h>
#include <string.h>

#define MAX_STACK_SIZE 10001

int stack[MAX_STACK_SIZE];
int idx = -1;

void push(int x);
int pop();
int size();
int empty();
int top();

void push(int x){
    if(idx == MAX_STACK_SIZE - 1){
        return;
    }
    stack[++idx] = x;
}

int pop(){
    if(empty()){
        return -1;
    }
    return stack[idx--];
}

int size(){
    return idx + 1;
}

int empty(){
    return idx == -1;
}

int top(){
    if(empty()){
        return -1;
    }
    return stack[idx];
}

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        char str[6];
        scanf("%s", str);
        if(strcmp(str, "push") == 0){
            int x;
            scanf("%d", &x);
            push(x);
        }
        else if(strcmp(str, "pop") == 0){
            printf("%d\n", pop());
        }
        else if(strcmp(str, "size") == 0){
            printf("%d\n", size());
        }
        else if(strcmp(str, "empty") == 0){
            printf("%d\n", empty());
        }
        else if(strcmp(str, "top") == 0){
            printf("%d\n", top());
        }
    }
    return 0;
}