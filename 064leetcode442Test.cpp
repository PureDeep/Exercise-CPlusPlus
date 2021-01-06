/*
 * @Author: PureDeep
 * @Date: 2020-09-15 20:20:36
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-09-15 20:44:47
 * @FilePath: \ExerciseC++\064leetcode442Test.cpp
 */
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ans;
        if (nums.empty())
            return ans;
        int n = nums.size();
        cout << "before: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
        cout << "after: " << endl;
        for (int i = 0; i < n; i++)
        {
            int index = (nums[i] - 1) % n;
            nums[index] += n;
        }
        for (int i = 0; i < n; i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 2 * n)
                ans.push_back(i + 1);
        }
        return ans;
    }
};
// @lc code=end

int main()
{
    vector<int> test{4, 3, 2, 7, 8, 2, 3, 1};
    Solution solution;
    vector<int> ans = solution.findDuplicates(test);
    cout << "final: " << endl;
    for (int i = 0; i < test.size(); i++)
    {
        cout << test[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}