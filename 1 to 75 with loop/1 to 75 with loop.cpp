#include <iostream>

using namespace std;

int main()
{
    int total ;
    for (int i=1; i<=76; i+=2)
    {
        cout << i <<endl;
        total +=i ;
    }
    cout << total;
}
