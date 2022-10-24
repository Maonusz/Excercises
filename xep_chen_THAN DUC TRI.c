#include <stdio.h>


int main () {
    int n,i;
    printf("Nhap so phan tu cua mang: ");scanf("%d", &n);
    int a[n];
    for(i = 0; i< n; i++) {
        printf("a[%d] = ",i);scanf("%d", &a[i]);
    }
    // sap xep tang dan
    for (int i = 1; i <n;i++) {

        int x = a[i];
        int j = i;
        while (j >0 && a[j-1] > x){
            a[j] = a[j-1];
            j--;
        }
        a[j] = x; // sap xep lan thu i
        printf("\nSap xep lan thu %d: ", i);
        for(int h =0; h <n; h++) {
        printf(" %d", a[h]);
        }
    }
    printf("\n\n");
    //sap xep giam dan
    for (int i =1; i < n;i++) {
        int x = a[i];
        int j = i;
        while (j> 0 && a[j-1] < x) {
            a[j] = a[j-1];
            j--;
        }
        a[j] = x;
        // sap xep lan thu i
        printf("\nSap xep lan thu %d:", i);
        for(int h =0;h <n; h++) {
                printf(" %d", a[h]);
        }
    }
}
