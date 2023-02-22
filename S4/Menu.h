#include <iostream>
#include "Controller.h"
using namespace std;

class Menu{
  Controller controller;
public:
  void mainmenu();
  void mOpenAccount();
  void mWithdraw();
  void mDeposit();
  void mViewBalance();
  void mTransfer();
};
