#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"
#include "doctest.h"
#include "Coord3D.h"

// Write test cases here
TEST_CASE("Task A"){
  // Coord3D tests
  Coord3D pointP = {10, 20, 30};
  CHECK(length(&pointP) == sqrt((10 * 10) + (20 * 20) + (30 * 30)));
  Coord3D pointQ = {-20, 21, -22};
  CHECK(length(&pointQ) == sqrt((-20 * -20) + (21 * 21) + (-22 * -22)));
  Coord3D pointR = {5, 10, 15};
  CHECK(length(&pointR) == sqrt((5 * 5) + (10 * 10) + (15 * 15)));
  Coord3D pointS = {16, -17, 18};
  CHECK(length(&pointS) == sqrt((16 * 16) + (-17 * -17) + (18 * 18)));
}

TEST_CASE("Task B"){
  // task B tests go here
  Coord3D P = {10, 20, 30};
  Coord3D Q = {-20, 21, -22};
  Coord3D R = {5, 10, 15};
  Coord3D S = {16, -17, 18};
  CHECK(fartherFromOrigin(&P, &Q) == &P);
  CHECK(fartherFromOrigin(&Q, &R) == &Q);
  CHECK(fartherFromOrigin(&R, &S) == &S);
  CHECK(fartherFromOrigin(&P, &S) == &P);
}

TEST_CASE("Task C"){
  Coord3D pos1 = {0, 0, 100.0};
  Coord3D vel1 = {1, -5, 0.2};
  Coord3D pos2 = {0, 5, 45.0};
  Coord3D vel2 = {2, 3, 0.1};
  Coord3D pos3 = {1, 1, 100.0};
  Coord3D vel3 = {2, -5, 0.2};
  move(&pos1, &vel1, 2.0);
  move(&pos2, &vel2, 3.0);
  move(&pos3, &vel3, 3.0);
}



// etc.
