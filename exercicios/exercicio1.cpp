#include <iostream>
#include <cstdlib>
using namespace std;
using uint = unsigned int;
int main (){
    uint tamanho;
    cin >> tamanho;
    uint array[tamanho];
    for (int i=0; i<tamanho; i++){
        array[i]=rand()%1001;
        cout << array[i] << ' ';
    }
    uint arrayReverse[tamanho];
    cout << endl;
    for (int i=0; i< tamanho; i++){
        arrayReverse[i]=array[tamanho-i-1];
        cout << arrayReverse[i] << ' ';
    }
    cout << endl;
}