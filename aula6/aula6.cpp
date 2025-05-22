#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    char nome[] = {'j', 'o', 'e', '\0'};
    char *str = nome;
    cout << nome << endl;
    printf("name %s\n", nome);
    cout << &nome<< " " << endl;
    cout << &str<< " " << endl;
}