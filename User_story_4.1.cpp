#include "StdAfx.h"
#include<GLUt.h>
#include<math.h>
#include<stdlib.h>

float WinWid=1400.0;
float WinHei=800.0;
float x=0.0, y=0.0,//���������� ��� ����� �����
x1=0.0, x2=0.0,//���������� ��� ���� ����� ������ ���� ������� �����
angle=-90.0, angle2=-120.0, angle3=-20.0, angle4=-20.0,//���� ��� ���� �� ������� ������ ���
angle5=-90.0,//��� ��� ������� ���� ����� ����������
angle6=-90.0, angle7=-90.0, angle8=-90.0, angle9=-90.0, angle10=-90.0, angle11=-90.0, angle12=-90.0,//���� ��� ������� ���� ����� ����������
X=-550.0, X1=-330.0, Y=-170.0, Y1=-160.0, X2=-550.0, X3=-330.0, Y2=-170.0, Y3=-160.0,//���������� ��� ����� ����������
x_d=930.0,//���������� ��� ������� ���� ������ ���
Xk=-612.0, Yk=-160.0, Xk2=-606.0, Yk2=-172, Xk3=-600.0, Yk3=-180.0, Xk4=-580.0, Yk4=-188.0, Xk5=-560.0, Yk5=-180.0, Xk6=-554.0, Yk6=-172.0, Xk7=-548.0, Yk7=-160.0,//���������� ��� ����� ����������
angle_1=-90.0, angle2_1=-120.0, angle3_1=-20.0, angle4_2=-20.0,//���������� ��� ����� �����
a_k=0.0, a_k_1=0.0,//������� ����� ��� ���������� ���� ����������
x_1=0.0, y_1=0.0,//���������� ��� ����� �����
x_d_1=930.0;//���������� ��� ������� ���� ������ ���
void Draw()
{

	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);//���� ���������
	//-------------------------------------------ϳ�����------------------------------------------
	glLineWidth(6);//������� ���
	glBegin(GL_LINES);
	glVertex2f(-600, -300);
	glVertex2f(600, -300);
    glEnd();
	//-----------------------------------------------˳����-----------------------------------------------
	glLineWidth(2);//������� ���
	glBegin(GL_LINE_LOOP);//�����
	glVertex2f(514,-300);
	glVertex2f(514,200);
	glVertex2f(524,200);
	glVertex2f(524,-300);
	glEnd();
	glBegin(GL_LINE_LOOP);//����� ����
	glVertex2f(504,144);
	glVertex2f(504,165);
	glVertex2f(534,165);
	glVertex2f(534,144);
	glEnd();
	
	glPushMatrix();
	glTranslatef(x1,0.0,0.0);//��� ���������� �����
	glBegin(GL_LINE_LOOP);//˳���_�
	glVertex2f(483,166);
	glVertex2f(483,186);
	glVertex2f(513,186);
	glVertex2f(513,166);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);//���� ����������� �����
	glBegin(GL_QUADS);
	glVertex2f(484, 167);
	glVertex2f(484, 185);
	glVertex2f(512, 185);
	glVertex2f(512, 167);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(x2,0.0,0.0);//��� ��������� �����
	glColor3f(0.0, 0.0, 0.0);//���� ���������
	glBegin(GL_LINE_LOOP);//˳���_�
	glVertex2f(468,187);
	glVertex2f(468,207);
	glVertex2f(498,207);
	glVertex2f(498,187);
    glEnd();
	glColor3f(1.0, 1.0, 1.0);//���� ����������� �����
	glBegin(GL_QUADS);
	glVertex2f(470, 188);
	glVertex2f(470, 205);
	glVertex2f(497, 205);
	glVertex2f(497, 188);
	glEnd();
	glPopMatrix();
	
	glColor3f(0.0, 0.0, 0.0);//���� ���������
		glBegin(GL_LINE_LOOP);//������_�
	glVertex2f(525,166);
	glVertex2f(525,186);
	glVertex2f(555,186);
	glVertex2f(555,166);
	glEnd();
	glBegin(GL_LINE_LOOP);//������_�
	glVertex2f(540,187);
	glVertex2f(540,207);
	glVertex2f(570,207);
	glVertex2f(570,187);
	glEnd();
	//��������
	glColor3f(1.0, 1.0, 1.0);//���� ���������
	glBegin(GL_QUADS);
	glVertex2f(505, 145);
	glVertex2f(505, 164);
	glVertex2f(531, 164);
	glVertex2f(531, 145);
    glEnd();
	//----------------------------------------------����������----------------------------------------------------------------
	glColor3f(0.0, 0.0, 0.0);//���� ���������
	glBegin(GL_LINE_LOOP);//����� ������
	glVertex2f(-500,-275);
	glVertex2f(-330,-275);
	glVertex2f(-330,-285);
	glVertex2f(-500,-285);
	glEnd();

	glBegin(GL_LINE_LOOP);//����� ������ ���� ����
	glVertex2f(-500,-170);
	glVertex2f(-490,-170);
	glVertex2f(-490,-275);
	glVertex2f(-500,-275);
	glEnd();

	glBegin(GL_LINE_LOOP);//����� ������ ������ ����
	glVertex2f(-340,-170);
	glVertex2f(-330,-170);
	glVertex2f(-330,-275);
	glVertex2f(-340,-275);
	glEnd();

	glPushMatrix();
	//glTranslated(x1,yy, 0.0);
    glBegin(GL_LINE_LOOP);//����� ����������
	glVertex2f(X,Y);
	glVertex2f(X1,Y1);
	glVertex2f(X2,Y2);
	glVertex2f(X3,Y3);
	glEnd();
	glPopMatrix();
	
	//�������� ���� ����� ����������
	X=-330+210*sin(angle5*(3.14/180));
	Y=-160+210*cos(angle5*(3.14/180));
	X3=-340+210*sin(angle5*(3.14/180));
	Y3=-170+210*cos(angle5*(3.14/180));
	 X1=-325+10*sin(angle5*(3.14/180));
	Y1=-160+10*cos(angle5*(3.14/180));
	X2=-335+10*sin(angle5*(3.14/180));
	Y2=-170+10*cos(angle5*(3.14/180));
	angle5+=0.95;


	
	glPushMatrix(); 
	glTranslatef(-335.0,-165.0,0.0);
	glutWireSphere(8.0,20,16);//������ ������
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-465.0,-280.0,0.0);
	glutWireSphere(17.0,15,15);//��� ������ ����������
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-365.0,-280.0,0.0);
	glutWireSphere(17.0,15,15);//����� ������ ������ ����������
	glPopMatrix();
	//����
	glLineWidth(10);
	glPushMatrix();
	glBegin(GL_LINE_STRIP);
	glVertex2f(Xk, Yk);
	glVertex2f(Xk2, Yk2);
	glVertex2f(Xk3, Yk3);

	glVertex2f(Xk4, Yk4);

	glVertex2f(Xk5, Yk5);
	glVertex2f(Xk6, Yk6);
	glVertex2f(Xk7, Yk7);
	glEnd();
	glPopMatrix();
	//�������� ���� ����� ����������
	
	Xk=-338+264*sin(angle12*(3.14/180));
	Yk=-167+264*cos(angle12*(3.14/180));
	Xk2=-336+264*sin(angle11*(3.14/180));
	Yk2=-174+268*cos(angle11*(3.14/180));
	Xk3=-338+262*sin(angle10*(3.14/180));
	Yk3=-180+262*cos(angle10*(3.14/180));
	Xk4=-338+242*sin(angle9*(3.14/180));
	Yk4=-188+242*cos(angle9*(3.14/180));
	Xk5=-338+222*sin(angle7*(3.14/180));
	Yk5=-180+222*cos(angle7*(3.14/180));
	Xk6=-338+216*sin(angle8*(3.14/180));
	Yk6=-172+216*cos(angle8*(3.14/180));
	Xk7=-340+210*sin(angle6*(3.14/180));
	Yk7=-167+210*cos(angle6*(3.14/180));
	angle6+=1.;
	angle7+=0.97;
	angle8+=0.96;
	angle9+=0.85;
	angle10+=0.84;
	angle11+=0.83;
	angle12+=0.89;

