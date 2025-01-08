#include <stdio.h>

// Fungsi untuk merotasi nilai tiga variabel integer
// Menggeser nilai variabel ke kanan, yaitu nilai dari x akan dipindah ke y, y ke z, dan z ke x
void *rotasi(int *x, int *y, int *z) {
    int i = 0; // Variabel sementara untuk menyimpan nilai z
    i = *z;    // Menyimpan nilai z ke dalam variabel sementara
    *z = *y;   // Nilai y dipindah ke z
    *y = *x;   // Nilai x dipindah ke y
    *x = i;    // Nilai variabel sementara (yang menyimpan nilai z) dipindah ke x
    return;     // Mengembalikan nilai kosong (void)
}

int main() {
    // Praktikum 4, no. 2
    printf("---------------------------------------------------------------------------------\n");
    printf("Program untuk merotasi tiga bilangan bulat yang diinput oleh pengguna\n");
    printf("---------------------------------------------------------------------------------\n\n");

    // Deklarasi variabel untuk tiga bilangan dan pilihan untuk mengulang program
    int a, b, c;
    char jwb;

    do {
        // Meminta input dari pengguna untuk tiga bilangan
        printf("Masukkan nilai bilangan pertama: ");
        scanf("%d", &a);

        printf("Masukkan nilai bilangan kedua: ");
        scanf("%d", &b);

        printf("Masukkan nilai bilangan ketiga: ");
        scanf("%d", &c);
        fflush(stdin); // Menghapus sisa karakter dalam buffer input

        // Memanggil fungsi rotasi untuk merotasi nilai a, b, dan c
        rotasi(&a, &b, &c);

        // Menampilkan hasil setelah rotasi
        printf("Nilai yang anda input setelah dirotasi:\n");
        printf("a = %d\nb = %d\nc = %d", a, b, c);

        // Meminta pengguna untuk memutuskan apakah ingin mengulang program atau tidak
        printf("\n-----------------------------------------------------\n\nApakah anda ingin mengulang lagi?[y/t] ");
        scanf(" %c", &jwb); // Menggunakan format " %c" untuk menangani input karakter
        printf("\n");
        fflush(stdin); // Menghapus sisa karakter dalam buffer input
    } while (jwb == 'y'); // Program akan mengulang jika pengguna memasukkan 'y'

    return 0; // Mengembalikan 0 untuk menandakan program berhasil
}
