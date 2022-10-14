#include <iostream>
#include <vector>
using namespace std;

int main(){
	//all prime numbers can be written in the form 6n-1 or 6n+1 where n is a natural number.
	//all non prime numbers have prime factors
	//(17x6)+1=103; we only have to check n between 1 and 16
	vector<int> prime={2,3};
	int x;int y;
	for(int i=1;i<17;i++){
		x=(6*i)-1;
		y=(6*i)+1;
		for(int j=0;j<prime.size();j++){
			if(x%prime[j]==0){//if any of the prime are factors it is not prime.
				break;
			}
			if(j==prime.size()-1){//if all prime smaller than x are not factors x is prime
				prime.push_back(x);
				cout << x<<endl;
			}
		}
		for(int j=0;j<prime.size();j++){
			if(y%prime[j]==0){
				break;
			}
			if(j==prime.size()-1){
				prime.push_back(y);
				cout << y<< endl;
			}
		}
	}

}
