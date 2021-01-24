# linux cpp timeout package class

it is use to check timeout in a task in linux c plus plus

## how to use

  1. `include "ctimeout.h"`
  2. define object `CTimeOut timeout`
  3. set the timeout whit time `timeout.set_timeout_msec(1000)`
  4. then you can check if the time in your task is timeout you can use `timeout.is_timeout()`to get a bool return to confirm it
