//Delete at end
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
void delete_end(){ 
    temp = head; 
    struct node *ele;
    while(temp->next->next!=NULL)
        temp = temp -> next;
    ele = temp->next;
    printf("Element to be deleted : %d ", ele->data);
    temp -> next = NULL;
    free(ele);
}
int main(){ 
    int n; 
    printf("Enter number of elements you want to create : "); 
    scanf("%d", &n); 
    for(int i=0; i<n; i++){ 
        create(); } 
    printf("Linked List : "); 
    display(); 
    //Delete at beginning 
    delete_end(); 
    printf("\nModified Linked List (after deleting from end): ");
    display(); 
    return 0;
}
