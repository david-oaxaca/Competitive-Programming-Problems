#include <iostream>

using namespace std;


int main(){
    int n, best_cut;

    int arr[3];
    
    cin >> n >> arr[0] >> arr[1] >> arr[2];

    int dp[n+1];
    dp[0] = 0;

    for(int i = 1; i < n+1; i++){

        best_cut = -1;

        for(int j = 0; j < 3; j++){
            
            if(arr[j] <= i){
                int cut = dp[i-arr[j]];

                if(cut >= best_cut){
                    best_cut = cut;
                }
            }
        } 
        if(best_cut != -1){
            dp[i] = best_cut + 1;
        }else{
            dp[i] = -1;
        }
        
    }

    cout << dp[n] << endl;
    
    return 0;
}