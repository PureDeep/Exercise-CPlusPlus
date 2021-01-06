/*
 * @Author: PureDeep
 * @Date: 2020-11-05 16:09:36
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-07 14:36:30
 * @FilePath: \Exercise-CPlusPlus\130-quickSort.cpp
 */
#include <iostream>
#include <vector>

using namespace std;

void coutVector(const vector<int> A)
{
    cout << "{";
    for (int i = 0; i < A.size() - 1; i++)
    {
        cout << A[i] << ", ";
    }
    cout << A[A.size() - 1] << "}" << endl;
}

void Exchange(vector<int> &A, int p, int r)
{
    int temp = A[p];
    A[p] = A[r];
    A[r] = temp;
}

int Partition(vector<int> &A, int p, int r)
{
    int x = A[r];
    int i = p - 1;
    for (int j = p; j < r; j++)
    {
        if (A[j] <= x)
        {
            i++;
            Exchange(A, i, j);
        }
    }
    Exchange(A, i + 1, r);
    return i + 1;
}

void QuickSort(vector<int> &A, int p, int r)
{
    if (p < r)
    {
        int q = Partition(A, p, r);
        QuickSort(A, p, q - 1);
        QuickSort(A, q + 1, r);
    }
}

int main()
{
    vector<int> A = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "before: ";
    coutVector(A);

    QuickSort(A, 0, A.size() - 1);

    cout << "after: ";
    coutVector(A);

    return 0;
}