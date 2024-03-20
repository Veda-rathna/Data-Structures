#include<stdio.h>
#include<stdlib.h>

//Defining the node struct
struct node{
    int data;             //data
    struct node *next;    //address of the next node
};


int main(){
    struct node *head = NULL;                            //Defining the head
    head = (struct node *)malloc(sizeof(struct node));   //Allocating memory for the nodes and storing it in head

    head->data = 45;                                     //Using head to access  the first element in the list
    head->next = NULL;                                   //NULL denotes the end of the list

    printf("%d", head->data);                            //Used to access the data of the defined node
    return 0;
}