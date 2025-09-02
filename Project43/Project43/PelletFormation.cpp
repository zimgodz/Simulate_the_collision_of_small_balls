#if 1
#include<iostream>
#include<easyx.h>
#include<ctime>
#include<cstdlib>



#include"PelletFormation.hpp"
#include"DEFINE.h"




PelletFormation::~PelletFormation()
{
	DynamicLinkedList<GlobuleMotionLogic>::~DynamicLinkedList();
}



void PelletFormation::DynamicPelletFormation(const int &count)
{
	BeginBatchDraw();
	int i=0;
	ExMessage m;
	while(true)
	{
		m = getmessage(EX_MOUSE | EX_KEY);

		GlobuleMotionLogic Ball;
		putimage(0, 0, &img);
		if (i++<count)
			DynamicLinkedList<GlobuleMotionLogic>::CreatList(Ball);
		DynamicLinkedList<GlobuleMotionLogic>::StructuralBody* temp;
		temp = front;
		while(temp)///循环功能
		{
			temp->number.DrawingBallModel();
			temp->number.BallMovement();
			temp->number.ProcessingReachTheEdgeOfTheScreen();
			temp = temp->next;
		}
		FlushBatchDraw();
		Sleep(25);
		cleardevice();
	}
}





#endif






















////暂时没用
#if 0
void PelletFormation::Mnufacture()
{
	while (count < MaxNumber) {
		count++;
		//putimage(0, 0, &img);
		Globule DymaicBall;
		BallList.CreatList(DymaicBall);
		DymaicBall.DrawingBallModel();
		Sleep(10);
		//std::cout << DymaicBall.radius();
		//cleardevice();
	}
}
#endif