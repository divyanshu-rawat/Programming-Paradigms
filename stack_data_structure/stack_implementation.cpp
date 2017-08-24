

#include <iostream>
using namespace std;
int top = -1;

void push(int stack[],int n, int x){

	if(top == n - 1){
		 cout << "Stack is full.Overflow condition!\n" ;
	}
	else{
	
		top = top + 1;
		stack[top] = x;

	}

}


bool isEmpty ( )
{
    if ( top == -1 ) 
    return true ; 
    else
    return false;
}


void pop(){

	if(isEmpty()){
		cout << "Stack underflow condition!\n" ;
	}
	else{
			top = top - 1;
	}
}

int size ( )
{
    return top + 1;
}

int topElement (int stack[] )
{
    return stack[ top ];
}

int main(){


	int stack[3];

	push(stack,3,12);

	cout << "Current size of stack is " << size ( ) << endl ;

	push(stack , 3 , 14);
	push (stack , 3 , 32) ;

	cout << "Current size of stack is " << size( ) << endl ;

	push(stack , 3 , 36) ;

	cout << "The current top element in stack is " << topElement(stack) << endl;

	  for(int i = 0 ; i < 3;i++ )
            pop( );
        cout << "Current size of stack is " << size( ) << endl ;
        pop ( );  

}