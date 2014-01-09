#include "StdAfx.h"
#include<GLUt.h>
#include<math.h>
#include<stdlib.h>

float WinWid=1400.0;
float WinHei=800.0;
float x=0.0, y=0.0, angle=-90.0, angle2=-120.0, angle3=-20.0, angle4=-20.0, i=500, j=195.0,k=513.0,q=172.0;
double x1=0.0, yy=0.0;



void Draw()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	glLineWidth(2);
	//Катапульта
	glBegin(GL_LINE_LOOP);//Нижня основа
	glVertex2f(-500,-275);
	glVertex2f(-330,-275);
	glVertex2f(-330,-285);
	glVertex2f(-500,-285);
	glEnd();

	glBegin(GL_LINE_LOOP);//Нижня основа лівий блок
	glVertex2f(-500,-170);
	glVertex2f(-490,-170);
	glVertex2f(-490,-275);
	glVertex2f(-500,-275);
	glEnd();

	glBegin(GL_LINE_LOOP);//Нижня основа правий блок
	glVertex2f(-340,-170);
	glVertex2f(-330,-170);
	glVertex2f(-330,-275);
	glVertex2f(-340,-275);
	glEnd();

	glPushMatrix();
	//glTranslated(x1,yy, 0.0);
	glBegin(GL_LINE_LOOP);//важіль катапульти
	glVertex2f(-550,-160);
	glVertex2f(-330,-160);
	glVertex2f(-330,-170);
	glVertex2f(-550,-170);
	glEnd();
	glPopMatrix();
	 //x1=300+150*sin(angle*(3.14/180));//траєкторія руху_1 кулі
	//yy=0+150*cos(angle*(3.14/180));

	
	glPushMatrix(); 
	glTranslatef(-335.0,-165.0,0.0);
	glutWireSphere(8.0,20,16);//колесо важеля
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-465.0,-280.0,0.0);
	glutWireSphere(17.0,15,15);//ліве колесо катапульти
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-365.0,-280.0,0.0);
	glutWireSphere(17.0,15,15);//праве колесо колесо катапульти
	glPopMatrix();

	
	
	glBegin(GL_LINE_LOOP);//Труба
	glVertex2f(514,-300);
	glVertex2f(514,200);
	glVertex2f(524,200);
	glVertex2f(524,-300);
	glEnd();
	
	glBegin(GL_LINE_LOOP);//Нижній блок
	glVertex2f(504,145);
	glVertex2f(504,165);
	glVertex2f(534,165);
	glVertex2f(534,145);
	glEnd();

	glBegin(GL_LINE_LOOP);//Правий_с
	glVertex2f(525,166);
	glVertex2f(525,186);
	glVertex2f(555,186);
	glVertex2f(555,166);
	glEnd();
	
	glBegin(GL_LINE_LOOP);//Правий_в
	glVertex2f(540,187);
	glVertex2f(540,207);
	glVertex2f(570,207);
	glVertex2f(570,187);
	glEnd();
	
	glBegin(GL_LINE_LOOP);//кошик
	glVertex2f(240,-40);
	glVertex2f(240,-170);
	glVertex2f(415,-170);
	glVertex2f(415,-40);
	glVertex2f(400,-40);
	glVertex2f(400,-155);
	glVertex2f(255,-155);
	glVertex2f(255,-40);
	glEnd();
		
	glBegin(GL_LINE_LOOP);//Ніжка кошика
    glVertex2f(307.5,-170);
	glVertex2f(347.5,-170);
	glVertex2f(347.5,-300);
	glVertex2f(307.5,-300);
	glEnd();
	
    glLineWidth(6);//підлога
	glBegin(GL_LINES);
	glVertex2f(-600, -300);
	glVertex2f(600, -300);
    glEnd();
	//початок  ковша катапульти за допомогою 2 сфер та білого прямокутника
	glPushMatrix();//перша сфера (ковш)
	glTranslatef(-580, -160, 0.0);
	glutSolidSphere(32.0, 15, 15);
	glPopMatrix();

	glColor3f(1.0, 1.0, 1.0);//колір сфери 2 (білої)
	glPushMatrix();
	glTranslatef(-580, -160, 0.0);
	glutSolidSphere(25.0, 15, 15);
	glPopMatrix();

	glBegin(GL_QUADS);//Білий прямокутник 
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-615,-120);
	glVertex2f(-540,-120);
	glVertex2f(-540,-159);
	glVertex2f(-615,-159);
	glEnd();//кінець ковша катапульти

	/*glBegin(GL_LINE_LOOP);//важіль катапульти
	glVertex2f(-550,-160);
	glVertex2f(-330,-160);
	glVertex2f(-330,-170);
	glVertex2f(-550,-170);
	glEnd();*/



	/*glBegin(GL_LINE_STRIP);//ковш катапульти
	glVertex2f(-610,-160);//ліва сторона
	glVertex2f(-610,-162.5);
	glVertex2f(-610,-165);
	glVertex2f(-607.5,-167.5);
	glVertex2f(-605,-170);
	glVertex2f(-606.5,-172.5);
	glVertex2f(-605,-175);
	glVertex2f(-599.,-177.5);
	glVertex2f(-597.5,-180);
	glVertex2f(-595,-182.5);
	glVertex2f(-590,-185);
	glVertex2f(-590,-187);
	glVertex2f(-585,-188.5);
	glVertex2f(-580,-190);//11 точка
	glVertex2f(-575,-188.5);
	glVertex2f(-570,-187.5);
	glVertex2f(-565,-185);
	glVertex2f(-560,-182.5);
	glVertex2f(-557,-180);
	glVertex2f(-554,-175);
	glVertex2f(-552,-170);
	glVertex2f(-550,-165);//3 праві крайні
	glVertex2f(-550,-160);
	glVertex2f(-550,-155);
	glEnd();*/
	
	glBegin(GL_QUADS);//внутрішній колір кошика
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


	glColor3f(1.0, 1.0, 1.0);//поправка
	glLineWidth(2);
	glBegin(GL_QUADS);
	glVertex2f(505, 146);
	glVertex2f(505, 164);
	glVertex2f(531, 164);
	glVertex2f(531, 146);
    glEnd();
	
	
	//           ------------------------початок роботи з анімацією----------------------
	  
	glColor3f(0.25, 0.25, 0.35);//колір сфери
