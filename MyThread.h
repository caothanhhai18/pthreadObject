#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <pthread.h>
#include <iostream>
using namespace std;

class MyThread
{
public:
    MyThread(void *(*fn_ptr)(void *), void* arg);
    ~MyThread();
    /*!
     * \brief Stop
     * \return
     */
    bool Stop();
    bool Run();
private:
    void * (*m_fn_ptr)(void*);
    void* m_arg;
    pthread_t m_pThreadPtr;

};

#endif // MYTHREAD_H
