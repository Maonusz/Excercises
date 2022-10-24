// stack using array
// tranform a decimal number to a binary form.
#include <stdio.h>
#include <math.h>
int top = -1;

// test if the stack is empty or already full
int IsEmpty() {
    if (top == -1) return 1;
    else return 0;
}
int IsFull(int MAX) {
    if (top == MAX) return 1;
    else return 0;
}


// add new data into stack; and top plus 1 when stack is not full
void Push(int data, int MAX, int a[]) {
    if (IsFull(MAX))
    {
        printf("Stack is overflow!!!");
        exit(1);
    }
    top++;
    a[top] = data;
}


//take one element out and top minus 1;
int PoP(int a[]) {
    if (IsEmpty())
    {

        exit(1);
    }
    printf("%d", a[top]);
    top--;
    PoP(a);
}

int main() {
    int n;
    printf("Insert a number you want to enter (decimal):  ");scanf("%d", &n);
    int temp = n;
    int MAX=0;
    // count the capacity
    while (temp != 0) {
        MAX++;
        temp = temp /2;
    }
    temp = n;
    int a[MAX];

    // using cap
    for (int i = 0; i < MAX; i++)
    {
        Push(temp%2, MAX,a);
        temp = temp/2;
    }
    printf("\n");
    printf("Binary form is: \n\t");

    PoP(a);
    printf("\nClosed Program. ");
}


