#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    string h="abcdefghijklmnopqrstuvwxyz";

    cout << h << endl;
    
    cout << h.substr(0, 4) << endl;
    
    char a[4]={'a', 'b', 'c', '\0'};
    char b[3]={'a', 'b', '\0'};
    bool c=(a==b);
    cout << &a << endl;
    cout << &b << endl;
    cout << &a[3] << endl;
    cout << c << endl;
}

//endereço de um array é baseado em quantidade de elementos
//0x61fdac = a[4]={'a', 'b', 'c', '\0'};
//0x61fdac = 'a'; 0x61fdad = 'b'; 0x61fdae = 'c'; 0x61fdaf = '\0'
//0x61fda9 = b[3]={'a', 'b', '\0'};
//0x61fda9 = 'a'; 0x61fdaa = 'b'; 0x61fdab = '\0'