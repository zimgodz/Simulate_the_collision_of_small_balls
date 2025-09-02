/////�˶��߼���///////
#if 1
#pragma once

#include<iostream>
#include<easyx.h>
#include<ctime>
#include<cstdlib>

#include"GLOBULE.hpp"
#include"LIST.hpp"


class GlobuleMotionLogic :\
	private Globule
{
	class AcceleratedVelocity//��״�
	{
	public:
		int TransverseAcceleration;
		int VerticalAcceleration;
		AcceleratedVelocity()
		{
			TransverseAcceleration = rand() % 50 -25;//��ù̶�һ���ٶ�
			VerticalAcceleration = rand() % 50 -25;
		}
		AcceleratedVelocity(const int& TAcc, const int& VAcc):\
			TransverseAcceleration(TAcc), VerticalAcceleration(VAcc) {}
		~AcceleratedVelocity() {}
	};

	AcceleratedVelocity BallMotion;
	Globule Ball;



public:
	GlobuleMotionLogic() :Ball(),BallMotion() {}///���캯��
	GlobuleMotionLogic(const int& Gx, const int& Gy, const int& Gradius, const int& GTAcc, const int& GVAcc) :\
		Ball(Gx, Gy, Gradius), BallMotion(GTAcc, GVAcc) {}////���캯��
	~GlobuleMotionLogic() {}




	/// <summary>
	/// ����
	/// </summary>
	void BallMovement();///��С���ƶ�����
	void ProcessingReachTheEdgeOfTheScreen();///��С�򵽴��Ե���д�����������Ļ��Ե���ٶȱ�Ϊ��
	void DrawingBallModel();///����С��
	void BallCollisioLogic(GlobuleMotionLogic& S_BALL);///С����ײ�ᷴ��
};











#endif