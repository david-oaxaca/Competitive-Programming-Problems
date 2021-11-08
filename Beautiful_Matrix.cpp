#include <iostream>
#include <cmath> 

using namespace std;

int main(){

    int arr[5][5];
    int res = 0;

    for (int i = 0; i < 5; ++i)
    {
        for(int j = 0; j < 5; ++j)
        {
            cin >> arr[i][j];
        }
        
    }

    for (int i = 0; i < 5; ++i)
    {
        for(int j = 0; j < 5; ++j)
        {
            if(arr[i][j] == 1){
                if(i != 2 ){
                    res += abs((3 - (i+1)));
                }
                if( j != 2){
                    res += abs((3 - (j+1)));
                }
            }
        }
        
    }

    cout << res << endl;

    return 0;
}