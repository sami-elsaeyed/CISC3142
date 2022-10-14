#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

double mean(vector<int> x){
	double sum=0;
	for(int i=0;i<x.size();i++){
		sum+=x[i];
	}
	double mean= sum/x.size();
	return mean;
}
int main(){
	std::ifstream infile("./Ex-5/Coordinates.txt");
	int x; int y;
	vector<int> x_coord={};
	vector<int> y_coord={};
	while(infile >> x>>y){//input the file into two arrays
		x_coord.push_back(x);
		y_coord.push_back(y);
	}
	double mean_x=mean(x_coord);//mean function calculates mean
	double mean_y=mean(y_coord);
	double numerator=0;double denominator=0;
	for(int i=0;i<x_coord.size();i++){
		numerator+=(x_coord[i]-mean_x)*(y_coord[i]-mean_y);//sum x errors from the mean times mean y errors
		denominator+=(x_coord[i]-mean_x)*(x_coord[i]-mean_x);//sum x error from the mean squared
	}
	double slope =numerator/denominator;
	double product=slope*mean_x;
	double intercept = mean_y-product;
	cout << intercept << "  "<< slope;

}
