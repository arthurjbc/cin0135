#include <iostream>
#include <cstdio>
using namespace std;

int partial[] = {1,2,4};

int main(){
int arr[3] = {10, 20, 30};
    for (int i=0; i<=4; i++){
        std::cout << &arr[i]<< " " << endl;
    }
arr[2] = 50;  // Now arr = {10, 20, 50}
std::cout << arr[1]<<endl;  // Prints 20
    for (int i=0; i<=4; i++){
        std::cout << &arr[i]<< " " << endl;
    }
}
// &var = endereço de var