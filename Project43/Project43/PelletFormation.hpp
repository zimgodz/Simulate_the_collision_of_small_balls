#if 1
#pragma once
#include<iostream>
#include<easyx.h>



#include"GLOBULE.hpp"
#include"LIST.hpp"
#include"GlobuleMotionLogic.hpp"

class PelletFormation :\
	public DynamicLinkedList<GlobuleMotionLogic>//,private GlobuleMotionLogic
{
private:
	int count = 0;
	//unsigned long long MaxNumber;
	IMAGE img;



public:
	/// <summary>
	/// 基本构造
	/// </summary>
	/// <param name="Iimg"></param>
	PelletFormation(IMAGE& Iimg) :img(Iimg) {}
	PelletFormation(IMAGE& Iimg, const unsigned long long& IMaxNumber) :\
		img(Iimg) {}
	~PelletFormation() ;





	/// <summary>
	/// 小球运动功能
	/// </summary>
	void DynamicPelletFormation(const int& count);///动态生成count个小球
};
#endif
