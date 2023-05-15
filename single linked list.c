#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertbegin(int value);

{
    struct Node new_node = (struct Node) malloc(sizeof(struct node));
    new_node->data = value;
    if(head == NULL){
        new_node->next = NULL;
    }
    else{
        new_node->next = head;
    }
    head = new_node;
    printf("\n One node inserted at the beginning\n");
}

void insert_end(int value){
    struct Node new_node = (struct Node) malloc(sizeof(struct Node));
    new_node->data = value;
    new_node->next = NULL;
    if(head == NULL){
        head = new_node;
    }
    else{
        struct Node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
    printf("\n One node inserted at the end\n");
}

void insert_between(int value){
    int position;
    printf("\nEnter the position where you want to insert the node: ");
    scanf("%d", &position);
    struct Node new_node = (struct Node) malloc(sizeof(struct Node));
    new_node->data = value;
    if(head == NULL){
        new_node->next = NULL;
        head = new_node;
    }
    else{
        struct Node *temp = head;
        for(int i=1;i<position-1;i++){
            temp = temp->next;
            if(temp == NULL){
                printf("\n Position not found\n");
                return;
            }
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }
    printf("\n One node inserted at position %d\n", position);
}

void delete_begin(){
    if(head == NULL){
        printf("\n List is empty\n");
    }
    else{
        struct Node *temp = head;
        head = head->next;
        free(temp);
        printf("\n One node deleted from the beginning\n");
    }
}

void delete_between(){
    if(head == NULL){
        printf("\n List is empty\n");
    }
    else{
        int position;
        printf("\n Enter the position of the node you want to delete: ");
        scanf("%d", &position);
        struct Node *temp1 = head;
        struct Node *temp2;
        for(int i=1;i<position;i++){
            temp2 = temp1;
            temp1 = temp1->next;
            if(temp1 == NULL){
                printf("\n Position not found\n");
                return;
            }
        }
        temp2->next = temp1->next;
        free(temp1);
        printf("\n One node deleted from position %d\n", position);
    }
}

void display(){
    if(head == NULL){
        printf("\n List is empty\n");
    }
    else{
        struct Node *temp = head;
        printf("\n List elements are: ");
        while(temp != NULL){
            printf("%d ", temp->data)
    
