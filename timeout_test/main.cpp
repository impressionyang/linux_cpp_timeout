#include "ctimeout.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    CTimeOut timeout;
    int i = 0;

    timeout.set_timeout_msec(500);
    while (1) {
        if (timeout.is_timeout()) {
            cout << "i = " << i++ << endl;
            timeout.set_timeout_msec(500);
        }
    }
    
    return 0;
}