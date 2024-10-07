#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);


    int R, C, z_r, z_c;
    cin >> R >> C >> z_r >> z_c;

    vector<string> matriz(R);

    for(int i=0; i<R;i++){
        cin>>matriz[i];
    }


    for(int i=0;i<R;i++){
        for(int zr=0;zr<z_r;zr++){
            for(int j=0;j<C;j++){
                for(int zc=0;zc<z_c;zc++){
                    cout<<matriz[i][j];
                }
            }
            cout<<endl;
        }
    }


    return 0;
}
