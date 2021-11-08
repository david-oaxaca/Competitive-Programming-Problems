#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main () {

    int n;
    cin >> n;
    int arr[n];
    int res[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (int i = n; i > 0; i--)
    {
        res[n-i] = arr[i-1];
        
    }


    for(int i: res){
		cout << i << ' ';
	}

}
