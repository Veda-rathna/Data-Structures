#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;             
    struct node *next, *prev;    
};

void count(struct node *head){
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
    head = (struct node *)malloc(sizeof(struct node));   
    head->data = 45;                                     
    head->next = NULL;                                   


    struct node *current = malloc(sizeof(struct node));
    current->data = 90;
    current->next = NULL;                                 
    head->next = current;

    current = malloc(sizeof(struct node));
    current->data = 120;
    current->next = NULL;
    head->next->next = current;

    current = malloc(sizeof(struct node));
    current->data = 150;
    current->next = NULL;
    head->next->next->next = current;

    count(head);
    return 0;
}