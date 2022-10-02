**3.17:
Read a sequence of words from cin and store the values a vector. After you’ve read all the words,
process the vector and change each word to uppercase. Print the transformed elements, eight words to a
line.**
pseudocode:
```
#include <iostream>
int main(){
initialize vector
while(input is not -1){
 input string 
 add to vector
}
for (size of vector) {
for (less than 8){
capitalize
output string}
newline
}

}
```
**Variables: 1.vector 
	   2.string 
	   3.int counters**
===================================================================================================
**3.23:
Write a program to create a vector with ten int elements. Using an iterator, assign each element a
value that is twice its current value. Test your program by printing the vector.**
pseudocode:
```	
#include <iostream>
int main(){
initialize vector from 1-10
for (size of vector){
double each element and print
}

}
```
**Variables: vector**
===================================================================================================
**4.28:
Write a program to print the size of each of the built-in types/
pseudocode:
Variables:**
===================================================================================================
**Inflation
It is difficult to make a budget that spans several years because prices are not stable. If your company needs 200 pencils per year, you cannot simply use this#year’s price as the cost of pencils 2 years from now. Because of inflation the cost is likely to be higher than it is today. Write a program to gauge the expected cost of an item in a specified number of years. The program asks for the cost of the item, the number of years from now that the item will be purchased, and the rate of inflation. The program then outputs the estimated cost of the item after the specified period. Have the user enter the inflation rate as a percentage, like 5.6 
(percent). Your program should then convert the percent to a fraction, like 0.056, and should use a loop to estimate the price adjusted for inflation.**
pseudocode:
```	
#include <iostream>
int main(){
prompt input of price
prompt input of inflation as a percentage
prompt input of years in the future to predict price as integer 
inflation = inflation/100
for (number of years){
price = price+(price*inflation)
}
print price
}
```
**Variables:1. Double price /inflation
	  2. integer years**
==================================================================================================

**Nutrition calculator 
A government research lab has concluded that an artificial sweetener commonly used in diet soda pop will cause death in laboratory mice. A friend of yours is desperate to lose weight but cannot give up soda pop. Your friend wants to know how much diet soda pop it is possible to drink without dying as a result. Write a program to supply the answer. The input to the program is the amount of artificial sweetener needed to kill a mouse (use 5 grams), the mass of the mouse (use 35 grams), and the weight of the dieter (use 45400 grams for a 100 pound person). Assume that the lethal dose for a mouse is proportional to the lethal dose for the human. A single can of soda pop has a mass of 350 grams. To ensure the safety of your friend, be sure the program requests the weight at which the dieter will stop dieting, rather than the dieter’s current weight. Assume that diet soda contains 1/10th of 1% artificial sweetener. Use a variable declaration with the modifier
const to give a name to this fraction. You may want to express the percent as the double value 0.001. Your program should allow the calculation to be repeated as often as the user wishes.**
pseudocode:
```
#include <iostream>
int main(){
double percentage of sweetner
double ratio of of fatal sweetner to mouse mass
prompt enter anything to begin calculation enter -1 to exit
while (input is not -1) {
prompt to enter goal weight
goal weight=goal wieght * 454
total sweetner =goalweight * ratio
total soda=total sweetner*100
prompt enter anything to begin calculation enter -1 to exit
}
}
```
**Variables:1. double ratio of sweetner and percentage of sweetner 
	  2. integer goal weight in pounds**
==================================================================================================