//------------------------------------------------------�����----------------------------
	
	glColor3f(0.0, 0.0, 0.0);//���� ���������
	glLineWidth(2);
	glBegin(GL_LINE_LOOP);//�����
	glVertex2f(240,-40);
	glVertex2f(240,-170);
	glVertex2f(415,-170);
	glVertex2f(415,-40);
	glVertex2f(400,-40);
	glVertex2f(400,-155);
	glVertex2f(255,-155);
	glVertex2f(255,-40);
	glEnd();
		glBegin(GL_LINE_LOOP);//ͳ��� ������
glVertex2f(307.5,-170);
	glVertex2f(347.5,-170);
	glVertex2f(347.5,-300);
	glVertex2f(307.5,-300);
	glEnd();
	
	glBegin(GL_QUADS);//�������� ���� ������
	glColor3f(0.75, 0.75, 0.75);
	glVertex2f(241,-41);
	glVertex2f(241,-169);
	glVertex2f(254,-169);
	glVertex2f(254,-41);
	
	glVertex2f(254,-169);
	glVertex2f(254,-156);
	glVertex2f(401,-156);
	glVertex2f(401,-169);

	glVertex2f(401,-169);
	glVertex2f(414,-169);
	glVertex2f(414,-41);
	glVertex2f(401,-41);
	glEnd();
	//---------------------------------------���� �� �� ���_1-------------------------------------------
	glColor3f(0.25, 0.25, 0.45);//���� �����
	glPushMatrix();
	glTranslatef(-580, -160, 0.0);
	glTranslatef(x, y, 0.0);//��� �����
	glutSolidSphere(25.0, 15, 15);
	glPopMatrix();
	
	x=209.0+210*sin(angle*(3.14/180));//�������� ����_1
	y=3+210*cos(angle*(3.14/180));
	angle+=1;//������� ���� ����� �����
	
	
	
	if (angle>-30.0)//����� ���� ������� �� ����� ����������� ���� ����� �� ����� ����������
	{

		x=818+550*sin(angle2*(3.14/180))*1.5;//�������� ����_2
	y=-14+340*cos(angle2*(3.14/180))*1.17;
	
	angle6-=2.;//�������� ��� �����
	angle7-=1.94;
	angle8-=1.92;
	angle9-=1.7;
	angle10-=1.68;
	angle11-=1.66;
	angle12-=1.78;
	a_k++;//�������� ��� ������� ����� ����������
	
	angle5-=1.9;//�������� ��� ����� ����������
	
	if (a_k>60)//����� ������� ����� ����������
	{
	angle5+=0.95;//������� ����� ����������
	}
	
	if(angle6<-89)//����� ������� ����� ����������
	{
		
		angle6+=1.0;//������� �����
	angle7+=0.97;
	angle8+=0.96;
	angle9+=0.85;
	angle10+=0.84;
	angle11+=0.83;
	angle12+=0.89;
	}
	}
	
