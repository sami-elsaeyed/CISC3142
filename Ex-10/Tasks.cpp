
#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <vector>
#include <numeric>
#include <functional>
#include <algorithm>

using namespace std;

int main(){
	ifstream infile;
	ofstream out;
	out.open("output.txt");
	infile.open("films.txt");
	if(infile.fail()){
		cout << "Error with file";
		exit(1);
	}
	infile.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	infile.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	
	vector <int> column1, column2,column8;
	vector<string> column3,column4,column5,column6,column7,column10;
	int sum=0;
	double average;
	while(infile.good()){

			string year,length,title,subject,actor,actress,director,popularity,awards,image;
			getline(infile, year,';');
			
			if (!year.empty()){
				column1.push_back(stoi(year));
	}
			else{column1.push_back(0); }

			getline(infile, length,';');
		
			if(!length.empty()){
			column2.push_back(stoi(length));
		}
			else{column2.push_back(0);}
			
			getline(infile, title,';');
			column3.push_back(title);
			getline(infile, subject,';');
			column4.push_back(subject);
			getline(infile, actor,';');
			column5.push_back(actor);
			getline(infile, actress,';');
			column6.push_back(actress);
			getline(infile, director,';');
			column7.push_back(director);
			getline(infile,popularity,';');
			if(!popularity.empty()){
			column8.push_back(-1*stoi(popularity));}
			else{column8.push_back(0);}
			getline(infile, awards,';');
			getline(infile, image,'\n');
			column10.push_back(image);
		}

	sort(column8.begin(), column8.end());
	vector<int> action, comedy;
	out<<"The popularity ratings in descending order: "<<endl;
	for(int i=0;i<=column3.size();i++){
		out <<-1*column8[i]<<" "<<endl;
		if(column4[i]=="Action"){
			action.push_back(column1[i]);
		}
		if(column4[i]=="Comedy"){	
			comedy.push_back(column1[i]);
		}
	}
	sort(action.begin(),action.end());
	sort(comedy.begin(),comedy.end());
	if(equal(comedy.begin(),comedy.end(), action.begin())){
		out<< "The two lists Action and Comedy are equal"<<endl;
	}
	else{
		out<<"The two lists Action and Comedy are not equal"<<endl;
	}
	
	int x= accumulate(column1.begin(),column1.end(),0);
	out<<"The total runtime of all movies is : " <<x<<endl;
	vector<string>::iterator it=find(column7.begin(),column7.end(),"Scorsese, Martin");
	out<<"Finding the first instance of: "<< *it<<endl;
	
}
	
