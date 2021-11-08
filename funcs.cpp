#include <iostream>
#include "funcs.h"
#include "coord3d.h"
#include <math.h>

// add functions here
double length(Coord3D *p){
  double length = sqrt(pow(p->x, 2) + pow(p->y, 2) + pow(p->z, 2));
  return length;
}

// double lengthTest(Coord3D p){
//   double length = sqrt(pow(p.x, 2) + pow(p.y, 2) + pow(p.z, 2));
//   return length;
// }

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
  double lengthOne = sqrt(pow(p1->x, 2) + pow(p1->y, 2) + pow(p1->z, 2));
  double lengthTwo = sqrt(pow(p2->x, 2) + pow(p2->y, 2) + pow(p2->z, 2));

  if (lengthOne > lengthTwo){
    return p1;
  } else {
    return p2;
  }
}

void move(Coord3D *ppos, Coord3D *pvel, double dt){
  ppos->x = ppos->x + pvel->x * dt;
  ppos->y = ppos->y + pvel->y * dt;
  ppos->z = ppos->z + pvel->z * dt;
}

Coord3D* createCoord3D(double x, double y, double z){
  double newx = *new double;
  double newy = *new double;
  double newz = *new double;

  newx = x;
  newy = y;
  newz = z;
  Coord3D coords = {newx, newy, newz};
  Coord3D *coordsPointer = &coords;
  return coordsPointer;
}

void deleteCoord3D(Coord3D *p){
  delete p;
}