glPushMatrix();
glTranslatef(-580, -160, 0.0);
glTranslatef(x, y, 0.0);//рух сфери
	  
glutSolidSphere(25.0, 15, 15);
glPopMatrix();
//---------------------------------------опис процесів при траекторії №1 руху кулі----------------------------------	   
        x=150.0+150*sin(angle*(3.14/180));//траєкторія руху_1 кулі
	    y=0+150*cos(angle*(3.14/180));
		       
		        glColor3f(1.0, 1.0, 1.0);// створення статичного сегмента ліхтаря(верхнього) під час траекторії руху 1
glPushMatrix();
glTranslatef(i, j, 0.0);
	            
                glBegin(GL_QUADS);// лівий верхній сегмент
	            glVertex3f(-35.0f, 13.0f, 0.0f);  // Слева вверху
                glVertex3f( 0.0f, 13.0f, 0.0f);  // Справа вверху
                glVertex3f( 0.0f,-10.0f, 0.0f);  // Справа внизу
                glVertex3f(-35.0f,-10.0f, 0.0f);  // Слева внизу
	            glEnd();
glPopMatrix();

               glColor3f(0.0, 0.0, 0.0);// лівий верхній сегмент(його контур)
glPushMatrix();
glTranslatef(i, j, 0.0);
	            
                glBegin(GL_LINE_LOOP);
	            glVertex3f(-35.0f, 13.0f, 0.0f);  // Слева вверху
                glVertex3f( 0.0f, 13.0f, 0.0f);  // Справа вверху
                glVertex3f( 0.0f,-10.0f, 0.0f);  // Справа внизу
                glVertex3f(-35.0f,-10.0f, 0.0f);  // Слева внизу
	            glEnd();
glPopMatrix();

				glColor3f(1.0, 1.0, 1.0);//створення статичного сегмента (середнього) ліхтаря під час траекторії руху 1
glPushMatrix();
glTranslatef(k, q, 0.0);
	            
                glBegin(GL_QUADS);
	            glVertex3f(-30.0f, 13.0f, 0.0f);  // Слева вверху
                glVertex3f( 0.0f, 13.0f, 0.0f);  // Справа вверху
                glVertex3f( 0.0f,-8.0f, 0.0f);  // Справа внизу
                glVertex3f(-30.0f,-8.0f, 0.0f);  // Слева внизу
				glEnd();
