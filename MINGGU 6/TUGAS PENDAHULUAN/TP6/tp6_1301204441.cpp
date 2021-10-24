#include "tp6_1301204441.h"

using namespace std;

void create_list(List &L)
{
//Muhammad Mufid Utomo
//1301204441
    first(L) = nil;
    last(L) = nil;
}

void new_element(infotype nasabah, address &P)
{
//Muhammad Mufid Utomo
//1301204441
    P = new element;
    info(P) = nasabah;
    next(P) = nil;
    prev(P) = nil;
}

void insert_last(List &L, address P)
{
//Muhammad Mufid Utomo
//1301204441
    if (first(L) == nil) {
        first(L) = P;
        last(L) = P;
    } else {
        prev(P) = last(L);
        next(last(L)) = P;
        last(L) = P;
    }
}

void show_all_data(List L)
{
//Muhammad Mufid Utomo
//1301204441
    address P;
    int i;

    if (first(L) == nil)
    {
        cout<<"List kosong!"<<endl<<endl;
    }
    else
    {
        i = 1;
        P = first(L);
        while (P != nil)
        {
            cout<<"Nasabah ke-"<<i<<endl;
            cout<<"Nama: "<<info(P).nama<<endl;
            cout<<"Nomor Rekening: "<<info(P).noRekening<<endl;
            cout<<"Saldo: "<<info(P).saldo<<endl;
            cout<<endl;
            P = next(P);
            i = i + 1;
        }
        cout<<endl<<"Semua nasabah selesai ditampilkan!"<<endl<<endl;
    }
}

int jumlah_data(List L)
{
//Muhammad Mufid Utomo
//1301204441
    address P;
    int i = 0;

    if (first(L) == nil)
    {
        cout<<"List kosong!"<<endl<<endl;
    }
    else
    {
        P = first(L);
        while (P != nil)
        {
            P = next(P);
            i = i + 1;
        }
    }

    return i;
}

int selectMenu()
{
//Muhammad Mufid Utomo
//1301204441

    cout<<"======MENU======="<<endl;
    cout<<"1. Menambah N data baru"<<endl;
    cout<<"2. Menampilkan semua data"<<endl;
    cout<<"3. Menampilkan jumlah data"<<endl;
    cout<<"0. Exit"<<endl;

    cout<<"Masukkan pilihan menu: ";

    int inputan = 0;
    cin>>inputan;
    cout<<endl;

    return inputan;
}
