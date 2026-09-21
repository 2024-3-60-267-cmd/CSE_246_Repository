
#include<bits/stdc++.h>
using namespace std;
/// Template Class
template<typename T1>
class myList
{
private:
    vector<int> v1;
    int maxLen = 10000000;
    int len = 0;
public:
    /// insert a new value at the end of the list
    void insertValue(int x){
        if(len == maxLen){
            cout<<"List overflows..."<<endl;
            return;
        }
        v1.push_back(x);
        cout<<"Insertion Successful..."<<endl;
        len++;
    }
    /// To know the size of the vector
    int getLength(){
        return v1.size();
    }
    /// --- Display the List
    int getList(){
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
    }
    ///---  Search Value
    void searchValue(int s){

        cin>>s;
        for(int i=0;i<v1.size();i++){
            if(s == v1[i]){
                cout<<"Element "<<s<<" at index: "<<i<<endl;
                return;
            }
        }
        cout<<"Element "<<s<<" not found!!!"<<endl;
    }
};
int main()
{
    /// L1 is just a list class.
    /// It automatically push_back values in x.
    myList L1;
    L1.getLength();
    cout<<"LENGTH: "<<L1.getLength()<<endl;
    L1.insertValue(10);
    L1.insertValue(20);
    cout<<"LENGTH: "<<L1.getLength()<<endl;

    /// Using Display Function
    L1.insertValue(30);
    L1.insertValue(40);
    /// Function needs Separation
    cout<<"Elements:";
    L1.getList();
    cout<<endl;


    /// --- Search Value
    L1.searchValue(30);
    L1.searchValue(550);
    return 0;
}
