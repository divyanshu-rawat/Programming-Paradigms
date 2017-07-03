
#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;


int NaiveGCD(int a,int b){

	int best = -1;

	for(int i = 1;i < a + b ;i++)
	{
		if(a%i == 0 && b%i == 0){
			best = i;
		}
	}

	return best;

}


int EuclidGCD(int a,int b){

	if(b == 0 )
		return a;
	else
		EuclidGCD(b,a%b);
}

int main(){

//  Naive GCD considering a < b if b > a then write swap() Hope you got it !
	int a = 3918848;
	int b = 1653264;
	int best;
	
	// best = NaiveGCD(a,b);

	best = EuclidGCD(a,b);
	cout << best << "\n";
}