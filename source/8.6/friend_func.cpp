#include <iostream>
#include <string>
using namespace std;

class Building
{

    friend void GetAccess(Building& budn);

public:
    Building()
    {
        m_SittingRoom = "SittingRoom";
        m_Bedroom = "Bedroom";
    }

    string m_SittingRoom;

private:
    string m_Bedroom;
};

void GetAccess(Building& budn)
{
    cout << "Getting Aceess To " << budn.m_Bedroom << endl;
}

int main()
{
    Building b1;
    GetAccess(b1);
    return 0;
}