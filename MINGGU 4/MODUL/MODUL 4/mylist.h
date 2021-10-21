#ifndef MYLIST_H_INCLUDED
#define MYLIST_H_INCLUDED

#include<iostream>
#include<string>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).First)
#define nil NULL

struct mahasiswa {
    string nama;
    string nim;
    float ipk;
};

typedef mahasiswa infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
};

struct List {
    address First;
};

void createList(List &L);
infotype newMahasiswa(string nama, string nim, float ipk);
address newElement(infotype dataBaru);
void insertFirst(List &L, address P);
void insertLast(List &L, address P);
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void printList(List L);

#endif // MYLIST_H_INCLUDED
