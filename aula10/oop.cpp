#include <iostream>
#include <string>
#include <cassert>

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

void inserir(node* cursor, int valor){
    assert (cursor != nullptr);
    node *novoNo=newnode(valor);
    (*novoNo).next = cursor->next;
    cursor->next = novoNo;
}

void inserirPos(node *head, int pos, int valor){
    inserir(acessoEndereçoProfessor(head, pos), valor);
}

void remover(node *head, node* removivel){
    assert(removivel != nullptr);
    node *anterior = acessoEndereçoProfessor(head, removivel->val);
    anterior->next = removivel->next;   
    delete removivel; 
}

void listDelete(node* cur){
    assert(cur->next != nullptr);
    node *Morre = cur->next;
    cur->next = Morre->next;
    delete Morre;
}

//void listDeleteValor (node *head, int pos){
//    listDelete(acessoEndereçoProfessor(head, pos));
//}

//aula08
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//aula10

class listaEncadeada
{

private:
    node *head;         //private pq não há sentido em tornar publico o endereço dos nós para o usuario
    size_t tamanho;

public:
    listaEncadeada();
    size_t size(){
        return tamanho;
    }  //expõe o tamanho da lista sem tornar a variavel tamanho vuneravel
    void append(int val);
    void insert(size_t pos, int val);
	int remove(int pos);
    int at(size_t pos);

};

listaEncadeada::listaEncadeada(){
    head = newnode(-1);
    tamanho = 0;
    /*node *cur = head;
    while (cur!=nullptr){
        node *next=cur->next;
        delete cur;
        cur = next;
    }*/
}

void listaEncadeada::append(int val){
    node* nn = newnode(val);
    node *cursor = head;
    while (cursor -> next){ //enquanto o cursor n achar um valor nulo, ele continua caminhando para a direita
        cursor = cursor->next;
    }
    cursor -> next = nn;
}
//
//void listaEncadeada::insert(size_t pos, int valor){
//    inserir(acessoEndereçoProfessor(head, pos), valor);
//}
//
int main(){
    listaEncadeada list;
    for (int i=0; i>5; i++){
        list.append(4);
        cout << list.size() << endl;
    }
}