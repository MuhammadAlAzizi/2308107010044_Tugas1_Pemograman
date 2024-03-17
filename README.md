KONVERSI BILANGAN

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

Pilihan 1: Bilangan Desimal ke Biner
Program akan meminta pengguna untuk memasukkan bilangan desimal.
Setelah pengguna memasukkan bilangan, program akan mulai mengonversinya menjadi bilangan biner.
Output dari program adalah representasi biner dari bilangan desimal yang dimasukkan oleh pengguna.
Pilih versi bilangan:
1. Bilangan Desimal ke Biner
2. Bilangan Biner ke Desimal
3. Bilangan Desimal ke Octal
4. Bilangan Octal ke Desimal
1
Masukkan bilangan desimal: 10
Biner: 0101

Pilihan 2: Bilangan Biner ke Desimal
Program akan meminta pengguna untuk memasukkan bilangan biner.
Setelah pengguna memasukkan bilangan, program akan mengonversinya menjadi bilangan desimal.
Output dari program adalah representasi desimal dari bilangan biner yang dimasukkan oleh pengguna.
Contoh output:
Pilih versi bilangan:
1. Bilangan Desimal ke Biner
2. Bilangan Biner ke Desimal
3. Bilangan Desimal ke Octal
4. Bilangan Octal ke Desimal
2
Masukkan bilangan biner: 1010
Desimal: 10

Pilihan 3: Bilangan Desimal ke Okta
Program akan meminta pengguna untuk memasukkan bilangan desimal.
Setelah pengguna memasukkan bilangan, program akan mengonversinya menjadi bilangan oktal.
Output dari program adalah representasi oktal dari bilangan desimal yang dimasukkan oleh pengguna.
Contoh output:
Pilih versi bilangan:
1. Bilangan Desimal ke Biner
2. Bilangan Biner ke Desimal
3. Bilangan Desimal ke Octal
4. Bilangan Octal ke Desimal
3
Masukkan bilangan desimal: 10
Octal: 12

Pilihan 4: Bilangan Okta ke Desimal
Program akan meminta pengguna untuk memasukkan bilangan oktal.
Setelah pengguna memasukkan bilangan, program akan mengonversinya menjadi bilangan desimal.
Output dari program adalah representasi desimal dari bilangan oktal yang dimasukkan oleh pengguna.
Contoh output:
Pilih versi bilangan:
1. Bilangan Desimal ke Biner
2. Bilangan Biner ke Desimal
3. Bilangan Desimal ke Octal
4. Bilangan Octal ke Desimal
4
Masukkan bilangan octal: 12
Desimal: 10

Pilihan Tidak Valid:
Jika pengguna memasukkan pilihan yang tidak valid, program akan memberikan pesan kesalahan.
Pesan kesalahan akan memberitahu pengguna bahwa pilihan yang mereka masukkan tidak valid.
Contoh output:
Pilih versi bilangan:
1. Bilangan Desimal ke Biner
2. Bilangan Biner ke Desimal
3. Bilangan Desimal ke Octal
4. Bilangan Octal ke Desimal
5
Pilihan tidak valid.
Dengan demikian, output dari program ini bergantung pada pilihan yang dibuat oleh pengguna dan input yang diberikan untuk konversi bilangan.

 
 
 TAHUN KABISAT

#include <stdio.h>

int main(){
    int tahun;
        printf("Masukkan tahun = ");
        scanf("%d", &tahun);
        while(getchar() != '\n');

    while(tahun > 9999 || tahun < 1000){
        printf("Masukkan kembali tahun = ");
        scanf("%d", &tahun);
        while(getchar() != '\n') {}
    }
        
    if(tahun %4 == 0 && tahun %100 != 0 || tahun %400 == 0){
        printf("Ini adalah tahun kabisat\n");
    } else {
        printf("Ini bukan tahun kabisat\n");
    }
    return 0;
}


Input Tahun: Program akan meminta pengguna untuk memasukkan tahun melalui perintah printf("Masukkan tahun = ");.
Kemudian, nilai tahun dimasukkan oleh pengguna melalui perintah scanf("%d", &tahun);.
Validasi Input: Setelah pengguna memasukkan tahun, program akan memeriksa apakah nilai tahun tersebut berada dalam rentang antara 1000 hingga 9999.
Jika nilai tahun tidak berada dalam rentang yang valid, 
program akan meminta pengguna untuk memasukkan tahun kembali dengan perintah printf("Masukkan kembali tahun = ");.
Validasi ini dilakukan menggunakan loop while hingga pengguna memasukkan tahun yang valid.
Cek Kabisat: Setelah mendapatkan input tahun yang valid, program akan memeriksa apakah tahun tersebut merupakan tahun kabisat atau bukan.
Pemeriksaan ini dilakukan dengan kondisi if sebagai berikut:

Jika tahun habis dibagi 4 dan tidak habis dibagi 100 atau habis dibagi 400, maka tahun tersebut adalah tahun kabisat.
Jika tidak memenuhi kondisi di atas, maka tahun tersebut bukan tahun kabisat.
Output: Berdasarkan hasil pemeriksaan, program akan mencetak pesan yang sesuai. Jika tahun merupakan tahun kabisat, program akan mencetak "Ini adalah tahun kabisat". Jika bukan tahun kabisat, 
program akan mencetak "Ini bukan tahun kabisat".

Contoh Output:
Masukkan tahun = 2023
Ini bukan tahun kabisat
Masukkan tahun = 22009
masukkan kembali tahun
Masukkan tahun = 202
masukkan kembali tahun
Masukkan tahun = yyyy
masukkan kembali tahun
Masukkan tahun = 2024
Ini adalah tahun kabisat
