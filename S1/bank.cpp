#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    float balance;
    
    cout << "What is your balance: ";
    cin >> balance; 
    cout <<"Your current balance is: " << balance<<endl;
    float deposit;
    cout << "Please enter your deposit amount: ";
    cin >> deposit;
    
    float newBalance = balance + deposit;
    
    cout << "Your new balance is: " << newBalance<<endl;

    float withdraw;
    cout << "How much would you like to withdraw: ";
    cin >> withdraw;
    
    if (withdraw < newBalance)
    {
        
        newBalance = newBalance - withdraw;
    
        cout<< "Your balance after you've withdrawn is: "<< newBalance<<endl;
    }
    else
    {
        cout << "Sorry baya, you are broke"<<endl;
    }
    
    
  
    double stateTax = 2.3;
    double temp = newBalance;
   newBalance = (stateTax / 10) * newBalance + temp;
 
    
    cout << "Total after adding tax rates = " << newBalance << endl;
        
   
   
   
    return 0;
}
