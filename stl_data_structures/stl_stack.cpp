

#include <iostream>
#include <stack>

using namespace std;

void show_stack(stack <int> old_stack){

	stack <int> new_stack = old_stack;

	while(!new_stack.empty()){

		cout << '\t' << new_stack.top();
		new_stack.pop();
	}
	cout << '\n';
}


int main(){

	stack <int> gquiz;
    gquiz.push(10);
    gquiz.push(30);
    gquiz.push(20);
    gquiz.push(5);
    gquiz.push(1);
 
    cout << "The stack gquiz is : ";
    show_stack(gquiz);
}