angle2+=1;

	if (angle2>16.0)//����� ���� �������
	{

		x=1108+400*cos(angle3*(3.14/180))*0.5;//�������� ����_3
	y=-314+500*sin(angle3*(3.14/180))*1.5;
	
	//-----------------------------��� �����----------------------------------------
	x1+=0.25;//�������� ���������� �����
	x2++;//�������� ��������� �����
	if (x1==11)//����� ������� ���� �����
	{x1-=0.25;
	x2--;}

	}
	angle3++;

	if (angle3>154.0)//����� ���� �������
	{
y=-160+200*cos(angle4*(3.14/180));//�������� ����_4
	x=x_d;
	x_d-=1.5;
	if (x_d<859) //����� ������� �����
	{
		x_d+=1.5;//����� ���� ����� ����
	

	//---------------------------------------���� �� �� ���_2-------------------------------------------
   angle=-90.0;//���������� ���� ����������
	glColor3f(0.45, 0.25, 0.25);//���� �����
	glPushMatrix();
	glTranslatef(-580, -160, 0.0);
	glTranslatef(x_1, y_1, 0.0);//��� �����
	glutSolidSphere(25.0, 15, 15);
	glPopMatrix();

	x_1=209.0+210*sin(angle_1*(3.14/180));//�������� ����_1
	y_1=3+210*cos(angle_1*(3.14/180));
	angle_1+=1;//������� ���� ����� �����
	
	if (angle_1>-30.0)//����� ���� ������� �� ����� ����������� ���� ����� �� ����� ����������
	{

		x_1=818+550*sin(angle2_1*(3.14/180))*1.5;//�������� ����_2
	y_1=-14+340*cos(angle2_1*(3.14/180))*1.17;
	
	angle6-=2.;//�������� ��� �����
	angle7-=1.94;
	angle8-=1.92;
	angle9-=1.7;
	angle10-=1.68;
	angle11-=1.66;
	angle12-=1.78;
	angle5-=1.9;//�������� ��� ����� ����������
	a_k_1++;
	if(angle6<-89.0)// ����� ������� ���� ����� �� ����� ����������
	{
	angle6+=1.0;//������� �����
	angle7+=0.97;
	angle8+=0.96;
	angle9+=0.85;
	angle10+=0.84;
	angle11+=0.83;
	angle12+=0.89;
	}
	if(a_k_1>59.0)
	{
	angle5+=0.95;//������� ����� ����������
	}

	}
	


	angle2_1+=1;

	if (angle2_1>18.0)//����� ���� �������
	{

	x_1=1180+550*cos(angle3_1*(3.14/180))*0.5;//�������� ����_3
	y_1=-298+500*sin(angle3_1*(3.14/180))*1.5;
	}
	
	angle3_1++;

	if (angle3_1>155.0)//����� ���� �������
	{
y_1=-160+200*cos(angle4*(3.14/180));//�������� ����_4
	x_1=x_d_1;
	x_d_1-=1.5;
	if (x_d_1<907) //����� ������� �����
	{
		x_d_1+=1.5;//����� ���� ����� ����
	}
}
	}
}

















	glutSwapBuffers();
}

