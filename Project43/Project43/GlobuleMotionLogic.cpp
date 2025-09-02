#include<iostream>
#include<cmath>
#include"GlobuleMotionLogic.hpp"
#include"DEFINE.h"

void GlobuleMotionLogic::BallMovement()
{
	Ball.x() += BallMotion.TransverseAcceleration;
	Ball.y() += BallMotion.VerticalAcceleration;
}




void GlobuleMotionLogic::ProcessingReachTheEdgeOfTheScreen()
{
	if (Ball.x() + GLOBULEDATARADIUS >= CURTAINLENGTH)
	{
		Ball.x() = (CURTAINLENGTH - GLOBULEDATARADIUS);
		BallMotion.TransverseAcceleration *= -1;
	}
	if (Ball.x() - GLOBULEDATARADIUS <= 0) 
	{
		Ball.x() = 0 + GLOBULEDATARADIUS;
		BallMotion.TransverseAcceleration *= -1;
	}
	if (Ball.y() - GLOBULEDATARADIUS <= 0 )
	{
		Ball.y() = 0 + GLOBULEDATARADIUS;
		BallMotion.VerticalAcceleration *= -1;
	}
	if (Ball.y() + GLOBULEDATARADIUS >= CURTAINWIDTH) 
	{
		Ball.y() = CURTAINWIDTH - GLOBULEDATARADIUS;
		BallMotion.VerticalAcceleration *= -1;
	}
}


void GlobuleMotionLogic::DrawingBallModel()
{
	fillcircle(Ball.x(), Ball.y(), Ball.radius());
	//std::cout << "x:" << Ball.x() << std::endl;
	//std::cout << "y:" << Ball.y() << std::endl;
	//std::cout << "R:" << Ball.radius() << std::endl;
}





void GlobuleMotionLogic::BallCollisioLogic(GlobuleMotionLogic& S_BALL)
{
	int distance;
	distance = sqrt(pow(abs(Ball.x() - S_BALL.Ball.x()), 2)
		+ pow(abs(Ball.y() - S_BALL.Ball.y()), 2));
	if (distance <= 2 * GLOBULEDATARADIUS)
	{
		///防止两个球重叠
		



		///交换横向加速度
		BallMotion.TransverseAcceleration ^= S_BALL.BallMotion.TransverseAcceleration;
		S_BALL.BallMotion.TransverseAcceleration ^= BallMotion.TransverseAcceleration;
		BallMotion.TransverseAcceleration ^= S_BALL.BallMotion.TransverseAcceleration;

		///交换纵向加速度
		BallMotion.VerticalAcceleration ^= S_BALL.BallMotion.VerticalAcceleration;
		S_BALL.BallMotion.VerticalAcceleration ^= BallMotion.VerticalAcceleration;
		BallMotion.VerticalAcceleration ^= S_BALL.BallMotion.VerticalAcceleration;
		//std::cout << "1";

		///这俩到时候看看是否符合物理逻辑
	}
}
