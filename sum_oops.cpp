#include <iostream>
using namespace std;
class table
{
    int n = 6;
    int sum = 0;

public:
    void print()
    {
        for (int i = 0; i <= n; i++)
        {

            sum = sum + i;
            cout << sum;
        }
    }
};
int main()
{
    table t1;
    t1.print();
    return 0;
}