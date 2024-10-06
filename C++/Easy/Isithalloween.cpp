#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    string date;
    int day;

    cin>>date>>day;


    if((date == "OCT" && day == 31) || (date == "DEC" && day == 25)){

        cout<<"yup\n";
    }else{

        cout <<"nope\n";
        }


    return 0;
}
