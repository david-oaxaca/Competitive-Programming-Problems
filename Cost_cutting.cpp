#include <iostream>

using namespace std;

int main(){
    int N, a, b, c, cont = 0;
    cin >> N;
    int answers[N];
    for(int i = 0; i < N; i++){
        int arr[3];
        int max = 0, min = INT16_MAX;
        
        for(int j = 0; j < 3; j++){
            cin >> arr[j];
            if(arr[j] > max){
                max = arr[j];
            }

            if(arr[j] < min){
                min = arr[j];
            }
        }

        for(int j = 0; j < 3; j++){
            if(arr[j] != min && arr[j] != max){
                answers[i] = arr[j];
                break;
            }
        }

    }

    for(int i: answers){
        cout << "Case " << cont+1 << ": " << i << endl;
        cont++;
    }

    return 0;
}