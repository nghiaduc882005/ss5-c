#include <stdio.h>

int main() {
    int soPhutSuDung;
    float phiThueBao, phi50PhutDau, phi150PhutTiepTheo, phi200PhutTiepTheo, phiPhutConLai, tongPhi;

    printf("Nhap so phut su dung dien thoai: ");
    scanf("%d", &soPhutSuDung);

    phiThueBao = 25000;
    phi50PhutDau = 600 * 50;
    phi150PhutTiepTheo = 400 * 100;
    phi200PhutTiepTheo = 200 * 200;

    if (soPhutSuDung <= 50) {
        phiPhutConLai = 0;
    } else if (soPhutSuDung <= 200) {
        phiPhutConLai = (soPhutSuDung - 50) * 100;
    } else {
        phiPhutConLai = (soPhutSuDung - 200) * 100;
    }

    tongPhi = phiThueBao + phi50PhutDau + phi150PhutTiepTheo + phi200PhutTiepTheo + phiPhutConLai;

    printf("Tong phi dien thoai la: %f", tongPhi);

    return 0;
}
