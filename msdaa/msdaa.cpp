#include <iostream>
#include<cmath>
using namespace std;
//Now we will write the class point 
class Point
{
public:
    //now we will enter the axes
    double X;
    double Y;
    //Now becuase we will add and subtract we have to make empty constructer
    Point()
    {
        X = 0.0;
        Y = 0.0;
    }
    //Now we will do constructer has the same name of the class
    Point(double x, double y)
    {
        X = x;
        Y = y;
    }
    //He ask me to enter getX() And getY()
    double getX()
    {
        return X;
        {
            return Y;
        }
    }
    double getY()
    {
        return Y;
    }
    //He ask me to enter viod setX and setY
    void setX(double x)
    {
        X = x;
    }
    void setY(double y)
    {
        Y = y…