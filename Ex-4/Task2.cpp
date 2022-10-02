#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
	vector<int> numline ={1,2,3,4,5,6,7,8,9,10};
	for(int i =0; i<numline.size();i++){
		numline[i]=numline[i]*2;
		cout << numline[i]<<endl;
	}
}
