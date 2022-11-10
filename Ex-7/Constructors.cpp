#include <iostream>
using namespace std;


class Sample{
 	private:
		int x;
		double y;
	public:
	       	Sample(){
		this->x=0;
		this->y =0;
		cout << x<<" "<<y<< endl;
		}
		Sample(int i){
		this->x=i;
		this->y=0;
		cout << x<<" "<< y << endl;
		}
		Sample(int i,int j){
		this->x=i;
		this->y=j;
		cout << x<< " "<<y<< endl;
		}
 
 };

	int main(){
		Sample s;
		Sample t(5);
		Sample y(3,4);
	}
