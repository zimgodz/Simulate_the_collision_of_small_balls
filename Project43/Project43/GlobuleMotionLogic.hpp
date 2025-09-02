/////运动逻辑类///////
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
	class AcceleratedVelocity//大白搭
	{
	public:
		int TransverseAcceleration;
		int VerticalAcceleration;
		AcceleratedVelocity()
		{
			TransverseAcceleration = rand() % 50 -25;//最好固定一个速度
			VerticalAcceleration = rand() % 50 -25;
		}
		AcceleratedVelocity(const int& TAcc, const int& VAcc):\
			TransverseAcceleration(TAcc), VerticalAcceleration(VAcc) {}
		~AcceleratedVelocity() {}
	};

	AcceleratedVelocity BallMotion;
	Globule Ball;



public:
	GlobuleMotionLogic() :Ball(),BallMotion() {}///构造函数
	GlobuleMotionLogic(const int& Gx, const int& Gy, const int& Gradius, const int& GTAcc, const int& GVAcc) :\
		Ball(Gx, Gy, Gradius), BallMotion(GTAcc, GVAcc) {}////构造函数
	~GlobuleMotionLogic() {}




	/// <summary>
	/// 方法
	/// </summary>
	void BallMovement();///让小球移动起来
	void ProcessingReachTheEdgeOfTheScreen();///对小球到达边缘进行处理，若到达屏幕边缘，速度变为负
	void DrawingBallModel();///绘制小球
	void BallCollisioLogic(GlobuleMotionLogic& S_BALL);///小球碰撞会反弹
};











#endif