glPopMatrix();
	
				glColor3f(0.0, 0.0, 0.0);//створення статичного сегмента (середнього) (його контур)
glPushMatrix();
glTranslatef(k, q, 0.0);
	            
                glBegin(GL_LINE_LOOP);
	            glVertex3f(-30.0f, 13.0f, 0.0f);  // Слева вверху
                glVertex3f( 0.0f, 13.0f, 0.0f);  // Справа вверху
                glVertex3f( 0.0f,-8.0f, 0.0f);  // Справа внизу
                glVertex3f(-30.0f,-8.0f, 0.0f);  // Слева внизу
				glEnd();
glPopMatrix();
				angle+=1;
	            glEnd();
//---------------------------------------опис процесів при траекторії №2 руху кулі----------------------------------	
	if (angle>-30.0)
	{

		x=1293+700*sin(angle2*(3.14/180))*2;//траєкторія руху_2 кулі
	    y=-102+400*cos(angle2*(3.14/180))*1.17;

	             glColor3f(1.0, 1.0, 1.0);// створення статичного сегмента ліхтаря(верхнього) під час траекторії руху 2

glPushMatrix();
glTranslatef(i, j, 0.0);

	            glBegin(GL_QUADS);// лівий верхній сегмент
	            glVertex3f(-35.0f, 13.0f, 0.0f);  // Слева вверху
                glVertex3f( 0.0f, 13.0f, 0.0f);  // Справа вверху
                glVertex3f( 0.0f,-10.0f, 0.0f);  // Справа внизу
                glVertex3f(-35.0f,-10.0f, 0.0f);  // Слева внизу
	            glEnd();
glPopMatrix();

              glColor3f(0.0, 0.0, 0.0);// лівий верхній сегмент(його контур)
glPushMatrix();
glTranslatef(i, j, 0.0);
	            
                glBegin(GL_LINE_LOOP);
	            glVertex3f(-35.0f, 13.0f, 0.0f);  // Слева вверху
                glVertex3f( 0.0f, 13.0f, 0.0f);  // Справа вверху
                glVertex3f( 0.0f,-10.0f, 0.0f);  // Справа внизу
                glVertex3f(-35.0f,-10.0f, 0.0f);  // Слева внизу
	            glEnd();
glPopMatrix();



				glColor3f(1.0, 1.0, 1.0);//створення статичного сегмента (середнього) ліхтаря під час траекторії руху 2
	            glPushMatrix();
	            glTranslatef(k, q, 0.0);
	            glBegin(GL_QUADS);// лівий середній сегмент
	            glVertex3f(-30.0f, 13.0f, 0.0f);  // Слева вверху
                glVertex3f( 0.0f, 13.0f, 0.0f);  // Справа вверху
                glVertex3f( 0.0f,-8.0f, 0.0f);  // Справа внизу
                glVertex3f(-30.0f,-8.0f, 0.0f);  // Слева внизу
				glEnd();
glPopMatrix();
   }
	glColor3f(0.0, 0.0, 0.0);//створення статичного сегмента (середнього) (його контур)
glPushMatrix();
glTranslatef(k, q, 0.0);
	            
                glBegin(GL_LINE_LOOP);
	            glVertex3f(-30.0f, 13.0f, 0.0f);  // Слева вверху
                glVertex3f( 0.0f, 13.0f, 0.0f);  // Справа вверху
                glVertex3f( 0.0f,-8.0f, 0.0f);  // Справа внизу
                glVertex3f(-30.0f,-8.0f, 0.0f);  // Слева внизу
				glEnd();
