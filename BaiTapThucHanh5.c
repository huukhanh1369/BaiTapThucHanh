#include <stdio.h>
int main(){
  int i, integer ;
  printf("nhap vao so nguyen N : ");
  scanf("%d",&integer);
  for (i=2 ;i<integer; i++){
    if (integer % i==0){
      printf("%d khong la so nguyen to",integer);
      break;
    }
    else{
      printf("%d la so nguyen to",integer);
      break;
    }
  }
  return 0;
}