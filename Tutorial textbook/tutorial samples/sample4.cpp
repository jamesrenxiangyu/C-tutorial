#include <iostream>

using namespace std;
typedef enum {X, Y, Z}HAN;
unsigned int GetInteger();
unsigned int GetFb(unsigned int x);
void MoveHanoi(unsigned int n, HAN from, HAN to, HAN temp);
char CovertHanoiToChar(HAN x);
void MovePlate(unsigned int n, HAN from, HAN to);

int main(){
    
    unsigned int n = GetInteger();  
    MoveHanoi(n, X, Y, Z);
    return 0;
    // unsigned int result = GetFb(n);
    // cout << "n 'th FB number is: " << result;

}

unsigned int GetInteger(){
    int t;
    cout << "input an integer" << endl;
    cin >> t;
    return t;
}

unsigned int GetFb(unsigned int x){
    unsigned int result;
    if (x==1 || x==2){
        return 1;
    }
    else{
        result = GetFb(x-1) + GetFb(x-2);
        return result;
    }
}

char CovertHanoiToChar(HAN x){
    switch (x){
        case X: return 'X';
        case Y: return 'Y';
        case Z: return 'Z';
        default : return '\0';
    }
}

void MovePlate(unsigned int n, HAN from, HAN to){
    char fc, tc;
    fc = CovertHanoiToChar(from);
    tc = CovertHanoiToChar(to);
    cout << n << ":" << fc << "-->" << tc << endl;
}

void MoveHanoi(unsigned int n, HAN from, HAN tmp, HAN to){
    if (n == 1){
        MovePlate(n, from, to);
    }
    else{
        MoveHanoi(n-1, from, to, tmp);
        MovePlate(n,from, to);
        MoveHanoi(n-1, tmp, from, to); 
    }
    
}