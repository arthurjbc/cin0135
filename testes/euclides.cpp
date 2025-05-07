#include <iostream>
using namespace std;

int euclides(int a, int b, int i=0){
    if (b==0){
        return a;
    }
    else{
        if (i>0){
            cout << b << '=' << a << '*' << a/b << '+' << a%b << endl;
            return euclides(b, a%b);
    }}
}

int main(){
    int p;
    int s;
    string nome = "a";
    cin >> p;
    cin >> s;
    cout << euclides(p, s) << nome << endl;
    return 0;
}