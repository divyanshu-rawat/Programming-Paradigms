
#include <iostream>
#include <array>
#include <tuple>


using namespace std;

int main(){

	array<int,6> ar = {1,2,3,4,5,6};
	cout << "The array elemets are (using at()) : ";
    for ( int i=0; i<6; i++)
    cout << ar.at(i) << " ";
    cout << endl;

    return 0;

}