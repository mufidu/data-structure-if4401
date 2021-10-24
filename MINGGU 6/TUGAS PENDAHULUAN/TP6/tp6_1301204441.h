#ifndef TP6_1301204441_H_INCLUDED
#define TP6_1301204441_H_INCLUDED

#include<iostream>
#include<string>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)
#define nil NULL


struct nasabah
{
    string nama, noRekening;
    int saldo;
};

typedef nasabah infotype;
typedef struct element *address;

struct element
{
    infotype info;
    address next;
    address prev;
};

struct List
{
    address first;
    address last;
};

void create_list(List &L);
void new_element(infotype nasabah, address &P);
void insert_last(List &L, address P);
void show_all_data(List L);
int jumlah_data(List L);
int selectMenu();

#endif // TP6_1301204441_H_INCLUDED
