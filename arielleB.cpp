//Arielle Battle
//Arielle's game source code

#include <iostream>
#include "font.hi"


void ShowArielleName(int x, int y)
{
	r.bot = gl.yres - 20;
	r.left = 10;
	r.center = 0;
	ggprint8b(&r, 16, c, "Arielle Battle");
}


