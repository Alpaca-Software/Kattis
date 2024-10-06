#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    double coste,n,a,l,total=0.0;

    cin >>coste>>n;

    for(int i=0;i<n;i++){
        cin >>a>>l;
        total += ((a*l)*coste);
    }

    cout << fixed << setprecision(7)<<total<< "\n";

    return 0;
}
