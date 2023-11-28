#include<iostream>
#include "../headers/BBox.h"
#include "../headers/Triangle.h"
#include "../headers/Point3D.h"
#define __DBL_MIN__ 2.2250738585072014e-308
#define __DBL_MAX__ 1.7976931348623158e+308

BBox::BBox(std::vector<Triangle> triangles)
:mMin(0,0,0),
mMax(0,0,0),
mCenter(0,0,0)
{
    calculateBBox(triangles);
}

BBox::~BBox()
{
}

void BBox::calculateBBox(std::vector<Triangle> triangles)
{

   mMax = Point3D(__DBL_MIN__,__DBL_MIN__,__DBL_MIN__);
   mMin = Point3D(__DBL_MAX__,__DBL_MAX__,__DBL_MAX__);

   

   for(Triangle triangle:triangles)
   {
      Point3D p1=triangle.p1();
      Point3D p2=triangle.p2();
      Point3D p3=triangle.p3();

      compareAndUpdate(p1, mMin, mMax);
      compareAndUpdate(p2, mMin, mMax);
      compareAndUpdate(p3, mMin, mMax);
   }
}
  
  
    


void BBox::compareAndUpdate(Point3D pointToCompare, Point3D& min, Point3D& max)
{
      
    max.setX(std::max(pointToCompare.x(), max.x()));
    max.setX(std::max(pointToCompare.y(), max.y()));
    max.setX(std::max(pointToCompare.z(), max.z()));

    

      if(pointToCompare.x()<min.x())
          min.setX(pointToCompare.x());

      if(pointToCompare.y()<min.y())
          min.setY(pointToCompare.y());

      if(pointToCompare.z()<min.z())
          min.setZ(pointToCompare.z());
}
