#include <iostream>
#include <cstdlib>
using namespace std;

int euclides(int a, int b){
    if (b==0){
        return a;
    }
    else{
        cout << b << '=' << a << '*' << abs(a/b) << '+' << a%b << endl;
        return euclides(b, a%b);
    }
}

int main(){
    int p;
    int s;
    cin >> p;
    cin >> s;
    cout<<euclides(p, s)<< endl;
    return 0;
}