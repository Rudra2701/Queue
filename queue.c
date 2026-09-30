#include <stdlib.h>
struct node {
    void* data;
    struct node* next;
};
typedef struct node node;
/**/
void insertl(node* head,int val) {
    if (head==NULL) return;
    node* temp;
    node* ptr=(node*)malloc(sizeof(node));
    for(temp=head;temp->next!=NULL;temp=temp->next);
    temp->next=ptr;
    ptr->next=NULL;
    ptr->data=malloc(sizeof(val));
    *(int*)(ptr->data)=val;
}   
node* deletef(node* head) {
    node* temp=head->next;
    free(head->data);
    free(head);
    return temp;
}  