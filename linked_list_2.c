#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *link;
}node;
node  *insert_link(int n) {

    struct node *temp = NULL;
    struct node *head = NULL;
    struct node *p  = NULL;
    for(int i = 1; i <= n; i++) {
        temp = malloc(sizeof(struct node ));
        printf("Data of node number %d is ", i);scanf("%d", &temp->data);
        temp->link = NULL;
        if (head == NULL) {
            head = temp;
        }
        else{
            p = head;
            while(p->link != NULL) {
                p = p->link;
            }
            p->link = temp;
        }
    }
    return head;
}
void traverse(struct node *head) {
    if (head == NULL) {
        printf("This list is empty");
    }
    struct node *check;
    check = head;
    int dm=0;
    while(check != NULL) {
        dm++;
        printf("Data  %d is %d \n", dm, check->data);
        check=check->link;
    }
    printf("There are %d nodes in the linked list", dm);
}
void insertanode(node *head, int data, int i) {
    node *temp = malloc(sizeof(struct node));
    node *ptr = NULL;
    ptr = head;
    temp->data = data;
    temp->link = NULL;
    int dem =1;
    while(i != (dem -1)) {
        dem++;
        ptr=ptr->link;
    }
    temp->link = ptr->link;
    ptr->link = temp;
}

int main() {
    int n;
    node *head = NULL;
    printf("Insert number of nodes: ");scanf("%d", &n);
    printf("\n");
    printf("Please enter the data of nodes \n");
    head = insert_link(n);
    int data =2;
    int vitri =3;
    void insertanode(head,data,vitri);
    traverse(head);





}
