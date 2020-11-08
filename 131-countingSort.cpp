/*
 * @Author: PureDeep
 * @Date: 2020-11-05 16:10:16
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-07 15:42:46
 * @FilePath: \Exercise-CPlusPlus\131-countingSort.cpp
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

int findMin(vector<int> A)
{
    int min = A[0];
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    return min;
}

int findMax(vector<int> A)
{
    int max = A[0];
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

void CountingSort(vector<int> &A, vector<int> &B, int k) //k是最大值-最小值的差值范围
{
    vector<int> C(k);
    int min = findMin(A);
    int max = findMax(A);
    for (int i = 0; i < A.size(); i++) //计数,现在C[i]的值代表值为min+i的数在数组A中出现的次数
    {
        C[A[i] - min]++;
    }

    // coutVector(C);

    for (int i = 1; i < k; i++) //现在C[i]的值代表值小于等于min+i的数在数组A中出现的次数
    {
        C[i] += C[i - 1];
    }

    // coutVector(C);

    for (int i = A.size() - 1; i >= 0; i--)
    {
        B[C[A[i] - min] - 1] = A[i];
        C[A[i] - min]--;
    }

    // for (int i = 0; i < k; i++)
    // {
    //     int tmp = min + i; //c中第i个位置在A中的对应
    //     while (C[i] > 0)
    //     {
    //         B.push_back(tmp);
    //         C[i]--;
    //     }
    // }

    // cout << "B: ";
    // coutVector(B);
}

int main()
{
    vector<int> A = {95, 94, 91, 98, 99, 90, 99, 93, 91, 92};

    cout << "Before: ";
    coutVector(A);

    int min = findMin(A);
    int max = findMax(A);
    // cout << "min: " << min << endl;
    // cout << "max: " << max << endl;

    vector<int> B(A.size());
    // cout << "B: " << B.size() << endl;

    CountingSort(A, B, max - min + 1);

    // cout << B.size() << endl;

    // cout << "after: {";
    cout << "Answer: ";
    coutVector(B);

    return 0;
}