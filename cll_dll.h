#ifndef CLL_DLL_H_INCLUDED
#define CLL_DLL_H_INCLUDED

#include <iostream>

#define info(p) (p)->info
#define next(p) (p)->next
#define prev(p) (p)->prev
#define first(L) (L).first
#define last(L) (L).last
#define Nil NULL

using namespace std;

typedef int infotype;
typedef struct elmList *address;

struct elmList{
    infotype info;
    address next, prev;
};

struct List{
    address first;
};

void createList(List &L);
address createNewElement(infotype x);
bool isEmpty(List L);
void insertFirst(List &L, address p);
void insertLast(List &L, address p);
void insertAfter(List &L, address prec, address p);
void deleteFirst(List &L, address &p);
void deleteLast(List &L, address &p);
void deleteAfter(List &L, address prec, address &p);
void showList(List L);

#endif // CLL_DLL_H_INCLUDED
