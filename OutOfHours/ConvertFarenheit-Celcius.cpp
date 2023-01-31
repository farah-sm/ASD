#include <iostream>
using namespace std;
int main() {
    
    // Prompt user for input
    cout << "Enter a temp in farenheit: ";
    // Declare a variable type double
    double farenheit;
    // Initialise the input of the user into our variable x
    cin >> farenheit;
    // declare the variable celcius and calculate with teh relevant equation
    double celcius = (farenheit - 32) * 5/9;
    // Print celcius to console
    cout << celcius;
   
}
