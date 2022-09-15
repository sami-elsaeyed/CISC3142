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

