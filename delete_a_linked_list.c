#include <stdio.h>
#include <math.h>
typedef struct Node {
    int data;
    Node *next;
}Node;
void Delete_a_Linked_list(*head) {
    Node *p = NULL;
    Node *h1 = NULL;
    p = head;
    h1 = head;
    int k= 0;
    while (p != NULL) {
        p = p->next;
        p->data = NULL;
        h1->next = NULL;
        h1 = p;
        k++;


    }

}
