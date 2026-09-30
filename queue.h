#ifndef QUEUE_H
#define QUEUE_H
struct node {
    void* data;
    struct node* next;
};
typedef struct node node;

void insertl(node* head,int val);
node* deletef(node* head);
#endif