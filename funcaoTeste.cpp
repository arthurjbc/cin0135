#include <stdio.h>

int somar(int a, int b){
    return a+b;
}

int main(){
    for (int i=0; i<10; i++){
        printf("%d + %d = %d\n", i, i+1, somar(i, i+1));
    }
}