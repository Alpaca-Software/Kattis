#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    short n;

    cin >> n;
    int p = pow(2,n) + 1;

    cout << p*p << endl;
    return 0;
}
