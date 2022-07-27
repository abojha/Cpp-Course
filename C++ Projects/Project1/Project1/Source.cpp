
#include<iostream>
#include "msoftcon.h"
using namespace std;

struct circle {
	int xCo, yCo;
	int radius;
	color fillcolor;
	fstyle fillstyle;
};

void circ_draw(circle c)
{
	set_color(c.fillcolor);
	set_fill_style(c.fillstyle);
	draw_circle(c.xCo, c.yCo, c.radius);

}
int main()
{
	init_graphics();

	circle c1 = { 15, 7, 2, cBLUE, X_FILL };
	circ_draw(c1);
	set_cursor_pos(1, 25);
	cout << "Hello World" << endl;
	return 0;
}