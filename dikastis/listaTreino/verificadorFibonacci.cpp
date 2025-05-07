#include <iostream>
using namespace std;

int fibonacci(int index){
    if (index==0 || index == 1){
        return 1;
    }
    else{
        return fibonacci(index-1)+fibonacci(index-2);
    }
}

bool verificador(int numero, int i){
    if (fibonacci(i)==numero){
        return true;
    }
    else if(fibonacci(i)>numero){
        return false;
    }
    else {
        return verificador(numero, i+=1);}
}

int main (){
    int entrada;
    while (entrada!=0){
        if (entrada!=0){
            cin >> entrada;
            cout << bool(verificador(entrada, 0)) << endl;
        }
    }
}
