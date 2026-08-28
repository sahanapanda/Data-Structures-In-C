//Operations of Stack using Linked Lists
#include <stdio.h>
#include <stdlib.h>
struct node {
  	int data;
  	struct node *next;
} *top, *new_node, *temp;

void Push();
void Pop();
void Peek();
void Display();

int main (){
	int ch;
	char c;
	
	do{
		
	    printf("\n --Stack Operations using Arrays-- \n");
	    printf("1. Push Element into the stack\n");
	    printf("2. Pop Element out of the stack\n");
	    printf("3. Display Top Element of the stack\n");
	    printf("4. Display all the Elements of the stack\n");
	
	    printf("Enter your choice : ");
	    scanf("%d", &ch);
	
	    switch(ch){
		    case 1:
			    Push();
			    break;
			
		    case 2:
			    Pop();
			    break;
			
		    case 3:
			    Peek();
			    break;
			
		    case 4:
			    Display();
			    break;
	    }
	
	    printf("\n Do you want to continue? (y/n) : ");
	    scanf(" %c", &c);
    }while (c== 'Y' || c == 'y');
    return 0;
}


void Push(){
	
	new_node = (struct node*)malloc(sizeof(struct node));
	printf("Enter element to insert: ");
	scanf("%d", &new_node -> data);
	new_node -> next = NULL;
	
	if (top==NULL){
		top = new_node;
	}
	
	else{
		new_node -> next = top;
		top = new_node;
	}
	Display();
}

void Pop(){
	if (top==NULL){
		printf("Stack is empty");
	}
	
	else{
		temp = top;
		printf("Element deleted is %d\n", top->data);
		top=top->next;
		temp -> next = NULL;
		free(temp);
	}
	Display();
}

void Peek(){
	if (top==NULL){
		printf("Stack is empty");
	}
	else{
		printf("Top element in the Stack is : %d\n", top->data);
	}
}

void Display(){
	
	temp = top;
	if (top==NULL){
		printf("Stack is empty");
	}
	else {
		printf("Elements of the stack are :\n");
		while(temp != NULL){
			printf("%d\n", temp -> data);
			temp = temp -> next;
		}
	}
}
