#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
}; 

struct list {
    int length;
    struct node *head;
    struct node *tail;
};

typedef struct node Node;
typedef struct list List;


void enqueue(int value, List *nodeList){
    Node *newNode = malloc(sizeof(Node));

    newNode->value = value;
    newNode->next = NULL;
    if (nodeList->head == NULL){
        nodeList->head = nodeList->tail = newNode;
    }else{
        nodeList->tail->next = newNode;
        nodeList->tail = newNode;
    }
    nodeList->length++;
}

int peek(List *nodeList){
    return nodeList->head->value; 
}

int pop(List *nodeList){
    if (nodeList->head == NULL){
        return 0;
    }
    Node *v = nodeList->head;
    int va = v->value;
    nodeList->head = v->next;
    free(v);
    nodeList->length--;
    return va;
}

int main(void){

    List smoke = {0, NULL, NULL};
    enqueue(10, &smoke);
    enqueue(15, &smoke);
    enqueue(22, &smoke);
    enqueue(5,  &smoke);
    printf("peek %d\n", peek(&smoke));
    printf("%d\n", pop(&smoke));
    printf("%d\n", pop(&smoke));
    printf("peek %d\n", peek(&smoke));
    printf("%d\n", pop(&smoke));
    printf("peek %d\n", peek(&smoke));

    return 0;
}
