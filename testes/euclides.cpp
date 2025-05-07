#include <iostream>
using namespace std;

int euclides(int a, int b, int i, int p, int s){
    if (b==0){
        cout << "MDC(" << p << ',' << s << ')' << "=";
        return a;
    }
    else{
        if (a>b){
            int y=a;
            a=b;
            b=y;
        }
        cout << b << '=' << a << '*' << b/a << '+' << b%a << endl;
        return euclides(a, b%a, i+=1, p, s);
    }
}

int main(){
    int p;
    int s;
    cin >> p;
    cin >> s;
    cout << euclides(p, s, 0, p, s) << endl;
}