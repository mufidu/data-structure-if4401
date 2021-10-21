#include "tp5_1301204441.h"

using namespace std;

int main()
{
    int pilihan = 0, N;
    char elemen;
    address P;
    List L;

    createList(L);

    pilihan = selectMenu();
    cout<<endl;

    while (pilihan != 0) {
        switch(pilihan) {
            case 1:
                cout<<"Masukkan banyak data: ";
                cin>>N;

                for (int i = 0; i<N; i++) {
                    cout<<"Masukkan char: ";
                    cin>>elemen;
                    P = newElement(elemen);
                    insertLast(L, P);
                }

                cout<<endl;
                break;

            case 2:
                cout<<endl;
                printList(L);
                break;
            case 3:
                cout<<endl<<"Jumlah huruf A: "<<jumlahA(L)<<endl<<endl;
                break;
        }

        pilihan = selectMenu();
    }
}
