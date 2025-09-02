#include<iostream>
#include"LIST.hpp"



 void List()
{
	int ListCount = 0;
	int choice;
	char exit='N';
	DynamicLinkedList<int> LIST;
	do
	{
		if (ListCount++ != 0)
			system("CLS");//清屏
		std::cout<<"\t\t********************************************\n";
		std::cout<<"\t\t*  1.创建一个单链表  .................(1)  *\n";
		//std::cout<<"\t\t*  2.在单链表中查找元表的位序.........(2)  *\n";
		//std::cout<<"\t\t*  3.在单链表中插入元表...............(3)  *\n";
		//std::cout<<"\t\t*  4.在单链表中删除元表...............(4)  *\n";
		//std::cout<<"\t\t*  5.逆转列表.........................(5)  *\n";
		//std::cout<<"\t\t*  6.删除链表所有想要删除的值.........(6)  *\n";
		std::cout<<"\t\t*  7.退出              ...............(7)  *\n";
		std::cout<<"\t\t********************************************\n";
		std::cout<<"\n请选择操作代码：";
		//std::cin.ignore();
		std::cin >> choice;
		switch (choice)
		{
		case 1 :
			std::cout<<"Please enter a string of number"
				<<"separated by a space(END WITH q):";
			int list_number;
			while (std::cin >> list_number)
			{
				if (!LIST.CreatList(list_number))
				{
					std::cerr << "FALSE!" << std::endl;
				}
			}
			std::cin.ignore();
			std::cin.clear();
			std::cout << "Before is your list which you created:"
				<< std::endl;
			if (!LIST.ShowList())
				std::cout << "Failed to display the linked list!" << std::endl;
			system("pause");
			std::cin.ignore();
			break;
		case 7:
			std::cin.ignore();
			std::cout << "Please enter Y or y to confirm exit:";
			exit = std::cin.get();
			std::cin.ignore();
			break;
		default:
			std::cerr << "Invalid iputs!" << std::endl;
		}
		
	} while (exit != 'y' && exit != 'Y');
}
