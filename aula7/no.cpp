//DARK MODERN
/* 
estrutura dinamica, linear e homogenea
nó é feito de maneira com que haja 2 valores em cada
um nó é ligado ao outro, tendo 12 bytes de memoria, 4 para o valor alocado ao nó e 8 para o endereço do prox nó
formulando assim, uma lista

Ex.:
nó tem val (valor do nó na lista) e next (endereço do proximo nó)

nó1 (val=4, &next=@108)  -->  nó2(val=4, &next=@109) --> nó3(val=5, &next=0)
nó1 = head, nó3=tail

*/

#include <iostream>
#include <string>
using namespace std;
using uint = unsigned int;

struct node
{
    int val;
    node* next;
    //k
}; //fora da pilha


node* newnode(int v){
    node* ret = new node;   //ret --> ponteiro para nó
    (*ret).val= v;
    ret -> next=nullptr;
    return ret;
} // fora da pilha


int main(){
    node mynodeHead;
    mynodeHead.val=1;
    mynodeHead.next = nullptr; // nullptr = none de python
    
    node *node2 = newnode(2);
    
    cout << node2 << endl;

}