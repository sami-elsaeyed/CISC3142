CC = g++

Exercise1-11-2: Exercise1-11-2.cpp
	g++ Exercise1-11-2.cpp -o Exercise1-11-2
	g++ Exercise1-5.cpp -o Exercise1-5
	g++ Exercise1-11.cpp -o Exercise1-11
Exercise1-11: Exercise1-11.cpp
	g++ Exercise1-11.cpp -o Exercise1-11

Exercise1-5: Exercise1-5.cpp
	g++ Exercise1-5.cpp -o Exercise1-5

lab2:
	g++ Exercise1-5.cpp -o Exercise1-5
	g++ Exercise1-11.cpp -o Exercise1-11
	g++ Exercise1-11-2.cpp -o Exercise1-11-2
	./Exercise1-5
	./Exercise1-11
	./Exercise1-11-2
lab4:
	g++ Ex-4/Task1.cpp -o Task1
	g++ Ex-4/Task2.cpp -o Task2
	g++ Ex-4/Task3.cpp -o Task3
	g++ Ex-4/Task4.cpp -o Task4
	g++ Ex-4/Task5.cpp -o Task5
	./Task1
	./Task2
	./Task3
	./Task4
	./Task5
lab5:
	g++ Ex-5/Sum_of_Digits.cpp -o Sum_of_Digits
	g++ Ex-5/Prime_Numbers.cpp -o Prime_Numbers
	g++ Ex-5/Linear_Regression.cpp -o Linear_Regression
	./Sum_of_Digits
	./Prime_Numbers
	./Linear_Regression
lab7:
	g++ Ex-7/Rectangle.cpp -o Rectangle
	g++ Ex-7/Constructors.cpp -o Constructors 
	./Rectangle
	./Constructors

