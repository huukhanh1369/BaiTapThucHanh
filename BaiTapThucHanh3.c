#include<stdio.h>
int main(){
    int n;
    float money;
    printf("==========CHUONG TRINH CHUYEN DOI TIEN TE==========\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    printf("hay chon loai tien muon chuyen doi : ");
    scanf("%d",&n);
    printf("nhap vao so tien muon doi : ");
    scanf("%f",&money);
    switch( n ){
        case 1:
        printf ("USD to VND, INPUT: %.3f USD\n",money);
        printf("%.3f USD = %.3f VND",money,money *23500);
        break;
        case 2:
        printf ("EUR to VND, INPUT: %.3f EUR\n",money);
        printf("%.3f EUR = %.3f VND",money,money *25000);
        break;
        case 3:
        printf ("GBP to VND, INPUT: %.3f GBP\n",money);
        printf("%.3f GBP = %.3f VND",money,money *28000);
        break;
        case 4:
        printf ("JPY to VND, INPUT: %.3f JPY\n",money);
        printf("%.3f JPY = %.3f VND",money,money *180);
        break;
        case 5:
        printf ("VND to USD, INPUT: %.3f VND\n",money);
        printf("%.3f VND = %.3f USD",money,money /23500);
        break;
        case 6:
        printf ("VND to EUR, INPUT: %.3f VND\n",money);
        printf("%.3f VND = %.3f EUR",money,money /25000);
        break;
        case 7:
        printf ("VND to GBP, INPUT: %.3f VND\n",money);
        printf("%.3f VND = %.3f GBP",money,money /28000);
        break;
        case 8:
        printf ("VND to JPY, INPUT: %.3f VND\n",money);
        printf("%.3f VND = %.3f JPY",money,money /180);
        break;
    }
    return 0;
}