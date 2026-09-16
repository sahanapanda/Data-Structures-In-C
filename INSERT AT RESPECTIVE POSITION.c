//Insert at Respective position
#include <stdio.h>
#include <stdlib.h>
struct node{ 
    int data; 
    struct node *next; 
} *head = NULL, *temp, *new_node; 

void create(){ 
    new_node = (struct node *)malloc(sizeof(struct node)); 
    printf("Enter element : "); 
    scanf("%d", &new_node -> data); 
    new_node -> next = NULL; 
    if(head == NULL){ 
        head = new_node; 
        temp = new_node; } 
    else{ 
        temp->next = new_node; 
        new_node -> next = NULL; 
        temp = new_node; }
}
void display(){ 
    temp = head; 
    if(temp == NULL){ 
        printf("List is empty"); } 
    else { while(temp!=NULL){ 
        printf("%d -> ", temp -> data); 
        temp = temp -> next; } 
    printf("NULL\n"); } 
}
void insert_rpos(){ 
    temp = head; 
    int pos;
    printf("Enter postion to insert element : ");
    scanf("%d", &pos);
    new_node = (struct node*) malloc (sizeof(struct node)); 
    printf("Enter element to add at ending : "); 
    scanf("%d", &new_node -> data);
    for(int i=1; i<pos-1; i++){
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp -> next = new_node;
} 
int main(){ 
    int n; 
    printf("Enter number of elements you want to create : "); 
    scanf("%d", &n); 
    for(int i=0; i<n; i++){ 
        create(); } 
    printf("Linked List : "); 
    display(); 
    //Insert at respective position 
    insert_rpos(); 
    printf("Modified Linked List (after insertion at respective position): ");
    display(); 
    return 0;
}
