#include "list.cpp"

class Stack {
public:
	Stack() = default;
	~Stack() = default;
	int top();
	void push(int value);
	int pop();
private:
	LinkedList list;
};

int Stack::top(){
	return list.at(0);
}

void Stack::push(int value){
	list.insert(0, value);
}

int Stack::pop(){
	return list.remove(0);
}

int main(){
	Stack pilha;

}