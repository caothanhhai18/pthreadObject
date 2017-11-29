#include "MyThread.h"

MyThread::MyThread(void *(*fn_ptr)(void *), void *arg) : m_fn_ptr(fn_ptr), m_arg(arg)
{
}

MyThread::~MyThread()
{

}

bool MyThread::Stop()
{
    return pthread_join(m_pThreadPtr, NULL);
}

bool MyThread::Run()
{
    return pthread_create(&m_pThreadPtr,NULL,m_fn_ptr,m_arg);
}

