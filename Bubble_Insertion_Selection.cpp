#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& a)
{
    int n = a.size();

    int outer = 0;
    int inner = 0;
    int swaps = 0;

    for (int i = 0; i < n - 1; i++)
    {
        outer++;

        for (int j = 0; j < n - 1 - i; j++)
        {
            inner++;

            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swaps++;
            }
        }
    }

    cout << "Bubble Sort\n";

    cout << "Sorted: ";
    for (int x : a)
        cout << x << " ";

    cout << "\nOuter loop iterations: " << outer;
    cout << "\nInner loop iterations: " << inner;
    cout << "\nSwaps: " << swaps << "\n";
}


void insertionSort(vector<int>& a)
{
    int n = a.size();

    int outer = 0;
    int inner = 0;
    int swaps = 0;

    for (int i = 1; i < n; i++)
    {
        outer++;

        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            inner++;

            a[j + 1] = a[j];
            swaps++;

            j--;
        }

        a[j + 1] = key;
    }

    cout << "Insertion Sort\n";

    cout << "Sorted: ";
    for (int x : a)
        cout << x << " ";

    cout << "\nOuter loop iterations: " << outer;
    cout << "\nInner loop iterations: " << inner;
    cout << "\nSwaps: " << swaps << "\n";
}


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


int main()
{
    int n;

    cin >> n;

    vector<int> original(n);

    for (int i = 0; i < n; i++)
    {
        cin >> original[i];
    }

    vector<int> a = original;
    vector<int> b = original;
    vector<int> c = original;

    bubbleSort(a);

    cout << "\n";

    insertionSort(b);

    cout << "\n";

    selectionSort(c);

    return 0;
}
