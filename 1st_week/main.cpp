#include <stdio.h>
#include <iostream>

#include <thread>

using namespace std;

int n = 0;

void thread_function(int count)
{
    for(int i=0; i<count; i++)
        n++;
}

int main()
{
    thread _t1(thread_function, 1000000);
    thread _t2(thread_function, 1000000);

    _t1.join();
    _t2.join();

    cout << n << endl;

    return 0;
}