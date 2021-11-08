#include <iostream>

using namespace std;


int main(){

    int n, ans = 0, max_points = 0, min_points = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int points;
        cin >> points;
        if(i == 0){
            max_points = points;
            min_points = points;
        }else{

            if(points > max_points){
                ans++;
                max_points = points;
            }else if(points < min_points){
                ans++;
                min_points = points;
            }


        }
    }

    cout << ans << endl;

    return 0;
}