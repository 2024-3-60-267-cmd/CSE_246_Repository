#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& a)
{
    int n = a.size();
///counters
    int outer = 0;
    int inner = 0;
    int swaps = 0;
///Outer Loop
    for(int i=0;i<n-1;i++){
            outer++;
            ///Inner Loop
        for(int j=0;j<n-1-i;j++){
            inner++;
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swaps++;
            }
        }
    }
    //print results
    cout<<"Bubble Sort"<<endl;
    cout<<"Sorted: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Outer loop iterations: "<<outer<<endl;
    cout<<"Inner loop iterations: "<<inner<<endl;
    cout<<"Swaps: "<<swaps<<endl;
}

int main(){
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubbleSort(a);
    return 0;
}
