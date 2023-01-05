#include "cll_dll.h"

int main()
{
    List L;
    createList(L);
    cout << "//createList(L)//" << endl;
    cout << "Is Empty? " << boolalpha << isEmpty(L) << endl;
    cout << "Isi List: ";
    showList(L);
    cout << endl;

    cout << "//insertFirst(L,p),info(p)=12//" << endl;
    address p = createNewElement(12);
    insertFirst(L,p);
    cout << "Isi List: ";
    showList(L);
    cout << "info(first(L)): " << info(first(L)) << endl;
    cout << endl;

    cout << "//insertFirst(L,q),info(q)=24//" << endl;
    address q = createNewElement(24);
    insertFirst(L,q);
    cout << "Isi List: ";
    showList(L);
    cout << "info(first(L)): " << info(first(L)) << endl;
    cout << endl;

    cout << "//insertLast(L,r),info(r)=32//" << endl;
    address r = createNewElement(32);
    insertLast(L,r);
    cout << "Isi List: ";
    showList(L);
    cout << "info(first(L)): " << info(first(L)) << endl;
    cout << endl;

    cout << "//insertAfter(L,r,s),info(s)=48//" << endl;
    address s = createNewElement(48);
    insertAfter(L,r,s);
    cout << "Isi List: ";
    showList(L);
    cout << "info(first(L)): " << info(first(L)) << endl;
    cout << endl;

    address temp;

    cout << "//deleteFirst(L,temp)//" << endl;
    deleteFirst(L,temp);
    cout << "Isi List: ";
    showList(L);
    cout << "info(first(L)): " << info(first(L)) << endl;
    cout << "info(temp): " <<info(temp) << endl;
    cout << endl;

    cout << "//deleteLast(L,temp)//" << endl;
    deleteLast(L,temp);
    cout << "Isi List: ";
    showList(L);
    cout << "info(first(L)): " << info(first(L)) << endl;
    cout << "info(temp): " <<info(temp) << endl;
    cout << endl;

    cout << "//deleteAfter(L,r,temp)//" << endl;
    deleteAfter(L,r,temp);
    cout << "Isi List: ";
    showList(L);
    cout << "info(first(L)): " << info(first(L)) << endl;
    cout << "info(temp): " <<info(temp) << endl;
    cout << endl;

    cout << "//deleteFirst(L,r,temp)//" << endl;
    deleteAfter(L,r,temp);
    cout << "Isi List: ";
    showList(L);
    cout << endl;

    cout << "Hello world!" << endl;
    return 0;
}
