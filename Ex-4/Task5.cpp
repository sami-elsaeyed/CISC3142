#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(){
	double sweet_ratio= 0.001;
	double mouse_ratio= 0.14285714285;
	cout << "Enter anything to begin calculation, enter -1 to terminate";
	string str;
	cin >> str;
	while(str != "-1"){
	        double	weight, total_soda, total_sweetner;
		cout << "Enter your goal_weight: ";
		cin >> weight;
		weight=weight*454;
		total_sweetner=weight*mouse_ratio;
		total_soda=total_sweetner*sweet_ratio;
		cout << "Most amount of soda to drink safely: "<< total_soda<< endl;
		cout << "Enter anything to begin calculation, enter -1 to terminate";
		cin >> str;
	}

}
