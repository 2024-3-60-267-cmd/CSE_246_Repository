
#include <bits/stdc++.h>
using namespace std;

// ------------ MERGE SORT ------------

void MERGE(vector<int>& A, int p, int q, int r)
{
    int nL = q - p + 1;
    int nR = r - q;

    vector<int> L(nL), R(nR);

    // Copy elements into left and right arrays
    for (int i = 0; i < nL; i++)
        L[i] = A[p + i];

    for (int j = 0; j < nR; j++)
        R[j] = A[q + 1 + j];

    int i = 0, j = 0, k = p;

    // Merge the two sorted halves
    while (i < nL && j < nR)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements from L
    while (i < nL)
    {
        A[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements from R
    while (j < nR)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(vector<int>& A, int p, int r)
{
    if (p >= r)
        return;

    int q = p + (r - p) / 2;

    merge_sort(A, p, q);
    merge_sort(A, q + 1, r);

    MERGE(A, p, q, r);
}

/// ------------ QUICK SORT ------------

int partition(vector<int>& A, int p, int r)
{
    int x = A[r];       // Last element is the pivot
    int i = p - 1;

    for (int j = p; j < r; j++)
    {
        if (A[j] <= x)
        {
            i++;
            swap(A[i], A[j]);
        }
    }

    // Put pivot in its correct position
    swap(A[i + 1], A[r]);

    return i + 1;
}

void QUICKSORT(vector<int>& A, int p, int r)
{
    if (p < r)
    {
        int q = partition(A, p, r);

        QUICKSORT(A, p, q - 1);
        QUICKSORT(A, q + 1, r);
    }
}

// ------------ PRINT VECTOR ------------

void printList(vector<int>& v)
{
    for (int i = 0; i < (int)v.size(); i++)
        cout << v[i] << " ";

    cout << endl;
}

// ------------ MAIN FUNCTION ------------

int main()
{
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

    // Use separate copies for both algorithms
    vector<int> a = originals;
    vector<int> b = originals;

    cout << "Original Array: ";
    printList(originals);

    // Merge Sort
    merge_sort(a, 0, (int)a.size() - 1);

    cout << "Merge Sort: ";
    printList(a);

    // Quick Sort
    QUICKSORT(b, 0, (int)b.size() - 1);

    cout << "Quick Sort: ";
    printList(b);

    return 0;
}
