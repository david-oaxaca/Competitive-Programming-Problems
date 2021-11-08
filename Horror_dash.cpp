#include <iostream>

using namespace std;

int main(){
    int t, cont = 0;
    cin >> t;
    int arr[t];

    for(int i = 0; i < t; i++){
        int n, v = 0;
        cin >> n;

        for(int j = 0; j < n; j++){
            int sv;
            cin >> sv;
            if(sv > v){
                v = sv;
            }
        }
        arr[i] = v;
    }


    for(int v: arr){
        cout << "Case " << cont+1 << ": " << v << endl;
        cont++;
    }

    return 0;
}