#include <stdio.h>
#include <math.h>
// Given an unsorted integer array
//find a pair with the given sum in it.

void SwaP(int *a, int *b) {
    int p = *a;
    *a = *b;
    *b = p;
}
void Selection_sort(int a[], int n) {
    int min;
    for (int i =0; i <n-1; i++) {
        min = i;
        for (int k = i+1; k <n; k++) {
        if (a[k] < a[min]) min = k;
        }
        SwaP(&a[min], &a[i]);
    }
}
void Array_out(int a[], int n) {
    for (int i =0; i <n; i++) {
        printf("\na[%d]= %d", i, a[i]);
    }
}
void find_a_pair(int a[], int n, int given_sum) {
    int low = 0;
    int high = n-1;
    int count =0;
    int dem =0;
    while (low < high) {

        if (a[high] + a[low]== given_sum) {
            printf("\tPair found (%d, %d)",a[low], a[high]);
            low++;
            dem++;
        }
        (a[high] + a[low] < given_sum)?low++:high--;
    }
if (dem ==0) printf("No pairs found");

}

int main() {
    int n;
    int given_sum;
    printf("Enter the number of array: ");scanf("%d", &n);
    printf("\tPlease enter the given sum: "); scanf("%d", &given_sum);
    int a[n];
    for (int i = 0; i <n; i++) {
        printf("a[%d]= ", i);scanf("%d", &a[i]);
    }
    Selection_sort(a,n);
    Array_out(a,n);
    find_a_pair(a,n,given_sum);

}
