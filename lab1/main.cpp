#include <iostream>
#include "smaller.h"
#include "month.h"

int main()
{
  std::cout << smaller(5,10) << std::endl;
  std::cout << smaller3(4,69,420) << std::endl;
  std::cout << month(2017,5) << std::endl;
  std::cout << leap(2005) << std::endl;
}
