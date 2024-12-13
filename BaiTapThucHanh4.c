#include<stdio.h>
int integer, i;
int main(){
    printf("nhap vao so nguyen n : ");
    scanf("%d",&integer);
    printf("uoc cua so nguyen %d la :",integer);
    for (i= 1; i <= integer; i++ ){
        if(integer % i == 0 ){
            printf("%d ",i);
        }
    }
    return 0;
}