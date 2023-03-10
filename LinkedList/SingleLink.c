#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
}; 


struct node *createNode(int value){
    struct node *newNode = malloc(sizeof(struct node));
    if(!newNode){
        return NULL;
    }

    newNode->value = value;
    newNode->next = NULL;

    return newNode;
}

void addNode(struct node tail, int value){
    struct node *newNode = createNode(value);
    tail.next = newNode;
}

int main(void){
    struct node *headNode;

    
    return 0;
}
