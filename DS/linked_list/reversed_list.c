#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    int data;
    struct node *link;
};

typedef struct node Node;

void append(Node**, int);
void printList(Node*);
void reverse(Node**);

int main(){
    Node *head;
    head = NULL;
    int data;
    char ch[3];
    
    do{
        printf("Enter data : ");
        scanf("%d",&data);
        append(&head,data);
        printf("continue?(y/n) : ");
        scanf("%s",ch);
    }while(strcmp(ch,"y")==0);
    printList(head);
    printf("\n");
    reverse(&head);
    printList(head);
    free(head);
    head = NULL;
    
    return 0;
}

void printList(Node* head){
    while(head){
        printf("%d",head->data);
        if(head->link!=NULL){
            printf(" -> ");
        }
        head = head->link;
    }
}

void append(Node **headAdd,int data){
    Node *newNode,*lastNode;
    lastNode = *headAdd;
    newNode = (Node*)malloc(sizeof(Node));
    
    newNode->data = data;
    newNode->link = NULL;
    
    if(*headAdd==NULL){
        *headAdd = newNode;
    }else{
        while(lastNode->link != NULL){
            lastNode = lastNode->link;
        }
        lastNode->link = newNode;
    }
}


void reverse(Node **headAdd){
    Node *current=*headAdd;
    Node *prev=NULL;
    Node *next;
    
    while(current){
        next = current -> link;
        current->link = prev;
        prev = current;
        current = next;
    }
    *headAdd = prev;
}

