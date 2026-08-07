//Operation of Stacks using Arrays

#include <stdio.h>
#define size 5
int stack [size];
int top = -1;

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
	
	    printf("Do you want to continue? (y/n) : ");
	    scanf(" %c", &c);
    }while (c== 'Y' || c == 'y');
    return 0;
}


void Push(){
	
	int ele;
	if(top==size-1){
		printf("Stack is full");
	}
	
	else{
		top++;
		printf("Enter element to insert: ");
		scanf("%d", &ele);
		stack[top]=ele;
	}
	Display();
}

void Pop(){
	if (top==-1){
		printf("Stack is empty");
	}
	
	else{
		printf("Element deleted is %d ", stack[top]);
		top--;
	}
	Display();
}

void Peek(){
	if (top==-1){
		printf("Stack is empty");
	}
	else{
		printf("Top element in the Stack is : %d\n", stack[top]);
	}
}

void Display(){
	
	int i;
	if (top==-1){
		printf("Stack is empty");
	}
	else {
		printf("Elements of the stack are : \n");
		for(i=top; i >= 0; i--){
			printf("%d\n", stack[i]);
		}
	}
}
