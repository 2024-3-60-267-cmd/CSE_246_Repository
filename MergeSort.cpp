#include<bits/stdc++.h>
using namespace std;
/// ------------ MERGE SORT -------
void MERGE(vector<int> &A, int p , int q , int r)
{
    int nL, nR,i , j ,k;
    nL = q-p+1;
    nR = r-q;
    vector<int>L(nL),R(nR);
    for(i=0;i<nL;i++)
        L[i] = A[p+i];
    for(j=0;j<nR;j++)
        R[j]=A[q+1+j];
    i=0;
    j=0;
    k=p;
    while(i<nL && j<nR){
        if(L[i]<=R[j]){
            A[k] = L[i];
            i++;
        }else{
            A[k]=R[j];
            j++;
        }
        k = k+1;
    }
    /// if there is any remaining element in L
    while(i<nL){
        A[k] = L[i];
        i = i+1;
        k = k+1;
    }
    /// if there is any remaining element in R
    while(j<nR){
        A[k]=R[j];
        j=j+1;
        k=k+1;
    }
}
void merge_sort(vector<int> &A, int p , int r)
{
    if(p>=r)
        return;
    int q = floor((p+r)/2);
    merge_sort(A,p,q);//Sort
    merge_sort(A,q+1,r);
    MERGE(A,p,q,r);
}

void printList(vector<int> &v){
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> originals;
    originals.push_back(10);
    originals.push_back(2);
    originals.push_back(30);
    originals.push_back(1);
    originals.push_back(8);
    originals.push_back(6);
    originals.push_back(25);
    originals.push_back(4);
    originals.push_back(15);
    vector<int> a = originals;
    printList(a);
    merge_sort(a,0,a.size()-1);
    printList(a);
}















