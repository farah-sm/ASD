#include "Controller.h"
#include <string.h>



 string Controller::cOpenAccount(string fn, string sn){
   Account sObject(fn, sn, to_string(auto_gen_acc_num), 0.0);
   account_map.insert({to_string(auto_gen_acc_num), sObject});
   auto_gen_acc_num++;
   return "Account successfully created. Account number is: "+ to_string(auto_gen_acc_num -1); 
   
 }
  string Controller::cDeposit(string acc_num, double amt){
    if(account_map.find(acc_num) != account_map.end())
    {
      account_map.find(acc_num)->second.deposit(amt);
      return "Deposit made for amount: " + to_string(amt);
    } else
    {
      return "Account has not been found";
    }
  }
  string Controller::cWithdraw(string acc_num, double amt){
    if(account_map.find(acc_num) != account_map.end())
    {
      if(amt <= account_map.find(acc_num)->second.viewBalance())
      {
          account_map.find(acc_num)->second.withdraw(amt);
          return "Deposit made for amount: " + to_string(amt);
      }
      else{
      return "You're broke saaxib";
    }
      }
    return "No Such account";
    
      
  }
  string Controller::cViewBalance(string acc_num){
    if(account_map.find(acc_num) != account_map.end())
    {

      return to_string(account_map.find(acc_num) -> second.viewBalance());
      
      }
    else
    {
      return "No Such account";
    }
  }

string Controller::cTransfer(string acc_num, double amt, string to_acc){

    if(account_map.find(acc_num) != account_map.end() && account_map.find(to_acc) != account_map.end()) 
    {
      if(amt <= account_map.find(acc_num)->second.viewBalance())
      {

        // Create the transfer method
          account_map.find(acc_num)->second.withdraw(amt);
          account_map.find(to_acc)->second.deposit(amt);
        
          return "Transfer made for amount: " + to_string(amt) + ". From account: " + acc_num + ". To Account: " + to_acc;

        cWithdraw(acc_num, amt);
        cDeposit(to_acc, amt);
      }
      else{
      return "Insufficient fund";
    }

    }
  else{
    return "No Such account";
    
  }

  
}
