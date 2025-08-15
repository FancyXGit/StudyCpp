#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
private:
    double m_location_x;
    double m_location_y;
    double m_radius;
public:
    void SetCir(double x,double y,double r)
    {
        m_location_x = x;
        m_location_y = y;
        m_radius = r;
    }

    double GetX()
    {
        return m_location_x;
    }

    double GetY()
    {
        return m_location_y;
    }

    double GetR()
    {
        return m_radius;
    }
};

class Point
{
private:
    double m_location_x;
    double m_location_y;
public:
    void SetPoi(double x,double y)
    {
        m_location_x = x;
        m_location_y = y;
    }

    double GetX()
    {
        return m_location_x;
    }

    double GetY()
    {
        return m_location_y;
    }
    
};

bool inters_Cir_Poi(Circle& c,Point& p);

int main()
{
    Circle c;
    c.SetCir(2.73,3.42,4.32);
    Point p;
    p.SetPoi(3.61,2.92);
    cout << inters_Cir_Poi(c,p);
    return 0;
}

bool inters_Cir_Poi(Circle& c,Point& p)
{
    double x_dis = c.GetX() - p.GetX();
    double y_dis = c.GetY() - p.GetY();
    double dis = sqrt(pow(x_dis,2) + pow(y_dis,2));
    double r = c.GetR();
    bool flag = false;
    if (dis <= r)
    {
        flag = true;
    } 
    return flag;
}