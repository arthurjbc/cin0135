#include <stdio.h>

int primos(int number){
    for (int j=2; j<number; j++){
        if (number%j==0){
            return 0;
        }
    }
    return number;
}

int isPrime(int num, int j){
    if (j>=num){
        return num;
    } else if (num%j==0) {
        return 0;
    } else {
        return isPrime(num, j+=1);
    }
}
/*
int testePrimo(int num, int numTeste){
    if (num==primos(num)){
        return 1;
    } else if (num<primos(num)){
        return 0;
    } else {
        return testePrimo(num, numTeste+=1);
    }
}
*///pensei errado

int main(){
    int numero;
    while (numero!=9999){
        scanf("%d", &numero);
        if (primos(numero)==numero){
            printf("É PRIMO\n");
        } else {printf("NÃO É PRIMO\n");}
    }
}