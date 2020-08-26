/*
 * @Author: PureDeep
 * @Date: 2020-08-25 18:01:23
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-08-25 18:26:35
 * @FilePath: \C++\ExerciseC++\034Ӣ����������.cpp
 */
#include<iostream>
#include<string>
using namespace std;

struct Hero{
    string name;
    int age;
    string sex;
};

void sortHArr(Hero arr[], int len){
    for(int i = 0; i < len - 1; i++){
        for(int j = 0; j < len -1 - i; j++){
            if(arr[j].age > arr[j + 1].age){
                Hero temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printHArr(Hero arr[], int len){
    for(int i = 0; i < len ; i++){
        cout << arr[i].name << endl;
    }
}

int main(){
    Hero hArr[5] = {
        {"����", 23, "��"},
        {"����", 22, "��"},
        {"�ŷ�", 20, "��"},
        {"����", 21, "��"},
        {"����", 19, "Ů"}
    };
    int len = sizeof(hArr) / sizeof(hArr[0]);
    sortHArr(hArr, len);
    printHArr(hArr, len);
    return 0;
}