void Timer(int value)
{ 
	float velocity=0.0;
	int con;
	if (angle>-30.0)//����� ���������� ����� ���
		con=1;
	else con=0;
	if (angle2>16.0)
	{
		con=2;
	}
	//����� ���������� ����� ���
	if(angle_1<=-30.0)
	{if (angle_1>-90.0)
		con=3;
	}
	if(angle_1>-30.0)
	{
		con=4;
	}
	if (angle2_1>18.0)
	{
		con=5;
	}
	switch(value)//�������� ����������
	{
	case 0: velocity=50;
		break;
	case 1: velocity=30;
		break;
	case 2: velocity=50;
		break;
	case 3: velocity=50;
		break;
	case 4: velocity=30;
		break;
	case 5: velocity=50;
		break;
	}
	
	glutPostRedisplay();
glutTimerFunc(velocity, Timer, con);
	
}

void Initialize()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-WinWid/2, WinWid/2, -WinHei/2, WinHei/2, -200.0, 200.0);
	glMatrixMode(GL_MODELVIEW);

}

int main(int argc, char** argv)
{
	//�����������
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(WinWid,WinHei);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Project");
	//���������
	glutDisplayFunc(Draw);
	glutTimerFunc(20, Timer, 0);
	Initialize();
	glutMainLoop();
return 0;
}