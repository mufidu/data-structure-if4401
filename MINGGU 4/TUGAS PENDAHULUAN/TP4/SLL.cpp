#include "SLL.h"

void createList(List &O) {
    first(O) = nil;
}

adr newElement(infotype x) {
    adr P = new element;
    info(P) = x;
    next(P) = nil;
    return P;
}

void insertFirst(List &O, adr p) {
    if (first(O) == nil) {
        first(O) = p;
    }
}

void show(List O) {
    if (first(O) != nil) {
        adr p = first(O);
        while (p != nil) {
            cout<< info(p)<< " ";
            p = next(p);
        }
        cout<<endl;
    } else {
        cout<<"List kosong."<<endl;
    }
}

adr deleteLast(List &O) {
    adr p, q;
    if (first(O)==nil) {
        p = nil;
        cout<<"List kosong."<<endl;
    } else if (next(first(O))==nil) {
        p = first(O);
        first(O) = nil;
    } else {
        q = first(O);
        p = first(O);
        while (next(p) != nil) {
            q = p;
            p = next(p);
        }

        next(q) = nil;
    }
}

