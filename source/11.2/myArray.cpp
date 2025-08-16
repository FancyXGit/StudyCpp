#include <iostream>
using namespace std;

template<class T1>
class myArray
{
public:
    myArray(int capacity)
    {
        m_capacity = capacity;
        m_size = 0;
        m_my_array = new T1[m_capacity];
    }

    myArray(const myArray &array1)
    {
        m_capacity = array1.m_capacity;
        m_my_array = new T1[m_capacity];
        m_size = array1.m_size;
        for (int i = 0; i < m_capacity; i++)
        {
            m_my_array[i] = array1.m_my_array[i];
        }
    }

    myArray& operator=(const myArray &array1)
    {
        if (m_my_array != nullptr)
        {
            delete[] m_my_array;
            m_my_array = nullptr;
            m_size = 0;
            m_capacity = 0;
        }
        m_capacity = array1.m_capacity;
        m_my_array = new T1[m_capacity];
        m_size = array1.m_size;
        for (int i = 0; i < m_capacity; i++)
        {
            m_my_array[i] = array1.m_my_array[i];
        }
        return *this;
    }

    void PushBack(const T1 &val)
    {
        if (m_capacity == m_size)
        {
            return;
        }
        m_my_array[m_size] = val;
        m_size++;
    }

    void PopBack()
    {
        if (m_size == 0)
        {
            return;
        }
        m_size--;
    }

    T1& operator[](int index)
    {
        return m_my_array[index];
    }

    int getCapacity()
    {
        return m_capacity;
    }

    int getSize()
    {
        return m_size;
    }

    void PrintArr()
    {
        for (int i = 0; i < m_size; i++)
        {
            cout << m_my_array[i] << " ";
        }
        cout << endl;
    }

    ~myArray()
    {
        if (m_my_array != nullptr)
        {
            delete[] m_my_array;
            m_my_array = nullptr;
            m_capacity = 0;
            m_size = 0;
        }
    }

private:
    int m_size;
    int m_capacity;
    T1 *m_my_array;
};

int main()
{
    myArray<int> arr1(10);
    for (int i = 0; i < 10; i++)
    {
        arr1.PushBack(i);
    }
    arr1.PrintArr();

    myArray<string> arr2(3);
    string temp[3] = {"yes", "or", "no"};
    for (int i = 0; i < 3; i++)
    {
        arr2.PushBack(temp[i]);
    }
    arr2.PrintArr();

    arr1.PopBack();
    arr1.PrintArr();
    return 0;
}