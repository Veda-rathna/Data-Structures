#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void disp(struct node *head){
    if(head == NULL){
        printf("The list is empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    printf("%d ",ptr->data);
    ptr = head->next;

    while(ptr != head){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    struct node *head = NULL;
    head = (struct node*) malloc(sizeof(struct node));
    head->data = 100;
    head->next = NULL;

    struct node *ele1 = NULL;
    ele1 = (struct node*) malloc(sizeof(struct node));
    ele1->data = 45;
    ele1->next = NULL;;
    head->next = ele1;

    struct node *ele2 = NULL;
    ele2= (struct node*) malloc (sizeof(struct node));
    ele2->data = 75;
    ele1->next = ele2;
    ele2->next = NULL;

    struct node *ele3 = NULL;
    ele3 = (struct node*) malloc (sizeof(struct node));
    ele3->data = 89;
    ele2->next = ele3;
    ele3->next = head;

    disp(head);
}