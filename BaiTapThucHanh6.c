#include<stdio.h>
#include<math.h>
int primeNumber(int n) {
    if (n < 2) {
        return 0;
    }
    int i;
    for (i = 2; i <= n/2; i++ ) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    printf("nhap vao so nguyen duong n:");
    scanf ("%d",&n);
    printf("%d so nguyen to dau tien la: ", n);
    int count =0;
    int i = 2;
    while (count < n) {
        if (primeNumber(i)) {
            printf("%d ", i);
            count++;
        }
        i++ ;
    }
}