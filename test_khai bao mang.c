#include <stdio.h>
int main(){
int n, i;
printf("Nhap so phan tu cua day: ");scanf("%d", &n);
int a[n];
for(i =0; i < n;i++) {
    printf("Nhap a[%d]= ", i);scanf("%d", &a[i]);
}
for(i = 0; i< n;i++) {
    printf("a[%d]= %d\n", i, a[i]);
}
}
