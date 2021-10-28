#include "SLL_1301204441.h"

using namespace std;

int main()
{
    int pilihan = 0, N;
    List L;
    string dicari, dihapus;
    address pegdicari;

    create_list(L);

    pilihan = selectMenu();

    while (pilihan != 0) {
        switch (pilihan) {
            case 1:
                add_N_data(L);
                cout<<endl;
                break;
            case 2:
                show_all_data(L);
                break;
            case 3:
                cout<<"NIP yang dicari: ";
                cin>>dicari;
                cout<<endl;

                pegdicari = search_by_NIP(L, dicari);
                cout<<"Pegawai yang dicari adalah: "<<endl;
                cout<<"Nama: "<<info(pegdicari).nama<<endl;
                cout<<"NIP: "<<info(pegdicari).NIP<<endl;
                cout<<"Gaji: "<<info(pegdicari).gaji<<endl<<endl;
                break;
            case 4:
                cout<<"NIP pegawai yang ingin dihapus: ";
                cin>>dihapus;
                cout<<endl;

                delete_Data(L, dihapus);
            break;
            case 5:
                cout<<"Jumlah pegawai saat ini adalah: "<<hitungpegawai(L)<<endl<<endl;
                break;
            case 6:
                cout<<"Rata-rata penghasilan pegawai adalah: "<<hitungrata2(L)<<endl<<endl;
                break;
            case 7:
                cout<<"Pegawai dengan gaji tertinggi adalah: "<<gajitertinggi(L)<<endl<<endl;
        }
        pilihan = selectMenu();

    }
}
