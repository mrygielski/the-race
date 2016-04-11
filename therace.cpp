
//Micha³ 'REGi' Rygielski
//http://regi.gamedev.pl
//email: mrygielski@o2.pl

#include <windows.h>	
#include <gl\gl.h>	
#include <time.h>
#include <math.h>


#include "biblioteki\api_gry.h"
#include "biblioteki\loadbmp.h"
#include "biblioteki\zmienne.h"
#include "biblioteki\fps.h"
#include "biblioteki\procedury.h"
#include "biblioteki\init_gry.h"



void pokaz_gre(GLvoid)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glLoadIdentity();

	glTranslatef(0,0,-20);

	glRotatef(310,1,0,0);
	
	glRotatef(wart+90+cam_rot,0,0,1);
	glTranslatef(-xx,-zz,0);
		
	glPushMatrix();

	ShowBackground();

	glTranslatef(xx,zz,2);
	glPushMatrix();		
	CAR(xx,zz,0,3,5,2);

	
	glPopMatrix();	

	glPopMatrix();	

}



int WINAPI WinMain(	HINSTANCE	hInstance,
					HINSTANCE	hPrevInstance,
					LPSTR		lpCmdLine,
					int			nCmdShow)
{
		

	if (CreateGLWindow("THE RACE v1.0",640,480,16,fullscreen)==FALSE) return 0;


	for (mapx=0; mapx<20; mapx++)
	for (mapy=0; mapy<20; mapy++) {
		mapa[mapx][mapy]=5;
	}

	for (mapx=5; mapx<10; mapx++) {
  	  mapa[3][mapx]=6;
	  mapa[4][mapx]=6;
  	  mapa[10][mapx]=6;
	  mapa[11][mapx]=6;
	}

	for (mapy=3; mapy<12; mapy++) {
  	  mapa[mapy][3]=6;
	  mapa[mapy][4]=6;
  	  mapa[mapy][10]=6;
	  mapa[mapy][11]=6;
	}


    InitTextures();

	InitGame();
	
	done2=false;

	while(!done2)
	{if (PeekMessage(&msg,NULL,0,0,PM_REMOVE)){if (msg.message==WM_QUIT){done2=TRUE;}else{TranslateMessage(&msg);DispatchMessage(&msg);}}else
	
	{

		kat=wart*(3.14f/180);
     	xx=xx+(float)cos(kat)*predkosc;
		zz=zz-(float)sin(kat)*predkosc;

		pokaz_gre();
		oblicz_fps();

		SwapBuffers(hDC);

		
		if (keys[VK_UP]) { if (predkosc<0.4f) predkosc+=0.001f; } else if (predkosc>0) predkosc-=0.0005f;
		if (keys[VK_SPACE]) predkosc-=0.005f;
		if (predkosc<0) predkosc=0;
		if (keys[VK_LEFT]) {wart-=1.5f*predkosc*10; if (cam_rot<14) cam_rot+=0.3f;} else if (cam_rot>0) cam_rot-=1;
		if (keys[VK_RIGHT]) {wart+=1.5f*predkosc*10; if (cam_rot>-14) cam_rot-=0.3f;} else if (cam_rot<0) cam_rot+=1;

		
		if (keys[VK_ESCAPE])
		{
			done2=TRUE;
		}

	}}





	KillGLWindow(); 
	return (msg.wParam);
}