#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    char arr[n];
    char previous_stone = ' ';
    int move_count = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(i == 0){
            previous_stone = arr[i];
        }else if(arr[i] != previous_stone){
            previous_stone = arr[i];
        }else{
            move_count++;
        }
    }

    cout << move_count << endl;

    return 0;
}