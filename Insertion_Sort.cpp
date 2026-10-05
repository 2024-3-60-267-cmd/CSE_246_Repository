#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>& a){
    int n= a.size();

    int outer = 0;
    int inner = 0;
    int swaps = 0;

    for(int i=1;i<n;i++){
        outer++;
        int key = a[i];
        int j = i-1;
        while(j>=0&&a[j]>key){
            inner++;
            a[j+1]=a[j];
            swaps++;
            j--;
        }
        a[j+1] = key;
    }
        //print results
    cout<<"Insertion Sort"<<endl;
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
    insertionSort(a);
    return 0;
}
