void InitTextures()
{
	texture[0]=LoadTexture("gfx/car1.bmp");
	texture[1]=LoadTexture("gfx/car2.bmp");
	texture[2]=LoadTexture("gfx/car3.bmp");
	texture[3]=LoadTexture("gfx/car4.bmp");
	texture[4]=LoadTexture("gfx/car5.bmp");
	texture[5]=LoadTexture("gfx/trawa.bmp");
	texture[6]=LoadTexture("gfx/droga.bmp");
}


int INITlights()
{
	//tworzenie zmiennych
	float swiatlo_otoczenia[] = { 0.4f, 0.4f, 0.4f, 0.4f};
	float swiatlo_rozproszone[] = { 0.7f, 0.7f, 0.7f, 0.7f};
	float swiatlo_odbite[] = { 1.0f, 0.0f, 0.0f, 1.0f};
	float swiatlo_pozycja[] = { 0.01f,0.01f,0.02f,0.01f};

	
	glLightModeli( GL_LIGHT_MODEL_TWO_SIDE, 1);// przeliczaj kolor obydwu
	glEnable( GL_LIGHTING);// w³¹cz analizê oœwietlenia
	glLightfv( GL_LIGHT0, GL_AMBIENT, swiatlo_otoczenia);// œwiat³o oblewaj¹ce
	glLightfv( GL_LIGHT0, GL_POSITION, swiatlo_pozycja);// Ustawienie ¿arówki w okreœlonym miejscu 
	glEnable( GL_LIGHT0);	// w³¹czenie ¿arówki nr 0
	glEnable( GL_COLOR_MATERIAL);// aktywowanie analizy w³aœciwoœci materia³u
	glColorMaterial( GL_FRONT_AND_BACK, GL_AMBIENT);
	glColorMaterial( GL_FRONT_AND_BACK, GL_DIFFUSE);
	glColorMaterial( GL_FRONT, GL_SPECULAR);
	glMateriali( GL_FRONT, GL_SHININESS, 128);
    
	glClearColor( 1.0, 1.0, 1.0, 1.0); //czyszcznie buforu na dany kolor

	return true;
}


void InitGame()
{
//	glClearColor(0,0,0,0);

    INITlights();



	xx=30;
	zz=30;


	kat=0;
	wart=180;

	TimerInit();
	framerate=.01f;


}