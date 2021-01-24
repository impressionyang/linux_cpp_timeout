#ifndef _TIMEOUT_H_
#define _TIMEOUT_H_

#include <sys/time.h>
#include <unistd.h>

class CTimeOut
{
public:
    int set_timeout_msec(int msec);
    int set_timeout_sec(int sec);
    bool is_timeout();

private:
    timeval timeout_set;
    timeval timeout_now;
};

#endif