#if 1
#pragma once
#include<iostream>
template<class T>
class DynamicLinkedList
{
protected:
	class StructuralBody
	{
	public:
		T number;
		StructuralBody* next;
		StructuralBody(const T& Tnumber) :number(Tnumber), next(nullptr) {}
	};
	StructuralBody* front;
	StructuralBody* rear;
	StructuralBody& operator=(const StructuralBody& q) { return *this; }
	int count;
public:
	DynamicLinkedList();///不要管
	virtual ~DynamicLinkedList();////不要管
	bool IsEmpty() const;///判断是否为空
//	bool IsFull() const;
	bool CreatList(const T& Tnumber);///创建链表，作为类模板，参数可以是任意类型，任意数据源都可以存入链表
	bool ShowList() const;////展示链表
	



	///关于小球特殊链表
	///无

};




/// <summary>
///类实现,以下无必要不看
/// </summary>
/// <typeparam name="T"></typeparam>
template<typename T>
DynamicLinkedList<T>::DynamicLinkedList() :
	front(nullptr), rear(nullptr), count(0) {}
template<typename T>
DynamicLinkedList<T>::~DynamicLinkedList()
{
	StructuralBody* temp;
	while (front)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}
template<typename T>
bool DynamicLinkedList<T>::IsEmpty() const
{
	if (front)
		return false;
	else
		return true;
}
/*
bool DynamicLinkedList::IsFull() const
{
}
*/
template<typename T>
bool DynamicLinkedList<T>::CreatList(const T& Tnumber)////创建动态链表
{
	StructuralBody* add = new StructuralBody(Tnumber);
	if (!add)
		return false;
	//add->number = Tnumber;
	//add->next = nullptr;
	count++;
	if (!front)
		front = add;
	else
		rear->next = add;
	rear = add;
	return true;
}
template<typename T>
bool DynamicLinkedList<T>::ShowList() const
{
	if (!front)
		return false;
	StructuralBody* TraversalObject = front;
	while (TraversalObject)
	{
		std::cout << TraversalObject->number << " ";
		TraversalObject = TraversalObject->next;
	}
	std::cout << std::endl;
	return true;
}





#endif

