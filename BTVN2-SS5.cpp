#include <stdio.h>
int main(){
    float revenue, Commission;
    printf("Nhap doanh thu ban hang:");
    scanf("%f", &revenue);
    if(revenue <= 100){
        Commission = revenue * 0.05;
    }else if (revenue <= 300){
       Commission = revenue * 0.1;
    }else{
        Commission = revenue * 0.2;
    }
    printf("Hoa hong la: %f", Commission);
}
