**Exercise 2.1: What are the differences between int, long, long long,
and short? Between an unsigned and a signed type? Between a float and
a double**
- Difference between these types is the minimum size. Short and int are 16 bits long is 32 buts and long long is 64 bits.	
- A signed type represents negative or positive numbers  while an unsigned type represents only values greater than or equal to zero.
- Float has 6  significant digits while doubles have 10 significant digits. 

**Exercise 2.2: To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.**
	I would set the principal as an integer since houses prices dont usually differ by amounts less than dollar. Float is good enough for the rate since it is 	   typically two numbers after the decimal point and the payment calculation should be a double to be safe incase we exceed the float precision.

**Exercise 2.3: What output will the following code produce?**
```
32
4294967264
32
-32
0
0
```
All std::cout statements output as expected expect the second one is out-of-range value and is transformed to an unsigned value. 

**Exercise 2.10: What are the initial values, if any, of each of the following variables?**
Global and local strings are intially the empty string. Global integer is initially zero and the local intege is undefined.

**Exercise 2.12: Which, if any, of the following names are invalid?**
-  int double = 3.14;
	Invalid, double is reserved keyword.
- int _;
	Valid.
- int catch-22;
	Invalid, catch is areserved keyword.
- int 1_or_2 = 1;
	Invalid, started with a digit not a letter or underscore.
- double Double = 3.14;
	Valid.

**Exercise 2.13: What is the value of j in the following program?**
	J is 100

**Exercise 2.14: Is the following program legal? If so, what values are printed?**
	Program is legal and prints: 100 45

**Exercise 2.17: What does the following code print?**
Code prints out ``` 10 10 ```. 'ri' references i so when it is set to 10 'i' is 10 as well.

**Exercise 2.27: Which of the following initializations are legal? Explain why.**
- (a) ```int i = -1, &r = 0;```
	Invalid, initilized to a value.
- (b) ```int *const p2 = &i2;```
	Valid if i2 is declared in this scope. Else invalid
- (c) ```const int i = -1, &r = 0;```
- 	Valid.
- (d) ```const int *const p3 = &i2;```
	Valid if i2 is declared before hand.Else invalid
- (e)``` const int *p1 = &i2;```
	Valid if i2 is declared before hand. Else invalid.
- (f) ```const int &const r2;```
	Invalid, reference not initialized.
- (g) ```const int i2 = i, &r = i;```
	Valid if is declared before hande. Else invalid.
	
