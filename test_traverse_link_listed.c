#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *link;
};
void traversing(struct node *head)  {
    if (head == NULL)
        printf("linked list is empty");
    struct node *pcr;
    pcr = head;
    int d =0;
    while(pcr != NULL ) {
        d++;
        printf("Gia tri cua node thu %d la: %d \n", d, pcr->data);
        pcr = pcr->link;
    }
};
int main () {
    printf()
    struct node *first = malloc(sizeof(struct node));
    first->data = 12;
    first->link = NULL;
    struct node *second = malloc(sizeof(struct node));
    second->data = 25;
    second->link = NULL;
    first->link =  second;

    second = malloc(sizeof(struct node));
    second->data = 215;
    second->link = NULL;
    first->link->link= second;
    traversing(first); //xong phan duyet linked list;
    struct node *meow = malloc(sizeof(struct node));
    printf("Insert a node you want to add at the beginning \n: ");
    printf("New node data = ");scanf("%d")

}
