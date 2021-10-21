#include "mylist.h"

void createList(List &L) {
//Muhammad Mufid Utomo
//1301204441

    first(L) = nil;
}

infotype newMahasiswa(string nama, string nim, float ipk) {
//Muhammad Mufid Utomo
//1301204441

    infotype mhs;
    mhs.nama = nama;
    mhs.nim = nim;
    mhs.ipk = ipk;
    return mhs;
}

address newElement(infotype dataBaru) {
//Muhammad Mufid Utomo
//1301204441

    address P = new elmList;
    info(P) = dataBaru;
    next(P) = nil;
    return P;
}

void insertFirst(List &L, address P) {
//Muhammad Mufid Utomo
//1301204441

    if (first(L) == nil) {
        first(L) = P;
    } else {
        next(P) = first(L);
        first(L) = P;
    };
}

void deleteFirst(List &L, address &P) {
//Muhammad Mufid Utomo
//1301204441

    P = first(L);
    if (next(first(L)) == nil) {
        first(L) = nil;
    } else {
        first(L) = next(first(L));
    }
    next(P) = nil;
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
            cout<<i<<". "<<endl;
            cout<<"Nama: "<<info(P).nama<<endl;
            cout<<"NIM: "<<info(P).nim<<endl;
            cout<<"IPK: "<<info(P).ipk<<endl;
            P = next(P);
            i = i + 1;
        }
        cout<<endl<<"List selesai ditampilkan!"<<endl<<endl;
    }
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

void deleteLast(List &L, address &P) {
//Muhammad Mufid Utomo
//1301204441

    address q;
    if (first(L)==nil) {
        P = nil;
    } else if (next(first(L)) == nil) {
        P = first(L);
        first(L) = nil;
    } else {
        q = first(L);
        P = first(L);
        while (next(P) != nil) {
            q = P;
            P = next(P);
        }

        next(q) = nil;
    }
}















