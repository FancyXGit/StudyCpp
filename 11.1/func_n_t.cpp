#include <iostream>
using namespace std;

void func(int a)
{
    cout << "普通函数" << endl;
    cout << "a = " << a << endl;
}

template<typename T>
void func(T a)
{
    cout << "模板函数" << endl;
    cout << "a = " << a << endl;
}

int main()
{
    int a = 0;
    func(a);

    func<>(a);

    char b = 's';
    func(b);
    return 0;
}