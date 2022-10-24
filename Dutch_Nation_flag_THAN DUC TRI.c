/*
em xin phep duoc quy uoc bai toan nhu sau;
mau do tuong ung voi gia tri 0;
mau trang tuong ung voi gia tri 1;
mau xanh tuong ung voi gia tri 2;

bai nay em su dung cach sap xep lua chon;
*/

#include <stdio.h>
void swap(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
}
void Selection_Sort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int min = i;
        for(int j = i+1; j <n; j++) {
            if (a[j] <= a[min]) {
                min = j;
            }
        }
        swap(&a[min], &a[i]);
    }
}
int main () {
    int n;
    printf("Nhap so mau co: ");scanf("%d", &n);
    int c[n];
    for(int i = 0; i < n; i++) {
        printf("Mau co thu %d: ", i);scanf("%d", &c[i]);
    }
    Selection_Sort(c,n);
    printf("Dutch_Natio_flag in order: ");
    for(int i =0; i <n; i++) {
        printf("%d", c[i]);
    }
    return 0;

}



