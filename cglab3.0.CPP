#include<iostream>
using namespace std;
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void textdisplay()
{
	cout<<"\n\t\t\t\tPROJECT No.:03\n";
	//cout<<"\t\t\tMidpoint Circle - Drawing Algorithm\n";
	cout<<"\n\t\t\t\t\t....sabina shrestha...\n";
	//cout<<"\n\t\t\t\tCo-ordinates:";
	//cout<<"\n\t\t\t\t\t(x,y)=(200,200)";
	//cout<<"\n\t\t\t\t\tradius(r)=150";
	getch();
}
void midpoint(int x1, int y1, int r)
{
       void circledraw(int,int,int,int);
	int x=0, y=r, p=1-r;
	while(x<=y)
	{
		x++;
		if(p<0)
			p=p+2*x+1;
		else
		{
			y--;
			p=p+2*x+1-2*y;
		}
		circledraw(x1,y1,x,y);
		//delay(100);
	}
	getch();
}
void circledraw(int x1, int y1, int x, int y)
{
	putpixel(x1+x,y1+y,7);
	putpixel(x1+y,y1+x,7);
	putpixel(x1-y,y1+x,7);
	putpixel(x1-x,y1+y,7);
	putpixel(x1-x,y1-y,7);
	putpixel(x1-y,y1-x,7);
	putpixel(x1+y,y1-x,7);
	putpixel(x1+x,y1-y,7);
	getch();
}
int main()
{
	int gd=DETECT,gm;
	int x=150, y=150, r=100,a;
       //	cout<<"Enter your choice:\n";
       //	cin>>a;
	textdisplay();
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	midpoint(x,y,r);
	return 0;
}
