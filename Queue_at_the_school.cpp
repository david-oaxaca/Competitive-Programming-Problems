#include <iostream>

using namespace std;

int main(){

    int n, x;
    cin >> n >> x;

    char arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < x; i++){
        for(int j = 0; j < n; j++){
            //0,1 -> 2,3 -> 4
            if(arr[j+1] == 'G' && arr[j] == 'B'){
                arr[j] = 'G';
                arr[j+1] = 'B';
                j++;
            }
            
        }

    }

    for(char i: arr){
        cout << i;
    }    

    return 0;
}