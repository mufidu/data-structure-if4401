#ifndef SLL_1301204441_H_INCLUDED
#define SLL_1301204441_H_INCLUDED

#include<iostream>
#include<string>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define nil NULL


struct pegawai {
    string nama, NIP;
    int gaji;
};

typedef pegawai infotype;
typedef struct ElmtPeg *address;

struct ElmtPeg {
    infotype info;
    address next;
};

struct List {
    address first;
};

void create_list(List &L);
void insert_last(List &L, address P);
void delete_first(List &L, address &P);
void delete_last(List &L, address &P);
void delete_after(List &L, address Prec, address &P);

void new_element(infotype peg, address &P);
void add_N_data(List &ListPeg);
void show_all_data(List ListPeg);
address search_by_NIP(List ListPeg, string NIP);
void delete_Data(List &ListPeg, string NIP);

int selectMenu();
int hitungpegawai(List ListPeg);
int hitungrata2(List ListPeg);
string gajitertinggi(List ListPeg);

#endif // SLL_1301204441_H_INCLUDED
