#include <stdio.h>
#include <stdlib.h>

void create();
void display();
void insert_begin();
void insert_end();
void insert_rpos();
void del_begin();
void del_end();
void del_rpos();
void count();
void search();
void sort();
void reverse();

struct node
{
    int data;
    struct node *next;
} *new_node, *temp, *head = NULL;

int main()
{
    int ch;
    char c;
    do
    {
        printf("\nList Operations\n");
        printf("--------------------\n");
        printf("1. CREATE\n");
        printf("2. DISPLAY\n");
        printf("3. INSERT AT BEGINNING\n");
        printf("4. INSERT AT ENDING\n");
        printf("5. INSERT AT REQUIRED POSITION\n");
        printf("6. DELETE AT BEGINNING\n");
        printf("7. DELETE AT ENDING\n");
        printf("8. DELETE AT REQUIRED POSITION\n");
        printf("9. Count no of nodes\n");
        printf("10. Search for an element\n");
        printf("11. Sort elements\n");
        printf("12. Reverse List\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                create();
                break;

            case 2:
                display();
                break;

            case 3:
                insert_begin();
                break;

            case 4:
                insert_end();
                break;

            case 5:
                insert_rpos();
                break;

            case 6:
                del_begin();
                break;

            case 7:
                del_end();
                break;

            case 8:
                del_rpos();
                break;

            case 9:
                count();
                break;

            case 10:
                search();
                break;

            case 11:
                sort();
                break;

            case 12:
                reverse();
                break;

            default:
                printf("Enter valid choice\n");
        }

        printf("\nContinue? (y/n): ");
        fflush(stdin);
        scanf(" %c", &c);

    } while(c == 'y' || c == 'Y');

    return 0;
}

void create()
{
    char ch;
    head = temp = NULL;
    do
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        printf("Enter element: ");
        scanf("%d", &new_node->data);
        new_node->next = NULL;

        if(head == NULL)
        {
            head = new_node;
            temp = new_node;
        }
        else
        {
            temp->next = new_node;
            new_node->next = NULL;
            temp = new_node;
        }

        printf("Do you want to create another node (Y/N):: ");
        fflush(stdin);
        scanf(" %c", &ch);

    } while(ch == 'Y' || ch == 'y');
}

void display()
{
    temp = head;
    printf("Elements of the list are:\n");
    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}

void insert_begin()
{
    new_node = (struct node*)malloc(sizeof(struct node));
    printf("Enter element to insert: ");
    scanf("%d", &new_node->data);
    new_node->next = head;
    head = new_node;
}

void insert_end()
{
    new_node = (struct node*)malloc(sizeof(struct node));
    printf("Enter element to insert: ");
    scanf("%d", &new_node->data);
    temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node;
    new_node->next = NULL;
}

void insert_rpos()
{
    int pos, i;
    printf("Enter position to insert: ");
    scanf("%d", &pos);

    new_node = (struct node*)malloc(sizeof(struct node));

    printf("Enter element to insert: ");
    scanf("%d", &new_node->data);

    temp = head;

    for(i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

void del_begin()
{
    temp = head;
    printf("Element deleted is %d\n", temp->data);

    head = head->next;
    temp->next = NULL;

    free(temp);
}

void del_end()
{
    struct node *d;
    temp = head;

    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    d = temp->next;
    printf("Element deleted is %d\n", ele->data);
    temp->next = NULL;
    free(d);
}

void del_rpos()
{
    struct node *d;
    int pos, i;
    temp = head;

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    for(i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    d = temp->next;
    printf("Element deleted is %d\n", d->data);
    temp->next = d->next;
    d->next = NULL;
    free(d);
}

void count()
{
    int c = 0;
    temp = head;
    
    while(temp != NULL)
    {
        c++;
        temp = temp->next;
    }
    printf("Number of nodes = %d\n", c);
}

void search()
{
    int key, flag = 0;
    printf("Enter element to search: ");
    scanf("%d", &key);
    temp = head;

    while(temp != NULL)
    {
        if(temp->data == key)
        {
            flag = 1;
            break;
        }
        temp = temp->next;
    }

    if(flag)
        printf("Element found\n");
    else
        printf("Element not found\n");
}

void sort()
{
    int t;
    struct node *i, *j;

    for(i = head; i->next != NULL; i = i->next)
    {
        for(j = head; j->next != NULL; j = j->next)
        {
            if(j->data > j->next->data)
            {
                t = j->data;
                j->data = j->next->data;
                j->next->data = t;
            }
        }
    }

    printf("List sorted successfully\n");
}

void reverse()
{
    struct node *current, *nextnode;
    struct node *prev = NULL;
    current = head;

    while(current != NULL)
    {
        nextnode = current->next;
        current->next = prev;
        prev = current;
        current = nextnode;
    }
    head = prev;

    printf("List reversed successfully\n");
}
