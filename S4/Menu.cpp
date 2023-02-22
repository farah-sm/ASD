#include "Menu.h"


  void Menu::mainmenu(){
    cout<<"###################################"<<endl;
    cout<<"##  WELCOME TO WESTMINSTER BANK ##"<<endl;
    cout<<"##################################"<<endl;
    cout<<"1. Open Account\n";
    cout<<"2. Deposit\n";
    cout<<"3. Withdraw\n";
    cout<<"4. Transfer\n";
    cout<<"5. View Balance\n";
    cout<<"please enter an option: ";
    short option;
    cin>>option;
    switch(option){
      case 1:
        mOpenAccount();
      break;
    }
    system("cls");
    mainmenu();
    
    
  }
  void Menu::mOpenAccount(){
    cout<<"Please enter First Name: ";
    string fn;
    cin>>fn;
    cout<<"Please enter Surname: ";
    string sn;
    cin>>sn;
    cout<<controller.cOpenAccount(fn, sn)<<endl;
  }
  void Menu::mWithdraw(){
    
  }
  void Menu::mDeposit(){
    cout << "Enter acc number";
    string acc_num;
    cin>> acc_num;
    cout <<"Please enter amount";
    double amt;
    cin>> amt;

    cout << controller.cDeposit(acc_num, amt)<<endl;
    }
  void Menu::mViewBalance(){
    
  }
  void Menu::mTransfer(){
    
    }
