#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

  short n,missingDay,currentDay,cuarentine=14;
  short dayHappyBirhts,x,i=0,friendsToGo=0;
   cin>>n>>missingDay>>currentDay;

    dayHappyBirhts = missingDay+currentDay;

  for(i;i<n;i++){
    cin>>x;
    if(cuarentine+x<=dayHappyBirhts){
        friendsToGo++;
    }

  }
    cout <<friendsToGo;
    return 0;
}
