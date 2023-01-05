#include "cll_dll.h"

void createList(List &L){
    first(L) = Nil;
}

address createNewElement(infotype x){
    address p = new elmList;
    info(p) = x;
    next(p) = Nil;
    prev(p) = Nil;
    return p;
}

bool isEmpty(List L){
    return first(L)==Nil;
}

void insertFirst(List &L, address p){
    if(isEmpty(L)){
        first(L) = p;
        next(first(L)) = p;
        prev(first(L)) = p;
    }else{
        next(p) = first(L);
        prev(p) = prev(first(L));
        next(prev(first(L))) = p;
        prev(first(L)) = p;
        first(L) = p;
    }
}

void insertLast(List &L, address p){
    if(isEmpty(L)){
        first(L) = p;
        next(first(L)) = p;
        prev(first(L)) = p;
    }else{
        prev(p) = prev(first(L));
        next(p) = first(L);
        next(prev(first(L))) = p;
        prev(first(L)) = p;
    }
}

void insertAfter(List &L, address prec, address p){
    next(p) = next(prec);
    prev(p) = prec;
    prev(next(prec)) = p;
    next(prec) = p;
}

void deleteFirst(List &L, address &p){
    p = first(L);
    if(next(first(L))==first(L)){
        first(L) = Nil;
    }else{
        next(prev(p)) = next(p);
        prev(next(p)) = prev(p);
        first(L) = next(p);
    }
    next(p) = Nil;
    prev(p) = Nil;
}

void deleteLast(List &L, address &p){
    p = prev(first(L));
    if(next(first(L))==first(L)){
        first(L) = Nil;
    }else{
        next(prev(p)) = first(L);
        prev(first(L)) = prev(p);
    }
    next(p) = Nil;
    prev(p) = Nil;
}

void deleteAfter(List &L, address prec, address &p){
    p = next(prec);
    if(next(prec)==prec){
        first(L) = Nil;
    }else{
        if(p==first(L)){
            first(L) = next(p);
        }
        next(prec) = next(p);
        prev(next(p)) = prec;
    }
    next(p) = Nil;
    prev(p) = Nil;
}

void showList(List L){
    address p = first(L);
    if(isEmpty(L)){
        cout << "List Kosong" << endl;
    }else{
        address p = first(L);
        cout << info(p) << " ";
        p = next(p);
        while(next(p)!=next(first(L))){
            cout << info(p) << " ";
            p = next(p);
        }
        cout << endl;
    }
}
