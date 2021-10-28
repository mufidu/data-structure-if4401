#ifndef DLL_FIRST_LAST_H_INCLUDED
#define DLL_FIRST_LAST_H_INCLUDED

#include<iostream>
#include<string>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)
#define nil NULL

typedef int infotype;
typedef struct elmList *address;

struct elmList
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

void createList(List &L);
address createElemen(infotype dataBaru);
void insertFirst(List &L, address &P);
void insertLast(List &L, address P);
void InsertAfter(address Prec, address P, List L); // kurang LIST ga nih? atau pake pointer gitu
void insertAscending(List &L, infotype dataBaru);
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(address Prec, address &P); // kurang LIST ga nih? atau pake pointer gitu
void deleteElm(List &L, infotype dataHapus);
void printList(List L);
bool findElement(List L, infotype dataDicari);
int frequencyofElm(List L, infotype dataDicari);

#endif // DLL_FIRST_LAST_H_INCLUDED
