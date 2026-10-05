#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>& a)
{
    int n = a.size();

    int outer = 0;
    int inner = 0;
    int swaps = 0;

    for (int i = 0; i < n - 1; i++)
    {
        outer++;

        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            inner++;

            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
        {
            swap(a[i], a[minIndex]);
            swaps++;
        }
    }

    cout << "Selection Sort\n";

    cout << "Sorted: ";
    for (int x : a)
        cout << x << " ";

    cout << "\nOuter loop iterations: " << outer;
    cout << "\nInner loop iterations: " << inner;
    cout << "\nSwaps: " << swaps << "\n";
}
int main(){
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selectionSort(a);
    return 0;
}
