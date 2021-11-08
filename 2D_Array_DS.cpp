#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int max_hourglass = INT16_MIN;
    int arr[6][6];

    for (int i = 0; i < 6; ++i)
    {
        for(int j = 0; j < 6; ++j)
        {
            cin >> arr[i][j];
        }
        
    }

    for (int i = 0; i <= 3; ++i)
    {
        for(int j = 0; j <= 3; ++j)
        {
            int temp_sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1];
            temp_sum += arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];

            if(temp_sum > max_hourglass)
                max_hourglass = temp_sum;
        }

    }

    cout << max_hourglass << endl;

}