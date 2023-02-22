#include <string>
using namespace std;
#include <map>
#include "Account.h"

class Controller{

map<string, Account> account_map;

 int auto_gen_acc_num = 1010101;

public:
  string cOpenAccount(string fn, string sn);
  string cDeposit(string acc_num, double amt);
  string cWithdraw(string acc_num, double amt);
  string cViewBalance(string acc_num);
  string cTransfer(string acc_num, double amt, string to_acc);

  
};
