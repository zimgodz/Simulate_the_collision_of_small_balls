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
	DynamicLinkedList();///��Ҫ��
	virtual ~DynamicLinkedList();////��Ҫ��
	bool IsEmpty() const;///�ж��Ƿ�Ϊ��
//	bool IsFull() const;
	bool CreatList(const T& Tnumber);///����������Ϊ��ģ�壬�����������������ͣ���������Դ�����Դ�������
	bool ShowList() const;////չʾ����
	



	///����С����������
	///��

};




/// <summary>
///��ʵ��,�����ޱ�Ҫ����
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
bool DynamicLinkedList<T>::CreatList(const T& Tnumber)////������̬����
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

