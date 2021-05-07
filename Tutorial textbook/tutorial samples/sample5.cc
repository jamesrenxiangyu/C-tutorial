#include <iostream>

using namespace std;
void func(int x);

int main(){
    int i;
    for (i=1; i<4; i++){
        cout << "func " << i << " returns ";
        func(i);
        cout << endl;
    }
    return 0;
}

void func(int x){
    static int idx = 0;
    cout << "x = " << idx << endl;
    ++idx;
}