#include <iostream>
using namespace std;

class Building;

class GoodGuy
{
public:
    GoodGuy();
    void visit();

    Building* building;
};

class Building
{
    friend class GoodGuy;

public:
    Building();

    string m_SittingRoom;
private:
    string m_Bedroom;
};

Building::Building()
{
    m_SittingRoom = "客厅";
    m_Bedroom = "卧室";
}

GoodGuy::GoodGuy()
{
    building = new Building;
}

void GoodGuy::visit()
{
    cout << building->m_SittingRoom << endl;
    cout << building->m_Bedroom << endl;
}

int main()
{
    GoodGuy g1;
    g1.visit();
    return 0;
}