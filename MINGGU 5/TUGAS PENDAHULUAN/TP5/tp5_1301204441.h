#ifndef TP5_H_INCLUDED
#define TP5_H_INCLUDED

#include<iostream>
#include<string>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).First)
#define nil NULL

typedef char infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
};

struct List {
    address First;
};

void createList(List &L);
address newElement(infotype dataBaru);
void insertLast(List &L, address P);
void printList(List L);
int jumlahA(List L);
int selectMenu();

#endif // TP5_H_INCLUDED
