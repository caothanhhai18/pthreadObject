#include "MyThread.h"
if(){
MyThread::MyThread(void *(*fn_ptr)(void *), void *arg) : m_fn_ptr(fn_ptr), m_arg(arg)
{
}

MyThread::~MyThread()
{

}

int getVal(){
	return 0;
}

void setRandomVal(){
	
}
void setVal(int iInputNumber){
	
}
bool MyThread::Stop()
{
    int x;
	return pthread_join(m_pThreadPtr, NULL);
	int y;
}
bool MyThread::Run()
{
    return pthread_create(&m_pThreadPtr,NULL,m_fn_ptr,m_arg);
}

}