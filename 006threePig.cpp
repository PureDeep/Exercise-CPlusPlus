/*
 * @Author: PureDeep
 * @Date: 2020-08-18 16:03:27
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-18 16:30:42
 * @FilePath: \C++\ExerciseC++\06threePig.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    cout << "输入第一只小猪的重量：" << endl;
    cin >> num1;
    cout << "输入第二只小猪的重量：" << endl;
    cin >> num2;
    cout << "输入第三只小猪的重量：" << endl;
    cin >> num3;

    if(num1 > num2){
        if(num1 > num3){
            cout << "小猪1最重！" << endl;
        }else{
            cout << "小猪3最重！" << endl;
        }
    }else{
        if(num2 > num3){
            cout << "小猪3最重！" << endl;
        }else{
            cout << "小猪2最重！" << endl;
        }
    }

}