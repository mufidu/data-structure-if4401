#include "tp6_1301204441.h"

using namespace std;

int main()
{
    int pilihan, N, saldo;
    string nama, norek;
    struct nasabah nas;
    address P;
    List L;

    create_list(L);
    pilihan = selectMenu();
    while (pilihan != 0)
    {
        switch (pilihan)
        {
        case 1:
            cout << "Masukkan jumlah data: ";
            cin >> N;
            for (int i = 0; i < N; i++)
            {
                cout<<"Masukkan nasabah ke-"<<i+1<<": "<<endl;
                cout << "Nama: ";
                cin>>nama;
                cout << "Nomor Rekening: ";
                cin>>norek;
                cout << "Saldo: ";
                cin>>saldo;

                nas.nama = nama;
                nas.noRekening = norek;
                nas.saldo = saldo;

                new_element(nas, P);
                insert_last(L, P);
            }
            break;

        case 2:
            show_all_data(L);
            break;

        case 3:
            cout << "Banyak nasabah adalah: " << jumlah_data(L) << " orang." << endl<<endl;
            break;
        }

        pilihan = selectMenu();
    }

}
