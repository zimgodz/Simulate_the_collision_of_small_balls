#if 1
#pragma once
#include<iostream>
template<class T>
class Stack
{
protected:
	class StackBody
	{
		T Data;
		StackBody* next;
		StackBody(const T& TDate) :Data(TData), next(nullptr);
	};
	StackBody* base;
	StackBody* top;
	StackBody* Shift;
	unsigned int stacksize;
	unsigned int count;
	T DeleteData;

	StackBody& operator=(const StackBody& q) { return *this; }
public:
	Stack(const int& a);
	~Stack();
	bool PushStack(const T& Idata);
	bool PopStack();
};







/// <summary>
/// 类实现,没必要不看
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="a"></param>

template<typename T>
Stack<T>::Stack(const int& a):\
base(nullptr),top(nullptr),stacksize(a),count(0){}




template<typename T>
Stack<T>::~Stack() {}



template<typename T>
bool Stack<T>::PushStack(const T& IData)
{
	if (count++ < stacksize)
	{
		shift = new StackBody(IData);
		if (!base)
			exit();
		top = shift->next;
		if (!base)
			base = shift;
		return true;
	}
	else
		return false;
}













#endif