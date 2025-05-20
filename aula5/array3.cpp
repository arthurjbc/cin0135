#include <iostream>
#include <cstdio>
using namespace std;

int partial[] = {1,2,4};
int *p = partial;

int main(){
int arr[3] = {10, 20, 30};
    for (int i=0; i<=4; i++){
        cout << &partial[i]<< " " << endl;
    }
    for (int i=0; i<=4; i++){
        cout << &p[i]<< " " << endl;
    }
}
// &var = endereço de var