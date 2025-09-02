#include<iostream>
#include"GLOBULE.hpp"
//#include<easyx.h>
//#include"LIST.hpp"
#include"DEFINE.h"
//#include"DYNAMICPELLETFORMATION.hpp"
#include"GlobuleMotionLogic.hpp"
#include<ctime>
#include<cstdlib>
#include"PelletFormation.hpp"




/// </summary>
void GlobuleTest()
{

    INITGRAPH(img1);
    GlobuleMotionLogic Ball1{ CURTAINLENGTH / 4 ,CURTAINWIDTH / 2,GLOBULEDATARADIUS ,20,5 };
    GlobuleMotionLogic Ball2{ CURTAINLENGTH / 4*3,CURTAINWIDTH / 2,GLOBULEDATARADIUS ,-5,15 };
    BeginBatchDraw();
    while (true) {
        putimage(0,0,&img1);
        Ball1.DrawingBallModel();
        Ball1.BallMovement();
        Ball1.ProcessingReachTheEdgeOfTheScreen();
        Ball2.DrawingBallModel();
        Ball2.BallMovement();
        Ball2.ProcessingReachTheEdgeOfTheScreen();
        Ball1.BallCollisioLogic(Ball2);
        FlushBatchDraw();
        Sleep(10);
    }
    EndBatchDraw();
    while (1);
	closegraph();
}