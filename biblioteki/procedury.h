
int Rectangle(float x1, float y1, float z1, float x2, float y2, float z2,
              float x3, float y3, float z3, float x4, float y4, float z4, int texture)
{
    glBindTexture(GL_TEXTURE_2D, texture);
    glBegin(GL_TRIANGLE_STRIP);
	    glTexCoord2f(1,0);glVertex3f(x1,y1,z1);
	    glTexCoord2f(1,1);glVertex3f(x2,y2,z2);
	    glTexCoord2f(0,0);glVertex3f(x3,y3,z3);
	    glTexCoord2f(0,1);glVertex3f(x4,y4,z4);
    glEnd();
	return true;
}

void CAR(float x1, float y1, float z1, float width, float height, float thickness)
{


		glRotatef(-wart+90,0,0,1);
	
	    glPushMatrix();
		

		glColor4ub(255,255,255,255);

	    glPushMatrix();
		glTranslatef(-(width/2),0-(height/2),0-(thickness/2)); 
		

		Rectangle(0,0,0, width, 0, 0,
				  0,0+height,0, width,0+height,0, texture[4]);

		Rectangle(0,0,0+thickness/2, 0+width, 0, 0+thickness/2,
				  0,0+height,0+thickness, 0+width,0+height,0+thickness, texture[3]);

		Rectangle(0,0+height,0, 0+width,0+height,0,
				  0,0+height,0+thickness, 0+width,0+height,0+thickness, texture[4]);

		Rectangle(0,0,0, 0+width,0,0,
				  0,0,0+thickness/2, 0+width,0,0+thickness/2, texture[2]);


		Rectangle(0,0,0, 0, 0, 0+thickness/2,
				  0, 0+height, 0, 0, 0+height, 0+thickness, texture[1]);

		Rectangle(0+width,0,0, 0+width, 0, 0+thickness/2,
				  0+width, 0+height, 0, 0+width, 0+height, 0+thickness, texture[0]);

        glPopMatrix();		

        glPopMatrix();		



}


int nrtext;

void ShowBackground()
{

	for (mapx=0; mapx<15; mapx++)
	for (mapy=0; mapy<15; mapy++) {

	  
	  nrtext=mapa[mapx][mapy];
	  glBindTexture(GL_TEXTURE_2D, texture[nrtext]);		
	  glBegin(GL_QUADS);								
			glTexCoord2f(0.0f, 0.0f); glVertex3f(-2.0f+mapx*4, -2.0f+mapy*4,  -1.0f);	
			glTexCoord2f(1.0f, 0.0f); glVertex3f( 2.0f+mapx*4, -2.0f+mapy*4,  -1.0f);	
			glTexCoord2f(1.0f, 1.0f); glVertex3f( 2.0f+mapx*4,  2.0f+mapy*4,  -1.0f);	
			glTexCoord2f(0.0f, 1.0f); glVertex3f(-2.0f+mapx*4,  2.0f+mapy*4,  -1.0f);
      glEnd();

	}


}

