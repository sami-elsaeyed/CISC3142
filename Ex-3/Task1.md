**Exercise 2.1: What are the differences between int, long, long long,
and short? Between an unsigned and a signed type? Between a float and
a double**
	a)Difference between these types is the minimum size. Short and int are 16 bits long is 32 buts and long long is 64 bits.
	b)A signed type represents negative or positive numbers  while an unsigned type represents only values greater than or equal to zero.
	c)Float has 6  significant digits while doubles have 10 significant digits. 

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
(a) int double = 3.14;
	Invalid, double is reserved keyword.
(b) int _;
	Valid.
(c) int catch-22;
	Invalid, catch is areserved keyword.
(d) int 1_or_2 = 1;
	Invalid, started with a digit not a letter or underscore.
(e) double Double = 3.14;
	Valid.

**Exercise 2.13: What is the value of j in the following program?**
	J is 100

**Exercise 2.14: Is the following program legal? If so, what values are printed?**
	Program is legal and prints: 100 45

