#include <iostream>
#include <gl/glut.h>
#include <windows.h>  //////////UNTUK MELIHAT FURNITUR AGAR LEBIH JELAS DI HIDE SALAH SATU DINDING.

void inisial(void);
void tampilfen(void);
void keyboard(unsigned char, int, int);
//void mouse(int button, int state, int x, int y);
//void mouseMotion(int x, int y);
void size(int, int);

int is_depth;

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(200, 100);
	glutCreateWindow("Fendi Kurniawan - 672018227");
	inisial();
	glutDisplayFunc(tampilfen);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(size);
	glutMainLoop();
	return 0;
}

void inisial(void)
{
	glClearColor(0.1, 0.1, 0.1, 0.1);
	glMatrixMode(GL_PROJECTION);
	glEnable(GL_DEPTH_TEST);
	is_depth=1;
	glMatrixMode(GL_MODELVIEW);
	glPointSize(9.0);
	glLineWidth(4.0f);
}


void rumah()
{
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);//////////////////////dinding depan
	glVertex3f(-50.0, -30.0, 0.0);
	glVertex3f(-50.0, 30.0, 0.0);
	glVertex3f(50.0, 30.0, 0.0);
	glVertex3f(50.0, -30.0, 0.0);
	
	glColor3f(0.7, 0.7, 0.7);//////////////teras
	glVertex3f(-50.0, -30.0, 0.0);
	glVertex3f(-50.0, -30.0, 30.0);
	glVertex3f(50.0, -30.0, 30.0);
	glVertex3f(50.0, -30.0, 0.0);
	
	glColor3f(0.6, 0.6, 0.6);//////////////bawah
	glVertex3f(-50.0, -30.0, 0.0);
	glVertex3f(-50.0, -30.0, -50.0);
	glVertex3f(50.0, -30.0, -50.0);
	glVertex3f(50.0, -30.0, 0.0);
	
	glColor3f(0.8, 0.8, 0.8);/////////////dinding kanan
	glVertex3f(50.0, -30.0, -50.0);
	glVertex3f(50.0, 30.0, -50.0);
	glVertex3f(50.0, 30.0, 0.0);
	glVertex3f(50.0, -30.0, 0.0);
	
	glColor3f(0.8, 0.8, 0.8);/////////////dinding kiri
	glVertex3f(-50.0, -30.0, -50.0);
	glVertex3f(-50.0, 30.0, -50.0);
	glVertex3f(-50.0, 30.0, 0.0);
	glVertex3f(-50.0, -30.0, 0.0);
	
	glColor3f(0.6, 0.6, 0.6);////////////dinding belakang
	glVertex3f(-50.0, -30.0, -50.0);
	glVertex3f(-50.0, 30.0, -50.0);
	glVertex3f(50.0, 30.0, -50.0);
	glVertex3f(50.0, -30.0, -50.0);
	
	glColor3f(0.4, 0.4, 0.4);//////////////atap
	glVertex3f(-60.0, 30.0, 30.0);
	glVertex3f(-60.0, 30.0, -60.0);
	glVertex3f(60.0, 30.0, -60.0);
	glVertex3f(60.0, 30.0, 30.0);
	
	glColor3f(0.5, 0.3, 0.0);//////////////atap depan
	glVertex3f(-60.0, 30.0, 30.0);
	glVertex3f(-30.0, 60.0, -25.0);
	glVertex3f(30.0, 60.0, -25.0);
	glVertex3f(60.0, 30.0, 30.0);
	
	glColor3f(0.5, 0.3, 0.0);//////////////atap belakang
	glVertex3f(-60.0, 30.0, -60.0);
	glVertex3f(-30.0, 60.0, -25.0);
	glVertex3f(30.0, 60.0, -25.0);
	glVertex3f(60.0, 30.0, -60.0);
	
	glColor3f(0.4, 0.3, 0.0);//////////////atap kiri
	glVertex3f(-60.0, 30.0, 30.0);
	glVertex3f(-30.0, 60.0, -25.0);
	glVertex3f(-30.0, 60.0, -25.0);
	glVertex3f(-60.0, 30.0, -60.0);
	
	glColor3f(0.4, 0.3, 0.0);//////////////atap kanan
	glVertex3f(60.0, 30.0, 30.0);
	glVertex3f(30.0, 60.0, -25.0);
	glVertex3f(30.0, 60.0, -25.0);
	glVertex3f(60.0, 30.0, -60.0);
	glEnd();
	
}