glPopMatrix();
	
	//---------------------------------------опис процесів при траекторії №3 руху кулі---------------------------------
	angle2+=1;

	if (angle2>-10.0)
	{

	x=1025+400*cos(angle3*(3.14/180))*0.5;//траєкторія руху_3 кулі
	y=-393+500*sin(angle3*(3.14/180))*1.5;
	
                glColor3f(1.0, 1.0, 1.0);// рух сегмента ліхтаря
glPushMatrix();
glTranslatef(i, j, 0.0);
	            glBegin(GL_QUADS);// створення руху сегмента ліхтаря(верхнього) під час траекторії руху 3
	            glVertex3f(-35.0f, 13.0f, 0.0f);  // Слева вверху
                glVertex3f( 0.0f, 13.0f, 0.0f);  // Справа вверху
                glVertex3f( 0.0f,-10.0f, 0.0f);  // Справа внизу
                glVertex3f(-35.0f,-10.0f, 0.0f);  // Слева внизу
	            glEnd();
    
		if(i>539)// умова зупинки сегмента ліхтаря(верхнього)
		{
			      i=539;
			      j=195.0;
		}
		         i+=1.5;// траекторія руху сегмента ліхтаря(верхнього) під час траекторії 3 
	             j=195.0;
glPopMatrix();

  glColor3f(0.0, 0.0, 0.0);// рух сегмента ліхтаря(рух його контура)
glPushMatrix();
glTranslatef(i, j, 0.0);
	            glBegin(GL_LINE_LOOP);// створення руху сегмента ліхтаря(верхнього) під час траекторії руху 3
	            glVertex3f(-35.0f, 13.0f, 0.0f);  // Слева вверху
                glVertex3f( 0.0f, 13.0f, 0.0f);  // Справа вверху
                glVertex3f( 0.0f,-10.0f, 0.0f);  // Справа внизу
                glVertex3f(-35.0f,-10.0f, 0.0f);  // Слева внизу
	            glEnd();
    
		if(i>539)// умова зупинки сегмента ліхтаря(верхнього)
		{
			      i=539;
			      j=195.0;
		}
		         i+=1.5;// траекторія руху сегмента ліхтаря(верхнього) під час траекторії 3 
	             j=195.0;
glPopMatrix();
				

				glColor3f(1.0, 1.0, 1.0);// створення руху сегмента ліхтаря(середнього) під час траекторії руху 3
glPushMatrix();
glTranslatef(k, q, 0.0);
	            
                glBegin(GL_QUADS);
	            glVertex3f(-30.0f, 13.0f, 0.0f);  // Слева вверху
                glVertex3f( 0.0f, 13.0f, 0.0f);  // Справа вверху
                glVertex3f( 0.0f,-8.0f, 0.0f);  // Справа внизу
                glVertex3f(-30.0f,-8.0f, 0.0f);  // Слева внизу
				if(k>523)// умова зупинки
		{
			      k=523;
			      
		}
				k+=0.4;// траекторія руху сегмента ліхтаря(середнього) під час траекторії 3 
	            glEnd();
glPopMatrix();

glColor3f(0.0, 0.0, 0.0);// створення руху сегмента ліхтаря(середнього) під час траекторії руху 3
glPushMatrix();
glTranslatef(k, q, 0.0);
	            
                glBegin(GL_LINE_LOOP);
	            glVertex3f(-30.0f, 13.0f, 0.0f);  // Слева вверху
                glVertex3f( 0.0f, 13.0f, 0.0f);  // Справа вверху
                glVertex3f( 0.0f,-8.0f, 0.0f);  // Справа внизу
                glVertex3f(-30.0f,-8.0f, 0.0f);  // Слева внизу
				if(k>523)// умова зупинки
		{
			      k=523;
			      
		}
				k+=0.4;// траекторія руху сегмента ліхтаря(середнього) під час траекторії 3 
	            glEnd();
glPopMatrix();
	      }
	       angle3++;

//---------------------------------------опис процесів при траекторії №4 руху кулі---------------------------------
	if (angle3>147.0)
	   {
         x=929+200*sin(angle4*(3.14/180));//траєкторія руху_4 кулі
	     y=-160+200*cos(angle4*(3.14/180));
	   }

	          

glutSwapBuffers();
}

void Timer(int value)
{ 
	float a=0.0;
	int b;
	if (angle>-30.0)//умови швидкостей
		b=1;
	else b=0;
	if (angle2>-10.0)
	{
		b=2;
	}
	switch(value)//значення швидкостей
	{
	case 0: a=4;
		break;
	case 1: a=30;
		break;
	case 2: a=27;
		break;
	}
	
	glutPostRedisplay();
glutTimerFunc(a, Timer, b);
	
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
	//Ініціалізація
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(WinWid,WinHei);
	glutInitWindowPosition(0,0);
	glutCreateWindow("WOW");
	//Реєстрація
	glutDisplayFunc(Draw);
	glutTimerFunc(20, Timer, 0);
	Initialize();
	glutMainLoop();
return 0;
}