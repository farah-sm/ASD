#include <iostream>
#include <string>
using namespace std;

struct Saving {


    string fn, sn;
    int accNum;
    float balance;


};

int auto_acc_gen = 1101101;
int main() {
    
    cout << "*********************************" << endl;
    cout << "* Welcome to Westminster Bank *" << endl;
    cout << "*********************************" << endl;
    cout << "1. Open An Acc: " << endl;
    cout << "2. Deposit: " << endl;
    cout << "3. Withdraw: " << endl;
    cout << "4. Transfer: " << endl;
    cout << "Please enter an option: " << endl;
    short option;
    cin >> option;
    Saving object;
    if(option == 1)
    {
        cout << "Please Enter First Name";
        cin >> object.fn;
        cout << "Please Enter Surename";
        cin >> object.sn;
        object.accNum = auto_acc_gen;
        object.balance = 0.0;
        auto_acc_gen++;

    }
    else if (option == 2)
    {
        float withdraw;
        cout << "How much would you like to withdraw: ";
        cin >> withdraw;

        
    }
    else if (option == 3)
    {

    }
    else if (option == 4)
    {

    }


    return 0;
}
