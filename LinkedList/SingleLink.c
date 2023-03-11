#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
}; 

struct list {
    struct node *head;
    struct node *tail;
};

typedef struct node Node;
typedef struct list List;


void addNode(int value, List *nodeList){
    Node *newNode = malloc(sizeof(Node));

    newNode->value = value;
    newNode->next = NULL;
    if (nodeList->head == NULL){
        nodeList->head = nodeList->tail = newNode;
    }else{
        nodeList->tail->next = newNode;
        nodeList->tail = newNode;
    }
}


void printNodes(List *nodeList){
    Node *c = nodeList->head; 
    for (; ;){
        printf("%d\n", c->value);
        if (c->next == NULL){ break; }
        c = c->next;
    }
}

void pop(List *nodeList){
    printf("%d\n", nodeList->head->value);
    nodeList->head = nodeList->head->next;
}

int main(void){

    List nodejs = {NULL, NULL};
    addNode(10, &nodejs);
    addNode(15, &nodejs);
    addNode(22, &nodejs);
    addNode(5,  &nodejs);
    pop(&nodejs);
    pop(&nodejs);
    pop(&nodejs);


    return 0;
}
