#include <stdio.h>
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


//ham nay kiem tra day da duoc sap xep chua

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
    for (int c = 0; c < n; c++) {
        printf(" %d", a[c]);
    }
}

void Selection_Sort(int a[], int n) {
    int min;
    int m=0;
    int t=0; //bien dem so lan lap
    for(int i = 0; i < n; i++){
        min = i;
        for (int j= i+1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        swap(&a[i],&a[min]);
      //in ra cac lan lap thu k;
     if (Test(a,n)== 0 ) {
            m++;
            printf("\nLan lap thu %d:", m);
            IN_pt(a,n);
            }
        else if (Test(a,n)==1) {
            t++;
            if (t==2) break;
            m++;
            printf("\nLan lap thu %d:", m);
            IN_pt(a,n);
            }

    }
}





int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        printf("a[%d]= ", i);scanf("%d", &a[i]);
    }
    Selection_Sort(a,n);
    return 0;
}

