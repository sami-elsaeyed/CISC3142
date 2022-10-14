#include <iostream>
using namespace std;
int main(){
	cout << "Enter any number to sum its digits, enter -1 to terminate:  ";
	int x;int sum;int rem;
	cin >> x;
	while(x!=-1){
		sum=0;//sum is an accumalator. set to zero for every user entry
		while(x!=0){
			rem=x%10;//find the ones digit
			sum+=rem;//add that digit to the accumalator
			x=x/10;//dividing by ten makes the next digit be in the ones place to be added in the next pass
		}//when only one digit is left the division by ten returns zero. End loop.
	cout << "Sum of the digits is: "<< sum <<endl<<"Enter any number to sum its digits, enter -1 to terminate: ";  
	cin >> x;
	}

}
