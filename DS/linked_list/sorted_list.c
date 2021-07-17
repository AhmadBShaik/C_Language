
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
void ascending_order(Node*);
void descending_order(Node*); 
int min(Node*);
int max(Node*);
int length(Node*);


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
    printf("\ninitial list:\n");
    printList(head);
    printf("\n\n");
    // reverse(&head);
    // printList(head);
    printf("minimum value in the list is %d\n\n",min(head));
    printf("maximum value in the list is %d\n\n",max(head));
    printf("ascending order:\n");
    ascending_order(head);
    printList(head);

    printf("\n\ndescending order:\n");
    descending_order(head);
    printList(head);
    printf("\n");
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

int length(Node* head){
    int length=0;
    while(head){
        length++;
        head = head -> link;
    }
    return length;
}
void ascending_order(Node* head){
    Node *itrVar;
    int temp;
    while(head){
        itrVar = head;
        temp = head->data;
        while(itrVar){
            if(temp > itrVar->data){
                temp = itrVar->data;
                itrVar->data = head->data;
                head->data=temp;
            }
            itrVar=itrVar->link;
        }
        head=head->link;       
    }
}

void descending_order(Node* head){
    Node *itrVar;
    int temp;
    while(head){
        itrVar = head;
        temp = head->data;
        while(itrVar){
            if(temp < itrVar->data){
                temp = itrVar->data;
                itrVar->data = head->data;
                head->data=temp;
            }
            itrVar=itrVar->link;
        }
        head=head->link;       
    }
}


int min(Node* head){
    int min=head->data;
    while(head){
        if(min>head->data)
            min = head->data;
        head=head->link;
    }
    return min; 
}

int max(Node* head){
    int max=head->data;
    while(head){
        if(max<head->data)
            max = head->data;
        head=head->link;
    }
    return max;
}