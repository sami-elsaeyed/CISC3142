#include <iostream>
using namespace std;


class Rectangle {
 	public:
		double length=0;
		double width=0;
 		void setlength(double e){
			length = e;

		}
		void setwidth(double d){
			width=d;
		}
		float perimeter(){
			return (2*length)+(2*width);
		}
		float area(){
			return length*width;
		}
		void show(){
			cout << "The length of the Rectangle is "
			     << length<<endl<<"The width of the Rectangle is "
			     << width<<endl;
		}
		int sameArea(Rectangle rec){
			double i=this->area();
			if (rec.area()==i){
				return 1;
			}
			else 
				return 0;
		}
};


int main(){
	Rectangle rec1;
	rec1.setlength(5);
	rec1.setwidth(2.5);
	cout << " Rectangle 1 has an area of "<< rec1.area()<<" and a perimeter of "<< rec1.perimeter()<< endl;
	rec1.show();
	Rectangle rec2;
	rec2.setlength(5);
	rec2.setwidth(18.9);
	cout << " Rectangle 2 has an area of "<< rec2.area()<< " and a perimeter of "<< rec2.perimeter()<< endl;
	rec2.show();
	if (rec1.sameArea(rec2)){
		cout << "Both rectangles have the same area";}
	else {
		cout << "The rectangles do not have the same area";
	} 
	rec1.setlength(15);
	rec1.setwidth(6.3);
	cout<< "New area for rectangle one is "<< rec1.area() <<" and its perimeter is"<< rec1.perimeter()<< endl;
	rec1.show();
	if(rec1.sameArea(rec2)){
		cout << " Both rectangles have the same area";}
	else{
		cout << "The areas of the rectangles are not the same";
	}
	

}

