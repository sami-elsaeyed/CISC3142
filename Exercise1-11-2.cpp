 #include <iostream>
     int main(){
	std::cout << "Running 1.11 with a while loop"<< "\n";
     	int limit1;
	int limit2;
	std::cout<< "Enter an integer";
	std::cin >> limit1;
	std::cout<< "Enter an integer";
        std::cin >> limit2;
	int lowerlimit;
	int upperlimit;
	if (limit1<limit2){
		lowerlimit=limit1;
		upperlimit=limit2;
	
	}
	else{
		lowerlimit=limit2;
		upperlimit=limit1;
	}
	int x=lowerlimit;
	int tot=upperlimit-lowerlimit+1;
	while (tot>0){
		
		std::cout << x << "\n";
		x=x+1;
		tot=tot-1;
       	}
     }
