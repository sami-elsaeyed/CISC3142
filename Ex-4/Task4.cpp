#include <iostream>
using std::cout;
using std::cin;


int main(){
	double price;
	double rate;
	int years;
	cout << "Enter price of product: ";
	cin >>  price;
	cout<< "Enter rate of inflation as a percentage ";	
	cin >> rate;
	cout << "Enter how many years int othe future to predict price: ";
	cin >> years;
	double inflation = rate/100;
	for(int i =0; i<years;i++){
		price=price+(price*inflation);
	}
	cout << price;
	
}
