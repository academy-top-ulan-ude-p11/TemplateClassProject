#include <iostream>

template <class T1, class T2>
class DArray
{
    T1* items;
    int size;
    T2 value;
public:
    DArray() : size{ 0 }, items{ nullptr } {}
    DArray(int size) : size{ size }
    {
        items = new T1[size];
    }
};

template <typename T>
T Amount(T a, T b)
{
    return a + b;
}

class Date
{
    int day;
    int month;
    int year;
};

class User
{
    char* name;
    Date birthDay;
};

int main()
{
    int n = 10, m = 20;

    std::cout << Amount(n, 10);

    DArray<int, char[]> array;
    DArray<DArray<User, float>, int> users;
}
