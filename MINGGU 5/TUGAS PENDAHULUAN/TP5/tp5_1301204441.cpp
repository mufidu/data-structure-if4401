#include "tp5_1301204441.h"

using namespace std;

void createList(List &L) {
//Muhammad Mufid Utomo
//1301204441

    first(L) = nil;
}

address newElement(infotype dataBaru) {
//Muhammad Mufid Utomo
//1301204441

    address P = new elmList;
    info(P) = dataBaru;
    next(P) = nil;
    return P;
}

void insertLast(List &L, address P) {
//Muhammad Mufid Utomo
//1301204441

    address Q;

    if (first(L) == nil) {
        first(L) = P;
    } else {
        Q = first(L);
        while (next(Q) != nil) {
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void printList(List L) {
//Muhammad Mufid Utomo
//1301204441

    address P;
    int i;

    if (first(L) == nil) {
        cout<<"List kosong!"<<endl<<endl;
    } else {
        i = 1;
        P = first(L);
        while (P != nil) {
            cout<<info(P)<<" ";
            P = next(P);
            i = i + 1;
        }
        cout<<endl<<"List selesai ditampilkan!"<<endl<<endl;
    }
}

int jumlahA(List L) {
//Muhammad Mufid Utomo
//1301204441

    address P;
    int i;
    int jumlah = 0;

    if (first(L) == nil) {
        return jumlah;
    } else {
        i = 1;
        P = first(L);
        while (P != nil) {
            if (info(P) == 'A') {
                jumlah = jumlah + 1;
            };
            P = next(P);
            i = i + 1;
        }
        return jumlah;
    }
}

int selectMenu() {
//Muhammad Mufid Utomo
//1301204441

    cout<<"======MENU======="<<endl;
    cout<<"1. Menambah N data baru"<<endl;
    cout<<"2. Menampilkan semua data"<<endl;
    cout<<"3. Hitung jumlah A di list"<<endl;
    cout<<"0. exit"<<endl;

    cout<<"Masukkan pilihan menu: ";

    int inputan = 0;
    cin>>inputan;

    return inputan;
}


