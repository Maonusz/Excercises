#include <stdio.h>
#include <math.h>
// cau truc du lieu tree
struct node
{
    int data;
    struct node *right;
    struct node *left;
};

typedef struct node node;


// tao ra node moi trong cay nhi phan
node *createNew(int data ) {
    node *new = malloc(sizeof(node));

    new->data = data;
    new->right = NULL;
    new->left = NULL;
    return new;
}

// duyet theo gia tri truoc
void Preoder(node *travel) {
    //tham goc
    if (travel == NULL)
        return;

    printf("%d ", travel->data);

    // tham cay trai
    Preoder(travel->left);

    //tham cay phai
    Preoder(travel->right);
}

// duyet theo gia tri giua
void Inorder(node *travel) {
    if (travel == NULL)
        return;

    // tham cay trai con
    Inorder(travel->left);

    printf("%d ", travel->data);

    //tham cay phai

    Inorder(travel->right);
}

//duyet theo thu tu sau
void Postorder(node *travel) {
    if (travel == NULL)
        return;

    Postorder(travel->left);

    Postorder(travel->right);

    printf("%d ", travel->data);
}

int main() {


// create a big Mom;
node *travel = NULL;

node *root = malloc(sizeof(node));
root->data = 4;
root->right = NULL;
root->left = NULL;

travel = root;
// tao ra cac node child
// lop thu 1 (tinh tu goc)
root->left = createNew(1);
root->right = createNew(3);
/*   4
    / \
   1   3 */
//

// lop thu 2
root->left->left = createNew(2);
root->left->right = createNew(16);
root->right->left = createNew(9);
root->right->right = createNew(10);
/*
      4
    /   \
    1    3
   / \  /   \
  2 16  9   10
*/


//lop thu 3
root->left->left->left = createNew(14);
root->left->left->right = createNew(8);
root->left->right->left = createNew(7);
/*
        4
     /     \
     1      3
   /   \    / \
  2    16  9   10
/  \   /
14 8   7
*/


//[theo gia tri truoc]
printf("Duye theo thu tu truoc: \n");

Preoder(travel);






}
