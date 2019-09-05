#include <iostream>
// #define DOCTEST_CONFIG_IMPLEMENT
// #include "doctest.h"
#include "funcs.h"
// #include <fstream>
// #include <cstdlib>
// #include <climits>

int main()
{
  //
  // sample code
  // std::string result;
  //
  // result=greet("Tom");
  // std::cout << result <<"\n";
  std::cout<< east_storage("12/01/2018") << std::endl;
  std::cout<< min_storage() << std::endl;
  std::cout<< max_storage() << std::endl;
  std::cout<< compare_basins("12/01/2018", "12/10/2018") <<std::endl;
  reverse("11/01/2018", "11/10/2018");
  return 0;
}
