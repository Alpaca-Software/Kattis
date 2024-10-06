#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    string line1,line2;

    getline(cin,line1);
    getline(cin, line2);

    string part1a = line1.substr(0,line1.find("|"));
    string part1b  = line1.substr(line1.find("|")+1);
    string part2a = line2.substr(0,line2.find("|"));
    string part2b = line2.substr(line2.find("|")+1);

    cout <<part1a<<part2a<<" "<<part1b<<part2b;



    return 0;
}
