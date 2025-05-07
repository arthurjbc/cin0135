#include <iostream>
using namespace std;
string txt="fsdkjbfksdf";

int main (){
    for (int a=0; a<5; a++){
        string ent;
        cin >> ent;
        string cheio = txt.append(ent);
        cout << cheio << endl;
    }
}