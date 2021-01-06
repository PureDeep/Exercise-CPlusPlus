/*
 * @Author: PureDeep
 * @Date: 2020-12-07 11:23:07
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-07 20:33:21
 * @FilePath: \Exercise-CPlusPlus\239taskScheduling.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
//任务类
class task
{
public:
    int a; //任务序号
    int d; //任务最晚结束时间
    int w; //任务延迟完成惩罚
    task(int a, int d, int w) : a(a), d(d), w(w){};
};

//判断任务a的结束时间是否早于b
bool a_less_b_finishTime(const task &a, const task &b)
{
    return a.d < b.d;
}

//判断任务的惩罚时间是否更大
bool a_more_b_cost(const task &a, const task &b)
{
    return a.w > b.w;
}

//选择任务并返回结果数组
vector<task> taskSelect(vector<task> tasks)
{
    vector<task> result;
    vector<task> tmpTasks = tasks;
    sort(tmpTasks.begin(), tmpTasks.end(), a_more_b_cost); //按照惩罚递减

    int tmpSize = tmpTasks.size();
    vector<int> visit(tmpSize);

    for (int i = 0; i < tmpSize; ++i)
    {
        int flag = 0;
        for (int j = tmpTasks[i].d; j > 0; --j)
        {
            if (!visit[j])
            {
                visit[j] = 1;
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            result.push_back(tmpTasks[i]);
        }
    }
    return result;
}

//找到被抛弃的任务
vector<task> notInResult(vector<task> const &v, vector<task> const &result)
{
    vector<task> surplus;
    int vSize = v.size();
    int rSize = result.size();
    for (int i = 0; i < vSize; i++)
    {
        int flag = 0;
        for (int j = 0; j < rSize; j++)
        {
            if (v[i].a == result[j].a)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            surplus.push_back(v[i]);
        }
    }
    return surplus;
}

int getPunish(vector<task> surplus)
{
    int size = surplus.size();
    int punish = 0;
    for (int i = 0; i < size; i++)
    {
        punish += surplus[i].w;
    }
    return punish;
}

void printTaskSchedule(vector<task> &a)
{
    vector<task> selectedTask = taskSelect(a);
    vector<task> notSelectedTask = notInResult(a, selectedTask);
    sort(selectedTask.begin(), selectedTask.end(), a_less_b_finishTime);
    sort(notSelectedTask.begin(), notSelectedTask.end(), a_less_b_finishTime);
    cout << "抛弃任务：";
    for (int i = 0; i < notSelectedTask.size(); i++)
    {
        cout << notSelectedTask[i].a << " ";
    }
    cout << endl;
    cout << "任务顺序：";
    for (int i = 0; i < selectedTask.size(); i++)
    {
        cout << selectedTask[i].a << " ";
    }
    for (int i = 0; i < notSelectedTask.size(); i++)
    {
        cout << notSelectedTask[i].a << " ";
    }
    cout << endl;
    cout << "总惩罚：";
    cout << getPunish(notSelectedTask) << endl;
}

void printTask(vector<task> const &v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i].a << "\t";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << v[i].d << "\t";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << v[i].w << "\t";
    }
    cout << endl;
}

int main(int argc, char *argv[])
{
    int a[] = {4, 2, 4, 3, 1, 4, 6};
    int b[] = {70, 60, 50, 40, 30, 20, 10};
    int size = sizeof(a) / sizeof(a[0]);
    vector<task> v; //用来存储任务信息
    //录入任务信息
    for (int i = 0; i < size; i++)
    {
        task tmp = task(i + 1, a[i], b[i]);
        v.push_back(tmp);
    }
    printTask(v);
    printTaskSchedule(v);
    cout << "--------wi->max{W1,W2...Wn}-Wi--------" << endl;
    int c[] = {0, 10, 20, 30, 40, 50, 60};
    vector<task> u; //用来存储任务信息
    //录入任务信息
    for (int i = 0; i < size; i++)
    {
        task tmp = task(i + 1, a[i], c[i]);
        u.push_back(tmp);
    }
    printTask(u);
    printTaskSchedule(u);
    return 0;
}