void jendela()
{
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.3, 0.0);///////////////jendela depan kanan
	glVertex3f(16.0, -20.0, 0.3);
	glVertex3f(16.0, 20.0, 0.3);
	glVertex3f(40.0, 20.0, 0.3);
	glVertex3f(40.0, -20.0, 0.3);
	
	glColor3f(0.1, 0.1, 0.1);///////////////kaca1 jendela depan kanan
	glVertex3f(18.0, 0.5, 0.4);
	glVertex3f(18.0, 18.0, 0.4);
	glVertex3f(27.0, 18.0, 0.4);
	glVertex3f(27.0, 0.5, 0.4);
	
	glColor3f(0.1, 0.1, 0.1);///////////////kaca2 jendela depan kanan
	glVertex3f(38.0, 0.5, 0.4);
	glVertex3f(38.0, 18.0, 0.4);
	glVertex3f(28.0, 18.0, 0.4);
	glVertex3f(28.0, 0.5, 0.4);
	
	glColor3f(0.1, 0.1, 0.1);///////////////kaca3 jendela depan kanan
	glVertex3f(18.0, -0.5, 0.4);
	glVertex3f(18.0, -18.0, 0.4);
	glVertex3f(27.0, -18.0, 0.4);
	glVertex3f(27.0, -0.5, 0.4);
	
	glColor3f(0.1, 0.1, 0.1);///////////////kaca4 jendela depan kanan
	glVertex3f(38.0, -0.5, 0.4);
	glVertex3f(38.0, -18.0, 0.4);
	glVertex3f(28.0, -18.0, 0.4);
	glVertex3f(28.0, -0.5, 0.4);
	
	glColor3f(0.6, 0.3, 0.0);///////////////jendela depan kiri
	glVertex3f(-16.0, -20.0, 0.3);
	glVertex3f(-16.0, 20.0, 0.3);
	glVertex3f(-40.0, 20.0, 0.3);
	glVertex3f(-40.0, -20.0, 0.3);
	
	glColor3f(0.1, 0.1, 0.1);///////////////kaca1 jendela depan kiri
	glVertex3f(-18.0, 0.5, 0.4);
	glVertex3f(-18.0, 18.0, 0.4);
	glVertex3f(-27.0, 18.0, 0.4);
	glVertex3f(-27.0, 0.5, 0.4);
	
	glColor3f(0.1, 0.1, 0.1);///////////////kaca2 jendela depan kiri
	glVertex3f(-38.0, 0.5, 0.4);
	glVertex3f(-38.0, 18.0, 0.4);
	glVertex3f(-28.0, 18.0, 0.4);
	glVertex3f(-28.0, 0.5, 0.4);
	
	glColor3f(0.1, 0.1, 0.1);///////////////kaca3 jendela depan kiri
	glVertex3f(-18.0, -0.5, 0.4);
	glVertex3f(-18.0, -18.0, 0.4);
	glVertex3f(-27.0, -18.0, 0.4);
	glVertex3f(-27.0, -0.5, 0.4);
	
	glColor3f(0.1, 0.1, 0.1);///////////////kaca4 jendela depan kiri
	glVertex3f(-38.0, -0.5, 0.4);
	glVertex3f(-38.0, -18.0, 0.4);
	glVertex3f(-28.0, -18.0, 0.4);
	glVertex3f(-28.0, -0.5, 0.4);
	
	glColor3f(0.6, 0.3, 0.0);/////////////jendela tembok kiri
	glVertex3f(-50.1, -10.0, -30.0);
	glVertex3f(-50.1, 20.0, -30.0);
	glVertex3f(-50.1, 20.0, -10.0);
	glVertex3f(-50.1, -10.0, -10.0);
	
	glColor3f(0.1, 0.1, 0.1);///////////////kaca1 jendela tembok kiri
	glVertex3f(-50.2, -8.0, -28.0);
	glVertex3f(-50.2, 18.0, -28.0);
	glVertex3f(-50.2, 18.0, -12.0);
	glVertex3f(-50.2, -8.0, -12.0);
	
	glColor3f(0.6, 0.3, 0.0);/////////////jendela tembok kanan
	glVertex3f(50.1, -10.0, -30.0);
	glVertex3f(50.1, 20.0, -30.0);
	glVertex3f(50.1, 20.0, -10.0);
	glVertex3f(50.1, -10.0, -10.0);
	
	glColor3f(0.1, 0.1, 0.1);///////////////kaca1 jendela tembok kanan
	glVertex3f(50.2, -8.0, -28.0);
	glVertex3f(50.2, 18.0, -28.0);
	glVertex3f(50.2, 18.0, -12.0);
	glVertex3f(50.2, -8.0, -12.0);
	
	glColor3f(0.6, 0.3, 0.0);///////////////jendela belakang
	glVertex3f(-16.0, -0.05, -50.1);
	glVertex3f(-16.0, 20.0, -50.1);
	glVertex3f(-40.0, 20.0, -50.1);
	glVertex3f(-40.0, -0.05, -50.1);
	
	glColor3f(0.1, 0.1, 0.1);///////////////kaca1 jendela belakang
	glVertex3f(-18.0, 1.5, -50.2);
	glVertex3f(-18.0, 18.0, -50.2);
	glVertex3f(-27.0, 18.0, -50.2);
	glVertex3f(-27.0, 1.5, -50.2);
	
	glColor3f(0.1, 0.1, 0.1);///////////////kaca2 jendela belakang
	glVertex3f(-38.0, 1.5, -50.2);
	glVertex3f(-38.0, 18.0, -50.2);
	glVertex3f(-28.0, 18.0, -50.2);
	glVertex3f(-28.0, 1.5, -50.2);
	glEnd();
}

