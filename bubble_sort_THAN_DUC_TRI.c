#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Test(int a[], int n) {
    for(int hm = 0; hm < n; hm++) {
        if (a[hm] <= a[hm+1]){
            continue;
        }
        else {
            return 0;
        }
    }
    return 1;
}

void IN_pt(int a[], int n) {
    for(int i = 0; i <n; i++){
        printf(" %d", a[i]);
    }
}

void Bubble_sort(int a[], int n) {
    int k =0;
    int t =0;
    for(int i = 0; i < n;i++) {
        for (int j = n-1; j>i;j--) {
            if (a[j-1] >= a[j]) {
                swap(&a[j-1],&a[j]);
            }
        }
        //in cac lan sap xep ra man hinh
        if (Test(a,n)== 0 ) {
            k++;
            printf("\nLan lap thu %d:", k);
            IN_pt(a,n);
            }
        else if (Test(a,n)==1) {
            t++;
            if (t==2) break;
            k++;
            printf("\nLan lap thu %d:", k);
            IN_pt(a,n);
            }

    }
}

int main() {
    int n;
    printf("Nhap so phan tu cua day: ");scanf("%d", &n);
    int a[n];
    for(int i= 0; i < n;i++ ) {
       printf("a[%d]= ", i);scanf("%d", &a[i]);
    }
    Bubble_sort(a,n);


}
