#include<graphics.h>
#include<iostream>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd, &gm, (char*)"");
	rectangle(2,2,150,180);
	putpixel(400,400,YELLOW);
	line(2,2,400,400);
	circle(150,300,600);
	ellipse(50,100,220,360,100,150);
	cout<<"max x pixexl"<<getmaxx();
	cout<<endl<<"maxm y pixel"<<getmaxy();
	
	setcolor(RED);
	rectangle(2,2.5,250,150);
	setfillstyle(HATCH_FILL,WHITE);
	circle(150,150,40);
	floodfill(250,250,WHITE);
	
	getch();
	return 0;
}
