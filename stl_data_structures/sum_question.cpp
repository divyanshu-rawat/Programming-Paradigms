

#include <iostream>
#include <vector>
 
using namespace std;

int main(){

	int array[] = {2, 11, 5, 1, 4, 7};
	int n = sizeof(array)/sizeof(int);
	int sum = 0;

	vector <int> vector_1(array,array+n);
	vector <int> :: iterator i;
	vector <int> :: iterator it;
	vector <int> :: iterator j;

	for(i=vector_1.begin();i<vector_1.end();i++){
			sum = sum + *i;
	}

	int sum_element = 0;
	for(it=vector_1.begin();it<vector_1.end();it++){

		

		for(j=it + 1;j < vector_1.end();j++){

			sum_element = *it + *j;

			if(sum_element == sum/2){
				cout << "Elements are : \n" << *it;
				cout << "\t" << *j;
				cout << "\n";
				return 1;
			}

		}

	}



}