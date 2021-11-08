#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int N,Q,a,b,k,max=0,x=0;

    cin>>N>>Q;
    long int *arr=new long int[N]();

    for(int i = 0; i < Q; i++)
    {
        cin>>a>>b>>k;
        arr[a-1]+=k;
        if((b)<=N) arr[b]-=k;
    }

    for(int i = 0; i < N ; i++)
    {
       x=x+arr[i];
       if(max<x) max=x;

    }

    cout<<max;
    return 0;
}