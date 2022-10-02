#include <iostream>
using std::cout;
using std::endl;

int main(){
	int integer;
	float float_decimal;
	double double_decimal;
	char character;
	bool boolean;
	wchar_t wide_character;
	long long_integer;
	long double long_double;

	cout<< "Size of built in tyoes in bytes."<<
	       	"Integer: "<< sizeof(integer)<<endl<<
		"Long Integer: "<<sizeof(long_integer)<<endl<<
		"Float: "<<sizeof(float_decimal)<<endl<<
		"Double: "<<sizeof(double_decimal)<<endl<<
		"Long Double: "<<sizeof(long_double)<<endl<<
		"Character: "<<sizeof(character)<<endl<<
		"Wide Character: "<<sizeof(wide_character)<<endl<<
		"Boolean: "<<sizeof(boolean);

}
