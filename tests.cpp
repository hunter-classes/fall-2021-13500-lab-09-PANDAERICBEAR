#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
//declarations for part A and B
Coord3D pointA = {10, 20, 30};
Coord3D pointB = {4, 5, 6};
Coord3D pointC = {-10, 32, 16};
Coord3D pointD = {-20, 21, -22};

//declarations for part C
Coord3D pos = {0, 0, 100.0};
Coord3D vel = {1, -5, 0.2};
Coord3D pos2 = {10, 3, 76.0};
Coord3D vel2 = {4, -9, 5.2};
Coord3D pos3 = {34, 2.4, 67};
Coord3D vel3 = {-42.2, 23, 9.8};

TEST_CASE("[Task A]"){
  CHECK(length(&pointA) == doctest::Approx(37.4166).epsilon(0.05));
  CHECK(length(&pointB) == doctest::Approx(8.77496).epsilon(0.05));
  CHECK(length(&pointC) == doctest::Approx(37.1484).epsilon(0.05));
  CHECK(length(&pointD) == doctest::Approx(36.4005).epsilon(0.05));
}

TEST_CASE("[Task B]"){
  CHECK(fartherFromOrigin(&pointA, &pointD) == &pointA);
  CHECK(fartherFromOrigin(&pointB, &pointC) == &pointC);
  CHECK(fartherFromOrigin(&pointA, &pointB) == &pointA);
}

TEST_CASE("[Task C]"){
  move(&pos, &vel, 2.0);
  CHECK(pos.x == 2);
  CHECK(pos.y == -10);
  CHECK(pos.z == 100.4);

  move(&pos2, &vel2, 6.0);
  CHECK(pos2.x == 34);
  CHECK(pos2.y == -51);
  CHECK(pos2.z == doctest::Approx(107.2).epsilon(0.05));

  move(&pos3, &vel3, 10.0);
  CHECK(pos3.x == -388);
  CHECK(pos3.y == doctest::Approx(232.4).epsilon(0.05));
  CHECK(pos3.z == 165);
}
