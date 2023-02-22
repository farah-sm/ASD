#include "Account.h"


Account::Account(string _fn, string _sn, string _acc_num, double _bal) : fn(_fn), sn(_sn), acc_num(_acc_num){
  bal = _bal;
}
void Account::withdraw(double amt){
  bal-=amt;
}
void Account::deposit(double amt){
  bal+=amt;
}
double Account::viewBalance(){
  return bal;
}
string Account::getAccountNumber(){
  return acc_num;
}

ostream& operator<<(ostream& os, const Account& sObject){
  os << sObject.fn << " " << sObject.sn << " " << sObject.bal <<" " <<sObject.acc_num;
}

