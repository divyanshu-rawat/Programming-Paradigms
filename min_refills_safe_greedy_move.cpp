#include <iostream>
#include <vector>

using std::cin;
using std::cout;


int min_refills(int x[],int n,int L){

	int number_of_refills,last_refill,current_refill = 0;
	
	while(current_refill <= n){

		last_refill = current_refill;

		while(x[current_refill + 1] - x[last_refill] <= L && current_refill <= n)
			current_refill = current_refill + 1;


		if(current_refill == last_refill)
			return 0;

		if(current_refill <= n)
			number_of_refills = number_of_refills + 1;
	}	

	return last_refill;

}


int main(){

	// max_distance_without_refill (L)
	// number_of_gas_station (n)
	// int arr = [];

	// alog_written
}