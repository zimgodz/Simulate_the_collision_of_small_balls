#pragma once


//��ʼ��Ļ��
#define INITGRAPH(x) IMAGE x;\
initgraph(CURTAINLENGTH, CURTAINWIDTH, EX_NOCLOSE | EX_NOMINIMIZE | EX_SHOWCONSOLE);\
loadimage(&x, _T("C:/Users/19046/Desktop/�½��ļ���/Project43/photo/1.jpg"), CURTAINLENGTH, CURTAINWIDTH, 0);\
putimage(0, 0, &img1)




////Ļ����С
const int CURTAINLENGTH = 1282;//1282
const int CURTAINWIDTH = 600;



//�������Դ��������
const  int GLOBULEDATARADIUS = 100;//�뾶
#define GLOBULEDATAX 5//x����
#define GLOBULEDATAY 5//y����
