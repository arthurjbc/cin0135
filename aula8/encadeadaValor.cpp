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

node* newEmptyList(){
    return newnode(-1);
}

void appendNoFim(node *head, int v){
    node* nn = newnode(v);
    node *cursor = head;
    while (cursor -> next){ //enquanto o cursor n achar um valor nulo, ele continua caminhando para a direita
        cursor = cursor->next;
    }
    cursor -> next = nn;
}

int acessoVal(node *head, int pos){ // Com for talvez tenha problema com bug
    node *cursor = head;
    int valor=0;
    for (int i=0; i<pos+1;i++){
        cursor = cursor -> next;
        valor = (*cursor).val;
    }
    return valor;
}

node* acessoEndereçoProfessor(node *head, int pos){ 
    node *cursor = head;
    int valor=0;
    while (valor<pos){
        cursor = cursor -> next;
        valor++;
    }
    return cursor;
}

node *busca(node *head, int valor){
    node *cursor = head;
    while (cursor -> next != nullptr && cursor -> next -> val != valor){
        cursor = cursor ->next;
    }
    return cursor->next;
}

int main(){
    node *head = newEmptyList();
    for (int j=10; j<60; j+=10){
        appendNoFim(head, j);
    }
    /*
    int index;
    cin >> index;
    node *no = acessoEndereçoProfessor(head, index);
    cout << "lista[" << index << "] = " << acessoVal(head, index) << endl;
    cout << "listPag[" << index << "] = " << no->next->val << endl;
    */
    int valor = 40;
    node *no = busca(head, valor);
    cout << "achou o nenem" << endl;
}