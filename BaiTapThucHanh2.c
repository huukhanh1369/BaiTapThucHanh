#include<stdio.h>
int main(){
    int salaryPerHour, hour, tienPhuCap,income,luongCoBan;
    printf("nhap so gio lam viec trong thang : ");
    scanf("%d",&hour);
    printf("nhap so muc luong theo gio : ");
    scanf("%d",&salaryPerHour);
    if (hour>160 ){
        income= salaryPerHour* hour + salaryPerHour* hour * 10 / 100;
        tienPhuCap = salaryPerHour* hour * 10 / 100;
        luongCoBan =  salaryPerHour* hour;
        printf("tong tien luong la %d, luong co ban la %d va tien phu cap la %d",income,luongCoBan,tienPhuCap);
    }
    else{
        income= salaryPerHour* hour;
        printf("tong tien luong la %d ",income);
    }
    return 0 ;
}