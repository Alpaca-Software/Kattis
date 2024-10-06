#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;

    int r, e, c;
    vector<string> results;

    for (int i = 0; i < n; i++)
    {
        cin >> r >> e >> c;


        if ((e - c) > r)
        {
            results.push_back("advertise");
        }

        else if ((e - c) == r)
        {
            results.push_back("does not matter");
        }

        else
        {
            results.push_back("do not advertise");
        }
    }


    for (int i = 0; i < n; i++)
    {
        cout << results[i] << endl;
    }

    return 0;
}
