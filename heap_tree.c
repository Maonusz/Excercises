#include <stdio.h>
#include <math.h>
//swap

void swap(int *a, int *b) {
    int d = *b;
    *b = *a;
    *a = d;
}

// xay dung heap
void Heap(int x[], int i, int n) {
    int key = i; // key la bien cha dau tien
    int left = 2*i;
    int right = 2*i+1;
    if( left <= n && x[left] > x[key] ) key = left;// con lon nhat la con trai
    if( right <= n && x[right] > x[key] ) key = right;// con lon nhat la con phai
    if(key != i){
        swap(&x[i], &x[key]);// doi gia tri nut cha cho nut con lon nhat
        Heap(x, key, n);// vun dong tiep cho con lon nhat
    }
}

void Preorder(int x[], int i, int n) {
    printf("%d ", x[i]);
    if(2*i <= n) Preorder(x, 2*i, n);
    if(2*i+1 <= n) Preorder(x, 2*i+1, n);
}

int main() {
    int n;
    printf("Nhap so phan tu cua cay: ");scanf("%d", &n);
    int x[n];
    printf("\nNhap cay: ");
    for(int i = 1; i <=n; i++) {
        scanf("%d", &x[i]);
    }
    for(int i = n/2; i>= 1;i--) Heap(x,i,n);
    printf("\nCay sau khi duoc vun dong: ");
    Preorder(x,1,n);
}
