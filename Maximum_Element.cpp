#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> elems;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int query;
        cin >> query;

        switch (query)
        {
        case 1:
            int e;
            cin >> e;
            if(elems.empty()){
                elems.push(e);
            }else{
                if(e > elems.top()){
                    elems.push(e);
                }
            }
            break;
        case 2:
            if(!elems.empty()){
                elems.pop();
            }
            break;
        case 3:
            if(!elems.empty()){
                cout << elems.top() << endl;
            }else{
                cout << "No hay elementos en la pila!" << endl;
            }
            break;        
        default:
            break;
        }
    }
}