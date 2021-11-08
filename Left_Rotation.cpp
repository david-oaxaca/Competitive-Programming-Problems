#include <iostream>

using namespace std;

int main(){
    

    int n;
    int rotation;
    int res_pos;

    cin >> n >> rotation;

    res_pos = rotation;
    int arr[n];
    int res[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    
    for(int i = 0; i < n; i++){
        if(res_pos == n)
            res_pos = 0;

        res[i] = arr[res_pos];
        res_pos++;
    } 

    for(int i: res){
		cout << i << ' ';
	}
    
    return 0;
}