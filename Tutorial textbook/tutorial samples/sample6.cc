#include <cstdio>
#include <cstring>
#include <iostream>
#include "Point.h"

using namespace std;
struct POINT{int x,y ;};
static char *DupString(const char *s);

int main(){
    int x,y;
    x = 3;
    y = 5;
    int x1, y1;
    PPOINT A;
    A = PtCreate(x, y);
    PtGetvalue(A, &x1, &y1);
    cout << x1 << y1 <<endl;
    PtSetvalue(A, x+1, y+1);
    PtGetvalue(A, &x, &y);
    cout << x1 << y1 <<endl;
    cout << A->x << A->y <<endl;
}

PPOINT PtCreate(int x, int y){
    PPOINT t = new POINT;
    t -> x = x;
    t -> y = y;
    return t;
}

void PtGetvalue(PPOINT point, int *x, int *y){
    if (point){
        if (x) {*x = point->x;};
        if (y) {*y = point->y;};
    }
}

void PtDestroy(PPOINT point){
    if (point){
        delete point;
    }
}

void PtSetvalue(PPOINT point, int x, int y){
    if (point){
        point ->x = x;
        point ->y = y;
    }
}

bool PtComp(PPOINT point1, PPOINT point2){
    if (!point1 || !point2){
        cout << "illegal points" << endl;
        exit(1);
    }
    return (point1 -> x == point2 -> x) && (point1 -> y == point2 -> y);
}

void PtPrint( PPOINT point){
    if(point){
        printf("(%d,%d)", point->x, point->y);
    }
    else{
        cout << "NULL" << endl;
    }
}

char *Pt2String(PPOINT point){
    char buf[BUFSIZ];
    if (point){
        sprintf(buf, "(%d,%d)",point->x, point->y);
        return DupString(buf);
    }
    else {
        return "NULL";
    }
}

char *DupString(const char *s)
{
    unsigned int n = strlen(s);
    int i;
    char *t = new char[n+1];
    for(i=0; i<n; i++){
        t[i] = s[i];
    }
    t[n] = '\0';
    return t;
}