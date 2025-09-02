#if 1
#pragma once
#include<easyx.h>
#include<iostream>

#include"DEFINE.h"
#include<ctime>
#include<cstdlib>

/// <summary>
/// 小球数据初始化类声明
/// </summary>
class Globule
{
	class InitialBallModel///白整
	{//嵌套类对小球数据初始化
	public:
		int x;//球坐标
		int y;
		int radius;//球半径
		InitialBallModel() : radius(GLOBULEDATARADIUS)
		{
			x = rand() % (CURTAINLENGTH - 2 * GLOBULEDATARADIUS) +  GLOBULEDATARADIUS;
			y = rand() % (CURTAINWIDTH - 2 * GLOBULEDATARADIUS) +  GLOBULEDATARADIUS;
		}
		InitialBallModel(const int& Ix, const int& Iy) :x(Ix), y(Iy), radius(GLOBULEDATARADIUS) {}
		InitialBallModel(const int& Ix, const int& Iy, const int& Iradius) :x(Ix), y(Iy), radius(Iradius) {}
		virtual ~InitialBallModel() {}
	};
	InitialBallModel Ball;///作为结构体使用
public:
	Globule():Ball(){}	
	Globule(const int& Ix,const int& Iy) :Ball(Ix,Iy){}
	Globule(const int& Ix,const int& Iy,const int& Iradius) :Ball(Ix,Iy,Iradius){}
	~Globule() {}
	int& x() { return Ball.x; }
	int& y() { return Ball.y; }
	int& radius() { return Ball.radius; }
};


#endif