#pragma once


//初始化幕布
#define INITGRAPH(x) IMAGE x;\
initgraph(CURTAINLENGTH, CURTAINWIDTH, EX_NOCLOSE | EX_NOMINIMIZE | EX_SHOWCONSOLE);\
loadimage(&x, _T("C:/Users/19046/Desktop/新建文件夹/Project43/photo/1.jpg"), CURTAINLENGTH, CURTAINWIDTH, 0);\
putimage(0, 0, &img1)




////幕布大小
const int CURTAINLENGTH = 1282;//1282
const int CURTAINWIDTH = 600;



//关于球的源定义数据
const  int GLOBULEDATARADIUS = 100;//半径
#define GLOBULEDATAX 5//x数据
#define GLOBULEDATAY 5//y数据
