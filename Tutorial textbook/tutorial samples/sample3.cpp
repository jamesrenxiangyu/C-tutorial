#include <iostream>
#include <cmath>

using namespace std;

int GetInteger();
int isPrime(int x);

int main(){
    int a,sum;
    a = GetInteger();
    sum = isPrime(a);
    cout << sum;
    return 0;
}

int GetInteger(){
    int t;
    cout << "input an integer" << endl;
    cin >> t;
    return t;
}

int isPrime(int t){
    if (t==1 || t==2){
        cout << t << " is a prime" << endl;
        return t;
    }
    int a = sqrt(t);
    for (int i=2; i<a ; i++){
        if (t%i == 0){
            cout << t << " is not a prime" << endl;
            return t;
        }
    }
    cout << t << " is a prime" << endl;
    return t;
}