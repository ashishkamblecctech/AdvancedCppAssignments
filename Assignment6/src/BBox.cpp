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

   mCenter = Point3D((mMin.x()+mMax.x())/2, (mMin.y()+mMax.y())/2, (mMin.z()+mMax.z())/2);
   std::cout<<mMin.x()<<" "<<mMin.y()<<" "<<mMin.z()<<std::endl;
   std::cout<<mMax.x()<<" "<<mMax.y()<<" "<<mMax.z()<<std::endl;
   std::cout<<mCenter.x()<<" "<<mCenter.y()<<" "<<mCenter.z()<<std::endl;
}

void BBox::compareAndUpdate(Point3D pointToCompare, Point3D& min, Point3D& max)
{
    auto getMaxPoint = [pointToCompare, &max] () mutable{
       max.setX(std::max(pointToCompare.x(),max.x()));

        max.setY(std::max(pointToCompare.y(),max.y()));

        max.setZ(std::max(pointToCompare.z(),max.z()));
    };

    auto getMinPoint = [pointToCompare, &min] () mutable {
        min.setX(std::min(pointToCompare.x(),min.x()));

        min.setY(std::min(pointToCompare.y(),min.y()));

        min.setZ(std::min(pointToCompare.z(),min.z()));
 
    };
        
    getMaxPoint();
    getMinPoint();
}
