/*
 * @Author: PureDeep
 * @Date: 2020-10-20 16:32:31
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-20 16:32:44
 * @FilePath: \Exercise-CPlusPlus\000-quickSort.cpp
 */
void quick_sort(int q[], int l, int r)
{
    if (l >= r)
        return;

    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while (i < j)
    {
        do
            i++;
        while (q[i] < x);
        do
            j--;
        while (q[j] > x);
        if (i < j)
            swap(q[i], q[j]);
    }
    quick_sort(q, l, j), quick_sort(q, j + 1, r);
}