void furnitur()//KARPET, MEJA, LEMARI, JAM DINDING, KASUR, BANTAL.
{
	glBegin(GL_QUADS);
	glColor3f(0.7, 0.3, 0.0);///////////////pintu
	glVertex3f(-8.0, -30.0, 0.1);
	glVertex3f(-8.0, 10.0, 0.1);
	glVertex3f(8.0, 10.0, 0.1);
	glVertex3f(8.0, -30.0, 0.1);
	
	glColor3f(0.0, 0.0, 0.0);//////////////gagang pintu
	glVertex3f(5.0, -10.0, 0.2);
	glVertex3f(5.0, -9.0, 0.2);
	glVertex3f(6.0, -9.0, 0.2);
	glVertex3f(6.0, -10.0, 0.2);
	
	glColor3f(0.7, 0.7, 0.7);/////////////kasur1
	glVertex3f(-50.0, -30.0, -5.0);
	glVertex3f(-50.0, -25.0, -5.0);
	glVertex3f(-20.0, -25.0, -5.0);
	glVertex3f(-20.0, -30.0, -5.0);
	
	glColor3f(0.8, 0.8, 0.8);/////////////kasur2
	glVertex3f(-20.0, -30.0, -5.0);
	glVertex3f(-20.0, -25.0, -5.0);
	glVertex3f(-20.0, -25.0, -37.0);
	glVertex3f(-20.0, -30.0, -37.0);
	
	glColor3f(0.7, 0.7, 0.7);/////////////kasur3
	glVertex3f(-50.0, -30.0, -37.0);
	glVertex3f(-50.0, -25.0, -37.0);
	glVertex3f(-20.0, -25.0, -37.0);
	glVertex3f(-20.0, -30.0, -37.0);
	
	glColor3f(1.0, 1.0, 1.0);/////////////kasur4
	glVertex3f(-50.0, -25.0, -5.0);
	glVertex3f(-50.0, -25.0, -37.0);
	glVertex3f(-20.0, -25.0, -37.0);
	glVertex3f(-20.0, -25.0, -5.0);
	
	glColor3f(0.6, 0.6, 0.6);/////////////kasur5
	glVertex3f(-50.0, -24.9, -5.0);
	glVertex3f(-50.0, -24.9, -25.0);
	glVertex3f(-20.0, -24.9, -25.0);
	glVertex3f(-20.0, -24.9, -5.0);
	
	glColor3f(0.7, 0.7, 0.7);/////////////bantal
	glVertex3f(-40.0, -23.0, -30.0);
	glVertex3f(-40.0, -23.0, -37.0);
	glVertex3f(-30.0, -23.0, -37.0);
	glVertex3f(-30.0, -23.0, -30.0);
	
	glColor3f(0.6, 0.6, 0.6);/////////////bantal2
	glVertex3f(-40.0, -24.9, -30.0);
	glVertex3f(-40.0, -23.0, -30.0);
	glVertex3f(-30.0, -23.0, -30.0);
	glVertex3f(-30.0, -24.9, -30.0);
	
	glColor3f(0.7, 0.7, 0.7);/////////////bantal3
	glVertex3f(-40.0, -24.9, -37.0);
	glVertex3f(-40.0, -23.0, -37.0);
	glVertex3f(-30.0, -23.0, -37.0);
	glVertex3f(-30.0, -24.9, -37.0);
	
	glColor3f(0.6, 0.6, 0.6);/////////////bantal4
	glVertex3f(-30.0, -24.9, -30.0);
	glVertex3f(-30.0, -23.0, -30.0);
	glVertex3f(-30.0, -23.0, -37.0);
	glVertex3f(-30.0, -24.9, -37.0);
	
	glColor3f(0.6, 0.6, 0.6);/////////////bantal5
	glVertex3f(-40.0, -24.9, -30.0);
	glVertex3f(-40.0, -23.0, -30.0);
	glVertex3f(-40.0, -23.0, -37.0);
	glVertex3f(-40.0, -24.9, -37.0);
	
	glColor3f(0.8, 0.3, 0.0);///////////////lemari
	glVertex3f(-50.0, -30.0, -40.0);
	glVertex3f(-50.0, 20.0, -40.0);
	glVertex3f(-25.0, 20.0, -40.0);
	glVertex3f(-25.0, -30.0, -40.0);
	
	glColor3f(0.7, 0.3, 0.0);///////////////lemari2
	glVertex3f(-25.0, -30.0, -40.0);
	glVertex3f(-25.0, 20.0, -40.0);
	glVertex3f(-25.0, 20.0, -50.0);
	glVertex3f(-25.0, -30.0, -50.0);
	
	glColor3f(0.7, 0.3, 0.0);///////////////lemari3
	glVertex3f(-50.0, 20.0, -40.0);
	glVertex3f(-50.0, 20.0, -50.0);
	glVertex3f(-25.0, 20.0, -50.0);
	glVertex3f(-25.0, 20.0, -40.0);
	
	glColor3f(1.0, 1.0, 1.0);///////////////lemari4
	glVertex3f(-48.0, -22.0, -39.9);
	glVertex3f(-48.0, 18.0, -39.9);
	glVertex3f(-33.0, 18.0, -39.9);
	glVertex3f(-33.0, -22.0, -39.9);
	
	glColor3f(0.7, 0.3, 0.0);///////////////lemari5
	glVertex3f(-49.9, -30.0, -40.0);
	glVertex3f(-49.9, 20.0, -40.0);
	glVertex3f(-49.9, 20.0, -50.0);
	glVertex3f(-49.9, -30.0, -50.0);
	
	glColor3f(0.0, 0.0, 0.0);///////////////gagang lemari
	glVertex3f(-34.0, -4.0, -39.9);
	glVertex3f(-34.0, 4.0, -39.9);
	glVertex3f(-33.0, 4.0, -39.9);
	glVertex3f(-33.0, -4.0, -39.9);
	
	glColor3f(0.3, 0.3, 0.3);///////////////karpet
	glVertex3f(-20.1, -29.9, -25.0);
	glVertex3f(15.0, -29.9, -50.0);
	glVertex3f(50.0, -29.9, -25.0);
	glVertex3f(15.0, -29.9, -0.0);
	
	glColor3f(0.6, 0.6, 0.6);///////////////karpet2
	glVertex3f(-10.1, -29.8, -25.0);
	glVertex3f(15.0, -29.8, -40.0);
	glVertex3f(40.0, -29.8, -25.0);
	glVertex3f(15.0, -29.8, -10.0);
	
	glColor3f(0.8, 0.8, 0.8);///////////////karpet3
	glVertex3f(-0.1, -29.7, -25.0);
	glVertex3f(15.0, -29.7, -30.0);
	glVertex3f(30.0, -29.7, -25.0);
	glVertex3f(15.0, -29.7, -20.0);
	
	glColor3f(0.5, 0.5, 0.5);///////////////meja
	glVertex3f(-5.0, -20.0, -10.0);
	glVertex3f(-5.0, -20.0, -25.0);
	glVertex3f(30.0, -20.0, -25.0);
	glVertex3f(30.0, -20.0, -10.0);
	
	glColor3f(0.7, 0.3, 0.0);///////////////meja2
	glVertex3f(-5.0, -20.0, -10.0);
	glVertex3f(-5.0, -20.0, -25.0);
	glVertex3f(-5.0, -24.0, -25.0);
	glVertex3f(-5.0, -24.0, -10.0);
	
	glColor3f(0.7, 0.3, 0.0);///////////////meja3
	glVertex3f(30.0, -20.0, -10.0);
	glVertex3f(30.0, -20.0, -25.0);
	glVertex3f(30.0, -24.0, -25.0);
	glVertex3f(30.0, -24.0, -10.0);
	
	glColor3f(0.6, 0.3, 0.0);///////////////meja4
	glVertex3f(30.0, -20.0, -25.0);
	glVertex3f(-5.0, -20.0, -25.0);
	glVertex3f(-5.0, -24.0, -25.0);
	glVertex3f(30.0, -24.0, -25.0);
	
	glColor3f(0.6, 0.3, 0.0);///////////////meja5
	glVertex3f(30.0, -20.0, -10.0);
	glVertex3f(-5.0, -20.0, -10.0);
	glVertex3f(-5.0, -24.0, -10.0);
	glVertex3f(30.0, -24.0, -10.0);
	
	glColor3f(0.5, 0.3, 0.0);///////////////kaki meja
	glVertex3f(30.0, -20.0, -10.0);
	glVertex3f(30.0, -24.0, -10.0);
	glVertex3f(30.0, -29.9, -20.0);
	glVertex3f(30.0, -29.9, -25.0);
	
	glColor3f(0.5, 0.3, 0.0);///////////////kaki meja2
	glVertex3f(-5.0, -20.0, -10.0);
	glVertex3f(-5.0, -24.0, -10.0);
	glVertex3f(-5.0, -29.9, -20.0);
	glVertex3f(-5.0, -29.9, -25.0);
	
	glColor3f(0.5, 0.3, 0.0);///////////////kaki meja3
	glVertex3f(-5.0, -20.0, -25.0);
	glVertex3f(-5.0, -24.0, -25.0);
	glVertex3f(-5.0, -29.9, -15.0);
	glVertex3f(-5.0, -29.9, -10.0);
	
	glColor3f(0.5, 0.3, 0.0);///////////////kaki meja4
	glVertex3f(30.0, -20.0, -25.0);
	glVertex3f(30.0, -24.0, -25.0);
	glVertex3f(30.0, -29.9, -15.0);
	glVertex3f(30.0, -29.9, -10.0);
	
	glColor3f(0.0, 0.0, 0.5);////////////jam dinding
	glVertex3f(5.0, 5.0, -49.9);
	glVertex3f(5.0, 15.0, -49.9);
	glVertex3f(15.0, 15.0, -49.9);
	glVertex3f(15.0, 5.0, -49.9);
	
	glColor3f(0.0, 0.0, 0.9);////////////jam dinding2
	glVertex3f(5.0, 5.0, -48.0);
	glVertex3f(5.0, 15.0, -48.0);
	glVertex3f(15.0, 15.0, -48.0);
	glVertex3f(15.0, 5.0, -48.0);
	
	glColor3f(1.0, 1.0, 1.0);////////////jam dinding3
	glVertex3f(7.0, 7.0, -47.9);
	glVertex3f(7.0, 13.0, -47.9);
	glVertex3f(13.0, 13.0, -47.9);
	glVertex3f(13.0, 7.0, -47.9);
	
	glColor3f(0.0, 0.0, 0.5);////////////jam dinding4
	glVertex3f(5.0, 5.0, -49.9);
	glVertex3f(5.0, 15.0, -49.9);
	glVertex3f(5.0, 15.0, -48.0);
	glVertex3f(5.0, 5.0, -48.0);
	
	glColor3f(0.0, 0.0, 0.5);////////////jam dinding5
	glVertex3f(15.0, 5.0, -49.9);
	glVertex3f(15.0, 15.0, -49.9);
	glVertex3f(15.0, 15.0, -48.0);
	glVertex3f(15.0, 5.0, -48.0);
	
	glColor3f(0.0, 0.0, 0.8);////////////jam dinding6
	glVertex3f(5.0, 15.0, -49.9);
	glVertex3f(15.0, 15.0, -49.9);
	glVertex3f(15.0, 15.0, -48.0);
	glVertex3f(5.0, 15.0, -48.0);
	
	glColor3f(0.0, 0.0, 0.8);////////////jam dinding7
	glVertex3f(5.0, 5.0, -49.9);
	glVertex3f(15.0, 5.0, -49.9);
	glVertex3f(15.0, 5.0, -48.0);
	glVertex3f(5.0, 5.0, -48.0);
	glEnd();
}
void jarumjam()
{
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);////////////jarum jam dinding
	glVertex3f(10.0, 10.0, -47.9);
	glVertex3f(10.0, 12.5, -47.9);
	glEnd();
	
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);////////////jarum jam dinding2
	glVertex3f(10.2, 9.8, -47.9);
	glVertex3f(8.0, 10.0, -47.9);
	glEnd();
}
void tampilfen(void)
{
	if (is_depth)
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	else
		glClear(GL_COLOR_BUFFER_BIT);
	
	rumah();
	jendela();
	furnitur();
	jarumjam();
	glPushMatrix();
	glPopMatrix();
	glutSwapBuffers();
}
void keyboard(unsigned char key, int x, int y)
{
	switch (key){
		case 'w':
		case 'W':
			glTranslatef(0.0, 0.0, 3.0);
			break;
		case 'd':
		case 'D':
			glTranslatef(3.0, 0.0, 0.0);
			break;
		case 's':
		case 'S':
			glTranslatef(0.0, 0.0, -3.0);
			break;
		case 'a':
		case 'A':
			glTranslatef(-3.0, 0.0, 0.0);
			break;
		case '2':
			glRotatef(2.0, 1.0, 0.0, 0.0);
			break;
		case '6':
			glRotatef(2.0, 0.0, 1.0, 0.0);
			break;
		case '4':
			glRotatef(-2.0, 0.0, 1.0, 0.0);
			break;
		case '1':
			glRotatef(2.0, 0.0, 0.0, 1.0);
			break;
		case '3':
			glRotatef(-2.0, 0.0, 0.0, 1.0);
			break;
		case '5':
			if(is_depth){
				is_depth = 0;
				glDisable(GL_DEPTH_TEST);
			}
			else{
				is_depth = 1;
				glEnable(GL_DEPTH_TEST);
			}
	}
	tampilfen();
}
void size(int lebar, int tinggi)
{
	if(tinggi == 0) tinggi = 1;
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
	glTranslatef(0.0, -5.0, -150.0);
	glMatrixMode(GL_MODELVIEW);
}


