#include <iostream>
#include <string>
using namespace std;

class Saving {

private: 
    string fn, sn;
    float balance;
    int auto_acc_gen = 1101101;

public: 
    Saving(string f, string s, int acc, float bal)
    {
        fn = f;
        sn = fn;
        
        balance = bal;
    }

    float GetBalance()
    {
        return balance;
    }

    string OpenAccount()
    {
        cout << "Please Enter First Name";
        cin >> fn;
        cout << "Please Enter Surename";
        cin >> sn;
        balance = 0.0; 
        auto_acc_gen++;
    }

    string WithDraw(float amt)
    {
        if (amt <= balance)
        { 
            balance = balance - amt;

            cout << "Success, you've taken " << amt << ", your new balance is : " << balance;
        }
        else
        {
            cout << "Sorry you don't have enough cash m8.";
        }

    }

    string Deposit(float amt)
    {

        
        float amt ;
        cout << "How much would you like to withdraw: ";
        cin >> amt;

        balance = balance + amt;

        cout << "Success, you've taken " << amt << ", your new balance is : " << balance;


    }

    

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
   

    if (option == 1)
    {
        OpenAccount()
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
        Saving::WithDraw();
    }


    return 0;
}




