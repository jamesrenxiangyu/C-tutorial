#include <iostream>
#include "LinkList.h"

using namespace std;

struct NODE;
typedef struct NODE *PNODE;
struct NODE
{
    PPOINT data;
    PNODE next; 
};
struct LIST; 
typedef struct LIST *PLIST;
struct LIST
{
    unsigned int count;
    PNODE head,tail; 
};



PLIST LICreate(){
    PLIST p = new LIST;
    p->count = 0;
    p->head = NULL;
    p->tail = NULL;
    return p;
}

void LIDestroy(PLIST list){
    if (list){
        LIClear(list);
        delete list;
    }
}

void LIClear(PLIST list){
    if (!list){
        cout << "Error!" << endl;
        exit(1);
    }
    while (list->head){
        PNODE t = list->head;
        list->head = t->next;
        PtDestroy (t->data);
        delete t;
        list->count--;
    }
    list->tail = NULL;
}

void LIAppend(PLIST list, PPOINT point){
    PNODE t = new NODE;
    if (!list||!point){
        cout << "ERROR!" << endl;
        exit(1);
    }
    t->data = point;
    t->next = NULL;
    if (!list->head){
        list->head = t;
        list->tail = t;
    }
    else{
        list->tail->next = t;
        list->tail = t;
    }
    list->count++;
}

void LIInsert(PLIST list, PPOINT point, unsigned int pos){
    if (!list || !point){
        cout << "ERROR!" << endl;
        exit(1);
    }
    if (pos < list->count){
        PNODE t = new NODE;
        t->data = point;
        t->next = NULL;
        if (pos == 0){
            t->next = list->head;
            list->head = t;
        }
        else{
            unsigned int i;
            PNODE u = list->head;
            for (i=0; i<pos-1; ++i){
                u = u->next;
            }
            t->next = u->next;
            u->next = t->next;
        }
        list->count++;
    }
    else{
        LIAppend(list, point);
    }

}





