#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"
#include "doctest.h"

TEST_CASE("Sample tests"){
  std::string result;
  result=greet("Tom");

  CHECK(result.compare("Hello Tom!")==0);

}

// Write test cases here
TEST_CASE("Task A"){
  CHECK(east_storage("01/01/2018") == 59.94);
	CHECK(east_storage("12/30/2018") == 74.76);
}

TEST_CASE("Task B"){
  CHECK(min_storage() == 43.18);
	CHECK(max_storage() == 81.07);
}

TEST_CASE("Task C"){
  CHECK(compare_basins("12/01/2018", "12/10/2018") ==
	"12/01/2018 West\n12/02/2018 West\n12/03/2018 West\n12/04/2018 West\n12/05/2018 West\n12/06/2018 West\n12/07/2018 West\n12/08/2018 West\n12/09/2018 West\n12/10/2018 West");
}

TEST_CASE("Task D"){
  reverse("11/01/2018", "11/10/2018");
}

// etc.
