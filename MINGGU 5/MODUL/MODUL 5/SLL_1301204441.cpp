#include "SLL_1301204441.h"

using namespace std;

void create_list(List &L){
//Muhammad Mufid Utomo
//1301204441
    first(L) = nil;
}

void insert_last(List &L, address P) {
//Muhammad Mufid Utomo
//1301204441
    if (first(L)==nil){
        first(L)=P;
    } else {
        address addressBerjalan = first(L);
        while (next(addressBerjalan) != nil) {
            addressBerjalan = next(addressBerjalan);
        }
        next(addressBerjalan) = P;
    }
}

void delete_first(List &L, address &P) {
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


void delete_after(List &L, address Prec, address &P){
//Muhammad Mufid Utomo
//1301204441
    P = next(Prec);
    next(Prec) = next(P);
    next(P) = nil;
}

void delete_last(List &L, address &P){
//Muhammad Mufid Utomo
//1301204441
    if (next(first(L)) == nil) {
        P = first(L);
        next(first(L)) = nil;
    } else {
        address q = first(L);
        while (next(next(q)) != nil){
            q = next(q);
        }
        P=next(q);
        next(q)= nil;
    }
}

void new_element(infotype peg, address &P) {
//Muhammad Mufid Utomo
//1301204441
    P = new ElmtPeg;
    info(P) = peg;
    next(P) = nil;
}

void add_N_data(List &ListPeg) {
//Muhammad Mufid Utomo
//1301204441
    int N;
    string nama, NIP;
    int gaji;
    struct pegawai peg;
    address P;

    cout<<"Masukkan jumlah data baru: ";
    cin>>N;
    cout<<endl;

    for (int i = 0; i<N; i++) {
        cout<<"Masukkan nama pegawai ke-"<<i+1<<": ";
        cin>>nama;

        cout<<"Masukkan NIP pegawai ke-"<<i+1<<": ";
        cin>>NIP;

        cout<<"Masukkan gaji pegawai ke-"<<i+1<<": ";
        cin>>gaji;

        peg.nama = nama;
        peg.NIP = NIP;
        peg.gaji = gaji;

        new_element(peg, P);
        insert_last(ListPeg, P);
    }
}

void show_all_data(List ListPeg) {
//Muhammad Mufid Utomo
//1301204441
    address P;
    int i;

    if (first(ListPeg) == nil) {
        cout<<"List kosong!"<<endl<<endl;
    } else {
        i = 1;
        P = first(ListPeg);
        while (P != nil) {
            cout<<"Pegawai ke-"<<i<<endl;
            cout<<"Nama: "<<info(P).nama<<endl;
            cout<<"NIP: "<<info(P).NIP<<endl;
            cout<<"Gaji: "<<info(P).gaji<<endl;
            cout<<endl;
            P = next(P);
            i = i + 1;
        }
        cout<<endl<<"Semua pegawai selesai ditampilkan!"<<endl<<endl;
    }
}

address search_by_NIP(List ListPeg, string NIP) {
//Muhammad Mufid Utomo
//1301204441
    address P;
    int i = 0;

    if (first(ListPeg) == nil) {
        cout<<"List kosong!"<<endl<<endl;
    } else {
        P = first(ListPeg);
        while (P != nil) {
            if (info(P),NIP == NIP) {
                return P;
            }
            P = next(P);
        }
    }
}

void delete_Data(List &ListPeg, string NIP) {
//Muhammad Mufid Utomo
//1301204441
    address P, Q, R;

    if (first(ListPeg) == nil) {
        cout<<"List kosong!"<<endl<<endl;
    } else {
        P = first(ListPeg);
        if (info(P).NIP == NIP) {
            delete_first(ListPeg, R);
        } else {
            while (next(P) != nil) {
                Q = P;
                P = next(P);
                if (info(P).NIP == NIP) {
                    delete_after(ListPeg, Q, R);
                }
            }
            if (info(P).NIP == NIP) {
                delete_last(ListPeg, R);
            }
        }
    }
}

int selectMenu() {
//Muhammad Mufid Utomo
//1301204441

    cout<<"MENU"<<endl;
    cout<<"1. Tambah data pegawai"<<endl;
    cout<<"2. Tampilkan data pegawai"<<endl;
    cout<<"3. Cari data pegawai berdasarkan NIP"<<endl;
    cout<<"4. Hapus data berdasarkan NIP"<<endl;
    cout<<"5. Jumlah pegawai saat ini"<<endl;
    cout<<"6. Rata-rata penghasilan pegawai"<<endl;
    cout<<"7. Nama pegawai dengan gaji tertinggi"<<endl;
    cout<<"0. Selesai"<<endl;

    cout<<"Masukkan pilihan menu: ";

    int inputan = 0;
    cin>>inputan;
    cout<<endl;

    return inputan;
}

int hitungpegawai(List ListPeg) {
//Muhammad Mufid Utomo
//1301204441
    address P;
    int i = 0;

    if (first(ListPeg) == nil) {
        cout<<"List kosong!"<<endl<<endl;
    } else {
        P = first(ListPeg);
        while (P != nil) {
            P = next(P);
            i = i + 1;
        }
    }

    return i;
}

int hitungrata2(List ListPeg) {
//Muhammad Mufid Utomo
//1301204441
    address P;
    int banyak = 0;
    int jumlah_gaji = 0;
    int rata2;

    if (first(ListPeg) == nil) {
        cout<<"List kosong!"<<endl<<endl;
    } else {
        P = first(ListPeg);
        banyak = 1;
        jumlah_gaji = info(P).gaji;
        while (P != nil) {
            banyak = banyak + 1;
            jumlah_gaji = jumlah_gaji + info(P).gaji;
            P = next(P);
        }
    }

    rata2 = jumlah_gaji / banyak;

    return rata2;
}

string gajitertinggi(List ListPeg) {
//Muhammad Mufid Utomo
//1301204441
    address P;
    int tinggi = 0;
    address siapa;

    if (first(ListPeg) == nil) {
        cout<<"List kosong!"<<endl<<endl;
    } else {
        P = first(ListPeg);
        while (P != nil) {
            if (info(P).gaji > tinggi) {
                tinggi = info(P).gaji;
                siapa = P;
            };

            P = next(P);
        }
    }

    return info(siapa).nama;
}


