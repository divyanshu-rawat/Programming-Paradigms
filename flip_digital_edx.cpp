/*

FlipDigital: FlipDigital is a company that manufactures harddisks of various RPM (Revolutions Per Minute) to cater to the needs of 
all individuals. Usually, the life span of their harddisks is more than 10 years, i.e. It should work for atleast 10 years. 
Unfortunately, a serious bug was detected, due to which the RPM increases or decreases every year in the following manner:

(a) multiply the number 323 to sum of the squares of the digits of the RPM,
(b) shift the digits of the RPM to the right by 1 position in a cyclic way, and finally
(c) extract the last two digits of the new number obtained and add to the result obtained in 'a'.

 The final result (c) is the new RPM. 

This issue is that if the RPM increases by a certain limit, then the hard disk crashes, which is also dangerous to the person who is
using it. The maximum limit of the RPM of the hard disk is 8 times of the RPM, i.e. if RPM of harddisk is 1000, then the maximum RPM
can be 1000 * 8 = 8000. This issue needs to be resolved before they release the harddisks to the general public.
We have been given a contract to find out (based on the RPM) which harddisks will last for more than 10 years, and which will not. 

Assume that the RPM is between 3524 and 8524 only, both inclusive.

Task:  You are required to write code that does the following:-

Find out the sum of the squares of the digits of the RPM
Multiply the number obtained in (1) by 323
Do a cyclic right shift of digits of the RPM i.e. if Number is 1234, after cyclic right shift, the number will be 4123.
Thereafter, take the last two digits of the number obtained just now, and add it to the number obtained in point 2.
Thus, obtaining a new RPM value.
Do these steps till the number of years are 10 or the harddisk has reached the maximum RPM.

*/


#include <iostream>
#include <cmath>
using namespace std;

unsigned numDigits(const unsigned n) {
    if (n < 10) return 1;
    return 1 + numDigits(n / 10);
}

unsigned rotated_number(const unsigned a,const unsigned n){
    
    unsigned int e,divide_by,rotated_number,f;
    divide_by = pow(10,n - 1);
    e = a%10;
    f = a/10;
    rotated_number = e * divide_by + f;
    return rotated_number;
    // std::cout << rotated_number << std::endl;
}

unsigned square_sum(unsigned n){
    int sum=0;
    while(n!=0)
    {
        sum = sum + (n%10) * (n%10);
        n = n/10;
    }
    // std::cout << sum << std::endl;
    return sum;
    
}

int main() {
    
    unsigned int a,length,ssd,number_obtained,r_n,_z,new_rpm=0,n=0,max_rpm;
    std::cin >> a;
    max_rpm = a * 8;
    
    while(n < 1 && a < max_rpm){
    // std::cout << a << std::endl;
    number_obtained = square_sum(a) * 323;
    // std::cout << number_obtained << std::endl;
    length = numDigits(a);
    // std::cout << length << std::endl;
    r_n = rotated_number(a,length)%100;
    // std::cout << r_n << std::endl;
    new_rpm = number_obtained + r_n;
    // std::cout << _z << std::endl;
    // new_rpm = new_rpm + _z;
    // std::cout << new_rpm << std::endl;
    a = new_rpm;
    // std::cout << a << std::endl;
    n = n + 1;
}

    std::cout << a << std::endl;

}


