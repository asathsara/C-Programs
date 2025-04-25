#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    int data;
    int key;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *current = NULL;


void insertFirstNode(int key, int data){

    struct Node *newnode  = ( struct Node*) malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->key = key;
    newnode->next = head;
    head = newnode;
}


void printList(){

    struct Node *ptr = head;

  
    while(ptr != NULL){
        printf("%d -> %d\n",  ptr->key, ptr->data);
        ptr = ptr->next;
        
    }
}

struct Node* deleteFirstNode(){

    struct Node *temp = head;
    head = head->next;
    return temp;

    
}

bool isEmpty(){

    return head == NULL;
}

int size(){
    int size = 0;

    struct Node *ptr = head;
    if(ptr == NULL){
        return 0;
    }
    while(ptr != NULL){
        size++;
        ptr = ptr->next;
    }
    return size;
}

int main(){

    insertFirstNode(1, 10);
    insertFirstNode(2, 20);
    insertFirstNode(3, 30);
    insertFirstNode(4, 40);
    insertFirstNode(5, 50);

    printList();

    printf("\n");
    struct Node *deletedNode = deleteFirstNode();
    if (deletedNode != NULL) {
        printf("Deleted node: %d -> %d\n", deletedNode->key, deletedNode->data);
        free(deletedNode); // Free the memory of the deleted node
    } else {
        printf("No node to delete.\n");
    }
    printList();

    printf("Size of the list: %d\n", size());
    
  
    return 0;
}