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
			system("CLS");//����
		std::cout<<"\t\t********************************************\n";
		std::cout<<"\t\t*  1.����һ��������  .................(1)  *\n";
		//std::cout<<"\t\t*  2.�ڵ������в���Ԫ���λ��.........(2)  *\n";
		//std::cout<<"\t\t*  3.�ڵ������в���Ԫ��...............(3)  *\n";
		//std::cout<<"\t\t*  4.�ڵ�������ɾ��Ԫ��...............(4)  *\n";
		//std::cout<<"\t\t*  5.��ת�б�.........................(5)  *\n";
		//std::cout<<"\t\t*  6.ɾ������������Ҫɾ����ֵ.........(6)  *\n";
		std::cout<<"\t\t*  7.�˳�              ...............(7)  *\n";
		std::cout<<"\t\t********************************************\n";
		std::cout<<"\n��ѡ��������룺";
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
