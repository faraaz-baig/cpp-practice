#include <iostream>
using namespace std;

// Sum numbers between m - n
int Swap(int &, int &);
int recursive_sum(int, int);

int main()
{
    int m, n;

    cout << "Enter a number : ";
    cin >> m;
    cout << "Enter another number : ";
    cin >> n;

    if (m > n)
    {
        Swap(m, n);
    }

    cout << "Sum : " << recursive_sum(m, n) << endl;
}

int recursive_sum(int m, int n)
{
    if (m == n)
    {
        return m;
    }
    return m + recursive_sum(m + 1, n);
}

int Swap(int &m, int &n)
{
    int temp = m;
    m = n;
    n = temp;
    return m, n;
}