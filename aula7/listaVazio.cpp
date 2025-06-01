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

void append(node *head, int v){
    node* nn = newnode(v);
    node *cursor = head;
    while (cursor -> next){ //enquanto o cursor n achar um valor nulo, ele continua caminhando para a direita
        cursor = cursor->next;
    }
    cursor -> next = nn;
}

int main(){
    node *head = newEmptyList();
    append(head, 2);
    append (head, 3);
}