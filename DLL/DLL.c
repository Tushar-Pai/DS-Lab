#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head=NULL;
void add_at_begin( ){
    struct node *ptr = NULL;
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("ENTER NEW ITEM:\n");
    scanf("%d",& ptr->data);
    ptr->prev=NULL;
    ptr->next=NULL;
    if(head==NULL){
        head=ptr;
    }
    else{
        ptr->next=head;
        head->prev=ptr;
        head=ptr;
    }
    
}


void delete_at_specifiedloc( ){
    int i,loc,count=0;
    if(head==NULL){
        printf("LIST IS EMPTY\n");
        return;
    }
    struct node *ptr=head;
    struct node *ptr1;
        printf("ENTER POSITION :\n");
        scanf("%d",&loc);
    if(loc==1)
    { 

    ptr=head;
    head=ptr->next;
    free(ptr);
    printf("ELEMENT DELETED FROM POSITION 1\n");

}
    else{while(ptr!=NULL)
          {ptr=ptr->next;
           count++;}
           
        if(loc>count)
       { printf("INVALID LOCATION SELECTED\n");
         return;}
         ptr=head;
         if(count==loc)
         {  while(ptr->next!=NULL)
        {ptr1=ptr;
        ptr=ptr->next;
        }
        ptr1->next=NULL;
        
        
        free(ptr);
        printf("NODE DELETED FROM POSITION %d\n",loc);
             return;
         }
         ptr=head;
         
        for(i=1;i<loc;i++){
            ptr=ptr->next;
        }
        ptr->prev->next=ptr->next;
        ptr->next->prev=ptr->prev;
        free(ptr);
    }
  printf("NODE DELETED FROM POSITION:%d\n",loc);  
}
void display( ){
    if(head==NULL){
        printf("LIST IS EMPTY\n");
    }
    else{
        struct node *temp=head;
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
void main() {
    int ch;
   
    while(1){
        
        printf("1.ADD AT BEGINING OF LIST\n");


        printf("2.DELETE FROM LOCATION\n");
        printf("3.DISPLAY LIST\n");
        printf("4.EXIT\n");
        printf("ENTER YOUR CHOICE :\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                add_at_begin();
                break;

            case 2:
                delete_at_specifiedloc();
                break;
            case 3:
                display();
                break;

            case 4:exit(1);
            default:
                printf("invalid option\n");
        }
    }
    
}