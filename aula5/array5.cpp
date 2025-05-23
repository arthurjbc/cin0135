#include <iostream>
#include <cstdio>
using namespace std;

int estatico(){
int arr[3] = {10, 20, 30};
    for (int i=0; i<=4; i++){
        cout << sizeof(arr)<< " " << endl;
    }
    return 0;
}

int dinamico(){
unsigned int j;
cin >> j;
int arr[j] = {};
    for (int i=0; i<=4; i++){
        cout << sizeof(arr)<< " " << endl;
    }
    return 0;
}

int main(){
    estatico();
    dinamico();
}
// &var = endereço de var
// void = função sem retorno