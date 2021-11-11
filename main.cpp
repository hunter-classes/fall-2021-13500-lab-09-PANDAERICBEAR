#include <iostream>

#include "coord3d.h"
#include "funcs.h"

int main()
{
  Coord3D pointD = {-20, 21, -22};
  std::cout << length(&pointD) << std::endl;
  //
  // Coord3D pointP = {10, 20, 30};
  // Coord3D pointQ = {-20, 21, -22};
  // Coord3D pointB = {4, 5, 6};
  // Coord3D pointC = {-10, 32, 16};
  //
  // std::cout << "Address of P: " << &pointB << std::endl;
  // std::cout << "Address of Q: " << &pointC << std::endl << std::endl;
  //
  // Coord3D *ans = fartherFromOrigin(&pointB, &pointC);
  //
  // std::cout << "ans = " << ans << std::endl;

  // Coord3D pos = {0, 0, 100.0};
  // Coord3D vel = {1, -5, 0.2};
  // Coord3D pos3 = {34, 2.4, 67};
  // Coord3D vel3 = {-42.2, 23, 9.8};
  //
  // move(&pos3, &vel3, 10.0); // object pos gets changed
  // std::cout << pos3.x << " " << pos3.y << " " << pos3.z << std::endl;
  // prints: 2 -10 100.4

  // double x = 10;
  // double y = 20;
  // double z = 30;
  // Coord3D *ppos = createCoord3D(x,y,z);
  //
  // x = 5.5;
  // y = -1.4;
  // z = 7.77;
  // Coord3D *pvel = createCoord3D(x,y,z);
  //
  // move(ppos, pvel, 10.0);
  //
  // std::cout << "Coordinates after 10 seconds: "
  //      << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;
  //
  // deleteCoord3D(ppos); // release memory
  // deleteCoord3D(pvel);
  return 0;
}
