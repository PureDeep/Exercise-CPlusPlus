#include <iostream>

using namespace std;

class C1{
    int m_A;
};

struct C2
{
    int m_B;
};


int main()
{
   C1 cc;
   //cc.m_A = 10;
   C2 cc2;
   cc2.m_B = 20;
   return 0;
}