#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<dos.h>

int main()
{
	float x,y,x1,y1,x2,y2,dx,dy,step;
	int i,gd=DETECT,gm=0;
	//detectgraph(&gd.&gm)
	initgraph(&gd,&gm," ");
	printf("\n Enter x1 cordinate: ");
	scanf("%f",&x1);
	printf("\n Enter y1 cordinate: ");
	scanf("%f",&y1);
	printf("\n Enter x2 cordinate: ");
	scanf("%f",&x2);
	printf("\n Enter y2 cordinate: ");
	scanf("%f",&y2);
	
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	
	if(dx>=dy)
	step=dx;
	else
	step=dy;
	
	dx=dx/step;
	dy=dy/step;
	
	x=x1;
	y=y1;
	i=1;
	
	while(i<=step)
	{
		putpixel(x,y,WHITE);
		x=x+dx;
		y=y+dy;
		i=i+1;
		delay(50);
	}
	getch();
	closegraph();
}