/*Basic C++ Program with class*/

#include <bits/stdc++.h>
using namespace std;

class Item
{
    int number; // By default private data members
    float cost;

public:
    void getData(int a, float b); // Only the function is declared it is defined outside the class

    void putData()
    {
        cout << "Number : " << number << endl;
        cout << "Cost : " << cost << endl;
    }
};

void Item ::getData(int a, float b) // Function defined outside the class using scope resolution operator
{
    number = a;
    cost = b;
}

int main()
{
    Item i;
    i.getData(111, 199.98);
    i.putData();

    Item j;
    j.getData(222, 986.43);
    j.putData();

    return 0;
}

/* Output :
Number : 111
Cost : 199.98
Number : 222
Cost : 986.43 */