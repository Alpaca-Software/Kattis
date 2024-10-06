#include <iostream>

using namespace std;

int main()
{

    float p = 0;
    int total = 0,suma = 0;
    short int G,T,N,number;

    cin>>G>>T>>N;


    for(int i=0;i<N;i++)
    {
        cin>>number;
        suma+=number;
    }


    total = G-T;

    p = (total*.9);

    total = p - suma;

    cout<<total;




       return 0;
}
