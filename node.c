#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;   
};

void count(struct node *head){
    if(head->next == NULL){
        printf("Ther is no linked list");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct node *head =malloc(sizeof(struct node));
    head->data = 69;
    head->next=NULL;

    struct node *first =malloc(sizeof(struct node));
    first->data = 169;
    first->next = NULL;
    head->next = first;

    struct node *second =malloc(sizeof(struct node));
    second->data = 25;
    second->next = NULL;
    first->next = second;

    second =malloc(sizeof(struct node));
    second->data = 125;
    second->next = NULL;
    head->next->next->next = second;

    count(head);
}