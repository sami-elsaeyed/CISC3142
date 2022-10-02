#include <iostream>
#include <typeinfo>
#include <vector>

using std::cout;
using std::cin;
using std::cin;
using std::string;
using std::vector;
using std::endl;
int main(){
	string word;
	vector<string> words;
	cout << "Enter words to vector Type '-1' to terminate";
	while (cin >>word){
		if (word =="-1"){
			break;
		}
		words.push_back(word);
	}
		for(int i =0;i<words.size();i++){
			for(int j=0;j<words[i].length();j++){
				putchar(toupper(words[i][j]));
			}
			if((i+1)%8==0){
				cout << endl;
			}
			else{
			cout <<" ";
			}
		}
	}

