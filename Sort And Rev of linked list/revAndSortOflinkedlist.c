#include <stdio.h>
#include <stdlib.h>
 

struct Node {
    int data;
    struct Node* next;
};
 struct Node *head=NULL;

static void reverse(){
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;
    while (current != NULL) {
        
        next = current->next;
 
        
        current->next = prev;
 
    
        prev = current;
        current = next;
    }
   head = prev;
}
 

void push( int new_data)
{
    struct Node* new_node
        = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}
 

void printList()
{
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void bubbleSort() 
{ 
    int swapped, i; 
    struct Node *ptr1; 
    struct Node *lptr = NULL; 
  
    
    if (head == NULL) 
        return; 
  
    do
    { 
        swapped = 0; 
        ptr1 = head; 
  
        while (ptr1->next != lptr) 
        { 
            if (ptr1->data > ptr1->next->data) 
            {  
                swap(ptr1, ptr1->next); 
                swapped = 1; 
            } 
            ptr1 = ptr1->next; 
        } 
        lptr = ptr1; 
    } 
    while (swapped); 
} 
  

void swap(struct Node *a, struct Node *b) 
{ 
    int temp = a->data; 
    a->data = b->data; 
    b->data = temp; 
} 

int main()
{
    
    int a,data;
    while(1){
        printf("Enter operation\n");
        scanf("%d",&a);
    switch(a){
     case 1: printf("Enter data to insert at beggning\n");
              scanf("%d",&data);
              push(data);
              break;
    case 2: printList();
            break;
    case 3: reverse();
           printf("The list is reversed\n");
            break;
    case 4: bubbleSort();
            printf("The list is sorted\n");
            break;
    case 5: exit(0);
            break;
    }
}
return 0;
}