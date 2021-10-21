#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define nil NULL

typedef char infotype;
typedef struct element *adr;

struct element {
    infotype info;
    adr next;
};

struct List {
    adr first;
};

void createList(List &O);
adr newElement(infotype x);
void insertFirst(List &O, adr p);
void show(List O);
adr deleteLast(List &O);

#endif // SLL_H_INCLUDED
