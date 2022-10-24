#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *link;
};
// ham duyet linked list
void Procedure(struct node *p){
 if (p == NULL) {
    printf("List is empty");
 }
struct node *d;
d = p;
int k = 0;


while (d != NULL) {
    k++;
    printf("Value of the node number %d is %d \n",k, d->data);
    d=d->link;
}

}

int main() {
struct node *p = malloc(sizeof(struct node));

p->data = 20;
p->link = NULL;
struct node *l = malloc(sizeof(struct node));
l->data = 300;
l->link = NULL;
p->link = l;

l = malloc(sizeof(struct node));
l->data = 120;
l->link = NULL;

p->link->link = l;

Procedure(p);

//
printf("Bo sung them 1 em vao linked note");


return 0;
}
