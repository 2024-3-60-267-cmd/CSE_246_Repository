/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<i<<endl;
    }
    return 0;
}

// STL ---> Standard Template Library
//Vector
//push_back ---> insert
//pop_back ---> remove last
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v ;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

// Math
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<ceil(n)<<endl;
}
*/
#include<bits/stdc++.h>
using namespace std;
template<typename T1>
class addition{
public:
    int a , b ;
    addition(int x , int y){
        a = x;
        b = y;
    }
    void printSum(){
        cout<<a+b<<endl;
    }
};
int main(){
    addition<float> num1(10.5,15.5);
    num1.printSum();
}




















