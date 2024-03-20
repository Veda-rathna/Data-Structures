#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next,*prev;
};

void disp(struct node *head){
    if(head == NULL){
        printf("The list is empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    struct node *head = NULL;
    head = (struct node*) malloc(sizeof(struct node));
    head->data = 100;
    head->prev = NULL;
    head->next = NULL;

    struct node *ele1 = NULL;
    ele1 = (struct node*) malloc(sizeof(struct node));
    ele1->data = 45;
    ele1->next = NULL;
    ele1->prev = head;
    head->next = ele1;

    struct node *ele2 = NULL;
    ele2= (struct node*) malloc (sizeof(struct node));
    ele2->data = 75;
    ele2->next = NULL;
    ele2->prev = ele1;
    ele1->next = ele2;

    disp(head);
}