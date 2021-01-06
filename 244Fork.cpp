/*
 * @Author: PureDeep
 * @Date: 2020-12-19 10:31:21
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-12-19 10:37:23
 * @FilePath: \Exercise-CPlusPlus\244Fork.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <sys/types.h>
#include <unistd.h>

pid_t getpid(void);
pid_t getppid(void);
pid_t fork(void);

using namespace std;

void unix_error(char *msg)
{
    fprintf(stderr, "%s\n", msg, strerror(errno));
    exit(0);
}

pid_t Fork(void)
{
    pid_t pid;

    if ((pid = fork()) < 0)
    {
        unix_error("Fork error");
        return pid;
    }
}

int main(int argc, char *argv[])
{
    pid_t pid;
    int x = 1;

    pid = Fork();
    if (pid == 0)
    {
        printf("Child: x= %d\n", ++x);
        exit(0);
    }

    printf("Parent: x= %d\n", --x);
    return 0;
}