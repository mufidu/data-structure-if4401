#include "sll.h"

using namespace std;

int main()
{
    // Buatlah main program yang akan melakukan hal berikut ini :
    // a. Membuat List kosong
    // b. Meminta data ke user sebanyak 10. Lalu data yang diberikan user akan dimasukkan ke List menggunakan insert yang sudah Anda buat
    // c. Menampilkan data yang sudah diinput tadi dengan procedure show
    // d. Memanggil fungsi procedure yang Anda buat pada tahapan ke-4 (cara pemanggilan bebas). Jika bentuknya fungsi maka return value dari fungsi tsb ditampilkan ke layar
    // e. Menghapus N data terbelakang. N sesuai digit akhir NIM Anda. Gunakan procedure
    // delete yang sudah Anda buat
    // f. Tampilkan list yang setelah Anda hapus datanya dengan procedure show

    listSingle L;
    int inputan;
    adrSingle X;

    create_list(L);

    for (int i = 0; i < 10; i++)
    {
        cout << "Masukkan data ke-" << i + 1 << ": ";
        cin >> inputan;
        alokasi(inputan, X);
        insert_first(L, X);
    }

    show(L);

    showLessThanX(L, 5);

    delete_last(L, X);

    show(L);

    return 0;
}
