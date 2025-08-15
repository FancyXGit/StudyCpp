#include <iostream>
using namespace std;

class Cube
{
private:
    int m_L;
    int m_W;
    int m_H;

public:
    void SetLWH(int L,int W,int H)
    {
        m_L = L;
        m_W = W;
        m_H = H;
    }

    int GetL()
    {
        return m_L;
    }
    int GetW()
    {
        return m_W;
    }
    int GetH()
    {
        return m_H;
    }

    int GetArea()
    {
        return 2 * (m_L * m_W + m_W * m_H + m_H * m_L);
    }

    int GetVolumn()
    {
        return m_H * m_L * m_W;
    }
};

bool issame(Cube& c1,Cube& c2);

int main()
{
    Cube c1;
    c1.SetLWH(3,4,5);
    cout << c1.GetArea() << "\n" << c1.GetVolumn() << endl;
    Cube c2;
    c2.SetLWH(3,4,5);
    cout << issame(c1,c2);
    return 0;
}

bool issame(Cube& c1,Cube& c2)
{
    bool flag = false;
    if (c1.GetL() == c2.GetL() && c1.GetW() == c2.GetW() && c1.GetH() == c2.GetH())
    {
        flag = true;
    }
    return flag;
}