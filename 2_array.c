#include <stdio.h>
#include <math.h>
void Enter_value(int a[], int n) {
    for (int i = 0; i < n; i++)
    {
        printf("\n\t%d th element is: ", i+1);scanf("%d", &a[i]);
    }
}
void Swap(int *m, int *n) {
    int temp = *m;
    *m = *n;
    *n = temp;
}
void Bubble_sort(int a[], int n) {
for ( int i = 0; i < n-1; i++)
{
    for (int  j = 0; j < n-i-1; j++)
    {
       if (a[j] > a[j+1]) {
        Swap(&a[j], &a[j+1]);
       }
    }
}
}




void Out_array(int a[], int n) {
    for (int i = 0; i < n; i++)
    {
        printf("\n%d ", a[i]);
    }
}
int main() {
    int dx;
    printf("Enter the number of X array: ");scanf("%d", &dx);
    int x[dx];
    int dy;
    printf("\nEnter the number of Y array: ");scanf("%d", &dy);
    int y[dy];
    int dz = dx +dy;
    int z[dz];
    printf("\n\tPlease enter the values of array X");
    Enter_value(x,dx);
    printf("\n\tPlease enter the values of array y");
    Enter_value(y,dy);
    for (int  i = 0; i < dx; i++)
    {
        z[i] = x[i];
    }
    int k =0;
    for (int i = dx; i < dz; i++) {
        z[i] = y[k];
        k++;
    }
    Bubble_sort(z,dz);
    Out_array(z,dz);
//
    for(int i =0; i< dx; i++) {
        x[i] = z[i];
    }
    for(int i = dx; i <dz;i++) {
        y[i] = z[i];
    }
    printf("\nArray X: \t");Out_array(x,dx);
    printf("\nArray Y: \t");Out_array(y,dy);
}
