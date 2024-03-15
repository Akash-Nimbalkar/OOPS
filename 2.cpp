// Nesting of member functions
#include <iostream>
using namespace std;

class set
{
    int m, n;

public:
    void input();

    void display();

    int largest();
};

int set::largest()
{
    if (m >= n)

        return m;

    else
        return n;
}

void set ::input(void)

{

    cout << "Input values of m and n"
         << "\n";

    cin >> m >> n;
}

void set ::display(void)

{
    cout << "Largest value = " << largest() << endl;
}

int main()
{
    set s;
    s.input();
    s.display();
    return 0;
}

// Output :
// Input values of m and n
// 25 89
// Largest value = 89