#inlcude <stdio.h>
#include <math.h>
void Enter_value(int a[], int n) {
    for (int i = 0; i < n; i++)
    {
        printf("\n\t%d th element is: ", i+1);scanf("%d", &a[i]);
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
    int i = j =h= 0;
    printf("\n\tPlease enter the values of array X");
    Enter_value(x,dx);
    printf("\n\tPlease enter the values of array y");
    Enter_value(y,dy);
    while(i < dx && j <dy) {
        if (x[i] < y[j]) {
            z[h] = x[i];
            i++;
            h++;
        }
        else if (x[i] >= y[j]){
            z[h] = y[j];
            j++;
            h++;
        }
    }
    if ( i == dx && j < dy){
        for(j = j; j < dy;j++) {
            z[h] = y=[j];
            h++;
        }
    }
    if ( i == dx && j < dy){
        for(j = j; j < dy;j++) {
            z[h] = y=[j];
            h++;
        }
    }
    if ( i == dx && j < dy){
        for(j = j; j < dy;j++) {
            z[h] = y=[j];
            h++;
        }
    }
    if ( i == dx && j < dy){
        for(j = j; j < dy;j++) {
            z[h] = y=[j];
            h++;
        }
    }
    if ( j == dy && i < dx){
        for(i = i; i < dx;i++) {
            z[h] = x[i];
            h++;
        }
    }
    for( i = 0; )
}
