#include <stdio.h>

int main() {
    int pilihan;
    int bilangan;
    int hasil;

    printf("Pilih versi bilangan:\n");
    printf("1. Bilangan Desimal ke Biner\n");
    printf("2. Bilangan Biner ke Desimal\n");
    printf("3. Bilangan Desimal ke Octal\n");
    printf("4. Bilangan Octal ke Desimal\n");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &bilangan);
            printf("Biner: ");
            while (bilangan > 0) {
                printf("%d", bilangan % 2);
                bilangan /= 2;
            }
            break;

        case 2:
            printf("Masukkan bilangan biner: ");
            scanf("%d", &bilangan);
            hasil = 0;
            int pangkat = 0;
            while (bilangan > 0) {
                hasil += (bilangan % 10) * (1 << pangkat);
                bilangan /= 10;
                pangkat++;
            }
            printf("Desimal: %d\n", hasil);
            break;

        case 3:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &bilangan);
            printf("Octal: %o\n", bilangan);
            break;

        case 4:
            printf("Masukkan bilangan octal: ");
            scanf("%o", &bilangan);
            printf("Desimal: %d\n", bilangan);
            break;

        default:
            printf("Pilihan tidak valid.\n");
            break;
    }

    return 0;
}