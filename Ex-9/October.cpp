#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <vector>
using namespace std;

double average(vector<int> data, ofstream& outfile){
	double sum=0;
	for(int x:data){
		sum+=x;
	}
	return (sum/data.size());
}

void moving_average(vector<int> data, ofstream& outfile){
	for (int i=0; i<data.size()-2;i++){
		double temp=data[i]+data[i+1]+data[i+2];
		temp/=3;
		outfile <<temp<<endl;
	} 
	return;
}


void weighted_moving_average(vector<int> data, ofstream& outfile){
	for (int i=0; i<data.size()-2;i++){
		double temp=data[i]+(2*data[i+1])+(3*data[i+2]);
		temp/=6;
		outfile <<temp<<endl;
	}
}

int main(){
	ifstream infile;
	ofstream outfile("output.txt");
	infile.open("weather.txt");
	if(infile.fail()){
		outfile<< "Error with file.";
		exit(1);
	}
	infile.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	string x,y;
	vector<int> temperature;
	while(getline(infile,x,',')){
		//getline(infile,m,',');
		getline(infile,y,'\n');
		int t;
		t=stoi(y);
		temperature.push_back(t);
	}
	
	outfile <<"The average temperature is: "<<average(temperature, outfile)<<endl;
	outfile<< "The moving averages from months March to September are:"<<endl;
	moving_average(temperature,outfile);
	outfile<< "The weighted moving averages from March to September are: "<<endl;
	weighted_moving_average(temperature,outfile);

}

