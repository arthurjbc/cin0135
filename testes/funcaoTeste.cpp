#include <iostream>
using namespace std;

int somar(int a, int b){
    return a+b;
}

int main(){
    int p=0;
    int s;
    while (p!=9999){
        cin >> p;
        cin >> s;

        cout << p << '+' << s << '=' << somar(p, s) << endl;
    }
}
