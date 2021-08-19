#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>


   char name1[9]={'P','l','a','y','e','r',' ','1','\0'};
   char name2[9]={'P','l','a','y','e','r',' ','2','\0'};
  int x,y,button,m=0;
char c[9]={'a','b','c','d','e','f','g','h'};
void print();
void boarder();
void fillbox()
{
int i;
for( i=0;i<9;i++)
c[i]=97+i;
}

union REGS i,o;

void mptr()
{
i.x.ax=1;
int86(0x33,&i,&o);

}
void drw()
{
int a=0;
setcolor(DARKGRAY);
while(a<130)
{
 rectangle(350,200,352,200+a);
 rectangle(410,200,412,200+a);
 rectangle(315,240,315+a,242);
 rectangle(315,290,315+a,292);
 a++;
}
}
void getmp(int *button,int *x,int *y)
{
 i.x.ax=3;
 int86(0x33,&i,&o);
 *button=o.x.bx;
 *x=o.x.cx;
 *y=o.x.dx;
 }

 void printo()
 {
  settextstyle(2,0,8);  //to print o and x in specified size
 if(button==1 && x<=350 && x>=315 && y<=240 && y>=200)
  {
   button=-1;
   if(c[0]!='x' && c[0]!='o')
   {
   m++;
   setcolor(RED);
   outtextxy(325,207,"O");
   c[0]='o';
   }

  }
 if(button==1 && x<=410 && x>=350 && y<=240 &&y>=200)
 {
    button=-1;
   if(c[1]!='x' &&c[1]!='o')
   {
   m++;
   setcolor(RED);
   outtextxy(375,207,"O");
   c[1]='o';
   }
   }
    if(button==1 && x<=445 && x>=410 && y<=240 &&y>=200)
 {
    button=-1;
   if(c[2]!='x' &&c[2]!='o')
   {
   m++;
   setcolor(RED);
   outtextxy(430,207,"O");
   c[2]='o';
   }
   }
    if(button==1 && x<=350 && x>=315 && y<=290 &&y>=240)
 {
    button=-1;
   if(c[3]!='x' &&c[3]!='o')
   {
   m++;
   setcolor(RED);
   outtextxy(325,252,"O");
   c[3]='o';
   }
   }
   if(button==1 && x<=410 && x>=350 && y<=290 &&y>=240)
 {
    button=-1;
   if(c[4]!='x' &&c[4]!='o')
   {
   m++;
   setcolor(RED);
   outtextxy(375,252,"O");
   c[4]='o';
   }
 }
  if(button==1 && x<=445 && x>=410 && y<=290 &&y>=240)
 {
    button=-1;
   if(c[5]!='x' &&c[5]!='o')
   {
   m++;
   setcolor(RED);
   outtextxy(430,252,"O");
   c[5]='o';
   }
   }
    if(button==1 && x<=350 && x>=315 && y<=330 &&y>=290)
 {
    button=-1;
   if(c[6]!='x' &&c[6]!='o')
   {
   m++;
   setcolor(RED);
   outtextxy(325,297,"O");
   c[6]='o';
   }
   }
   if(button==1 && x<=410 && x>=350 && y<=330 &&y>=290)
 {
    button=-1;
   if(c[7]!='x' &&c[7]!='o')
   {
   m++;
   setcolor(RED);
   outtextxy(375,297,"O");
   c[7]='o';
   }
   }
   if(button==1 && x<=445 && x>=410 && y<=330 &&y>=290)
 {
    button=-1;
   if(c[8]!='x' &&c[8]!='o')
   {
   m++;
   setcolor(RED);
   outtextxy(430,297,"O");
   c[8]='o';
   }
   }
 }

 void printx()
 {
  settextstyle(2,0,8);  //to print o and x in specified size
  if(button==1 && x<=350 && x>=315 && y<=240 && y>=200)
  {
   button=-1;
   if(c[0]!='x' &&c[0]!='o')
   {
   m++;
   setcolor(GREEN);
   outtextxy(325,207,"X");
   c[0]='x';
   }

  }
 if(button==1 && x<=410 && x>=350 && y<=240 &&y>=200)
 {
    button=-1;
   if(c[1]!='x' &&c[1]!='o')
   {
   m++;
   setcolor(GREEN);
   outtextxy(375,207,"X");
   c[1]='x';
   }
   }
    if(button==1 && x<=445 && x>=410 && y<=240 &&y>=200)
 {
    button=-1;
   if(c[2]!='x' &&c[2]!='o')
   {
   m++;
   setcolor(GREEN);
   outtextxy(430,207,"X");
   c[2]='x';
   }
   }
    if(button==1 && x<=350 && x>=315 && y<=290 &&y>=240)
 {
    button=-1;
   if(c[3]!='x' &&c[3]!='o')
   {
   m++;
   setcolor(GREEN);
   outtextxy(325,252,"X");
   c[3]='x';
   }
   }
   if(button==1 && x<=410 && x>=350 && y<=290 &&y>=240)
 {
    button=-1;
   if(c[4]!='x' &&c[4]!='o')
   {
   m++;
   setcolor(GREEN);
   outtextxy(375,252,"X");
   c[4]='x';
   }
 }
  if(button==1 && x<=445 && x>=410 && y<=290 &&y>=240)
 {
    button=-1;
   if(c[5]!='x' &&c[5]!='o')
   {
   m++;
   setcolor(GREEN);
   outtextxy(430,252,"X");
   c[5]='x';
   }
   }
    if(button==1 && x<=350 && x>=315 && y<=330 &&y>=290)
 {
    button=-1;
   if(c[6]!='x' &&c[6]!='o')
   {
   m++;
   setcolor(GREEN);
   outtextxy(325,297,"X");
   c[6]='x';
   }
   }
   if(button==1 && x<=410 && x>=350 && y<=330 &&y>=290)
 {
    button=-1;
   if(c[7]!='x' &&c[7]!='o')
   {
   m++;
   setcolor(GREEN);
   outtextxy(375,297,"X");
   c[7]='x';
   }
   }
   if(button==1 && x<=445 && x>=410 && y<=330 &&y>=290)
 {
    button=-1;
   if(c[8]!='x' &&c[8]!='o')
   {
   m++;
   setcolor(GREEN);
   outtextxy(430,297,"X");
   c[8]='x';
   }
   }
 }

 void player()
 {
 setcolor(BROWN);
  rectangle(50,285,250,300);       //
  settextstyle(2,0,5);
  outtextxy(53,285,name1);
  outtextxy(175,285,name2);
  setcolor(RED);
//  circle(80,315,4);
 // circle(220,315,4);
  if(m%2==0)
  {
  int b=0;
  if(b==5)
  b=0;
  while(b<=4)
  {
  setcolor(RED);
  circle(80,315,0+b);
 // arc(80,315,0,360,4);
   // setfillstyle(SOLID_FILL,GREEN);
   // floodfill(80,315,RED);
    setcolor(BLACK);
  circle(220,315,0+b);
  b++;
  }
 // arc(220,315,0,360,4);
   // setfillstyle(SOLID_FILL,BLACK);
  //  floodfill(220,315,RED);
  }
  else
  {
  int c=0;
  if(c>4)
  c=0;
    while(c<=4)
    {
  setcolor(RED);
 circle(220,315,c);
 // arc(220,315,0,360,4);
   // setfillstyle(SOLID_FILL,GREEN);
   // floodfill(220,315,RED);
   setcolor(BLACK);
    circle(80,315,c);
   // arc(80,315,0,360,4);
    //setfillstyle(SOLID_FILL,BLACK);
   // floodfill(80,315,RED);
   c++;
  }
 }
     }
  void name()
  {
     setcolor(GREEN);
settextstyle(10,0,3);
outtextxy(160,5,"TIC TAC TOE");
  setcolor(RED);
  delay(19);
   rectangle(157,55,400,60);
   setfillstyle(SOLID_FILL,RED);
   floodfill(200,58,RED);
 //  rectangle(400,55,400-129,60);
  }
 void restart()
 {
 setcolor(MAGENTA);
  rectangle(50,100,120,115);
  rectangle(50,121,120,136);
  setcolor(GREEN);
  settextstyle(2,0,5);
  outtextxy(53,100,"Restart");
  outtextxy(53,121,"Exit");
 }

 int gameover=0;

  void draw()
 {
   int i=0;
   while(i<4)
   {
   i++;
   delay(100);
   }

  cleardevice();
  boarder();
  restart();
  name();
  settextstyle(4,0,6);
  outtextxy(135,190,"Match Draw");
 }

 void win()
 {
 int i=0;
 while(i<4)
 {
 i++;
 delay(100);
 }
  if(gameover==1)
  {
  cleardevice();
  boarder();
  restart();
  name();
  settextstyle(4,0,6);
   outtextxy(185,190,name1);
   outtextxy(165,230,"won the match");
  }
   if(gameover==2)
   {
    cleardevice();
    boarder();
    restart();
    name();
    settextstyle(4,0,6);
     outtextxy(185,190,name2);
     outtextxy(165,230,"won the match");
   }
 }

 void checkwin()
 {
  if(c[0]==c[1] &&c[1]==c[2])
  {
    if(c[0]=='x')
    {
     gameover=1;
     win();
    }
    else
    {
     gameover=2;
     win();
    }
  }
  else
  {
    if(c[3]==c[4] && c[4]==c[5])
     {
      if(c[3]=='x')
       {
	gameover=1;
	win();

       }
      else
       {
       gameover=2;
       win();
       }
      }
    else
     {
       if(c[6]==c[7]&&c[7]==c[8])
	 {
	   if(c[6]=='x')
	    {
	     gameover=1;
	     win();
	    }
	   else
	    {
	     gameover=2;
	     win();
	    }
	 }
	else
	 {
	   if(c[0]==c[3] && c[3]==c[6])
	    {
	       if(c[0]=='x')
		{
		 gameover=1;
		 win();
		}
	       else
		{
		 gameover=2;
		 win();
		}
	    }
	   else
	    {
	     if(c[1]==c[4]&&c[4]==c[7])
	      {
		if(c[1]=='x')
		  {
		   gameover=1;
		   win();
		  }
		else
		  {
		   gameover=2;
		   win();
		  }
	      }
	     else
	      {
	       if(c[2]==c[5] && c[5]==c[8])
		 {
		   if(c[2]=='x')
		    {
		     gameover=1;
		     win();
		    }
		   else
		    {
		     gameover=2;
		     win();
		    }
		 }
	      else
	       {
		 if(c[0]==c[4]&&c[4]==c[8])
		  {
		    if(c[0]=='x')
		     {
		       gameover=1;
		       win();
		     }
		    else
		     {  gameover=2;
		       win();
		     }
		  }
		 else
		  {
		    if(c[2]==c[4] && c[4]==c[6])
		     {
		      if(c[2]=='x')
		       {
			 gameover=1;
			 win();
		       }
		      else
			{
			  gameover=2;
			  win();
			}
		     }
		  }
	       }
	      }
	    }
	 }
     }
  }
 }

void logic()             //to print x and o on console
{
 while(!kbhit())
{
if(gameover==1 ||gameover==2)
break;
if(m>8&&(gameover!=1||gameover!=2))
{
 break;
}
getmp(&button,&x,&y);
if(m==0)
 {
 player();
  printx();
 }
 else  if(m==1)
 {
 player();
 printo();
 }
 else if(m==2)
 {
 player();
 printx();
 }
 else if(m==3)
 {
 player();
 printo();
 }
 else if(m==4)
 {
 player();
 printx();
 checkwin();
 }
 else if(m==5)
 {
 player();
 printo();
 checkwin();
 }
 else if(m==6)
 {
 player();
 printx();
 checkwin();
 }
 else if(m==7)
 {
 player();
 printo();
 checkwin();
 }
 else if(m==8)
 {
 player();
 printx();
 checkwin();
 }
}
}
void shashi()
{
int i=0;
while(i<25)
{
delay(180);
setcolor(MAGENTA);
settextstyle(8,0,4);
 if(i==0)
 outtextxy(100,200,"B");
 if(i==1)
 outtextxy(117,200,"y");
 if(i==2)
 outtextxy(135,200,":-");
 if(i==3)
 outtextxy(160,200,"S");
 if(i==4)
 outtextxy(176,200,"h");
 if(i==5)
 outtextxy(195,200,"a");
 if(i==6)
 outtextxy(212,200,"s");
 if(i==7)outtextxy(226,200,"h");
 if(i==8)outtextxy(248,200,"i");
 if(i==9)outtextxy(278,200,"R");
 if(i==10)outtextxy(298,200,"a");
 if(i==11)outtextxy(315,200,"n");
 if(i==12)outtextxy(331,200,"j");
 if(i==13)outtextxy(343,200,"a");
 if(i==14)outtextxy(360,200,"n");
 if(i==15)outtextxy(390,200,"K");
 if(i==16)outtextxy(410,200,"u");
 if(i==17)outtextxy(428,200,"m");
 if(i==18)outtextxy(458,200,"a");
 if(i==20)outtextxy(474,200,"r");
 i++;
}
}
void boarder()
{
 int p,q;
 p=getmaxx();
 q=getmaxy();

 line(0,0,0,q);
 line(3,3,3,q-3);
 line(p,0,p,q);
 line(p-3,3,p-3,q-3);
 line(0,0,p,0);
 line(3,3,p-3,3);
 line(0,q,p,q);
 line(3,q-3,p-3,q-3);
}

void start()
{
int d,n=0;
settextstyle(8,0,3);
 setcolor(BROWN);
 outtextxy(50,100,"Computer vs Player");
 outtextxy(50,130,"Friend vs Friend");
 setcolor(LIGHTCYAN);
 rectangle(400,105,600,130);
 rectangle(400,140,600,170);
 setcolor(RED);
 outtextxy(403,101,"Comming Soon");
 setcolor(LIGHTBLUE);
 outtextxy(403,137,"Press Enter");
}

int main()
{
//int x,y,button;
int gd=0,gm,a=0,b=0,c;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
mptr();

setcolor(GREEN);
settextstyle(10,0,3);
outtextxy(160,5,"TIC TAC TOE");
boarder();
  while(a<130)
  {
  setcolor(RED);
  delay(19);
   rectangle(157,55,157+a,60);
   rectangle(400,55,400-b,60);
   setcolor(BROWN);
   line(100,198,100+a,198);
   line(100,239,100+a,239);
   line(230,198,230+a,198);
   line(230,239,230+a,239);
   line(360,198,360+a,198);
   line(360,239,360+a,239);
   a++;
   b++;
  }
    settextstyle(2,0,8);
shashi();
restart:
cleardevice();
start();
name();
boarder();
getch();
cleardevice();
fillbox();
gameover=0;
boarder();
name();
drw();
restart();
fillbox();
player();
logic();
if(gameover==1 || gameover==2)
win();
if(m>8 && (gameover!=1|| gameover!=2))
draw();
while(!kbhit())
{
i.x.ax=3;
int86(0x33,&i,&o);
c=o.x.bx;
if(c==1 && o.x.cx<=120 && o.x.cx>=50 && o.x.dx<=136 && o.x.dx>=121)
{
   c=-1;
exit(0);
}
if(c==1 && o.x.cx<=120 && o.x.cx>=50 && o.x.dx<=115 && o.x.dx>=100)
{
c=-1;
 goto restart;
}

 }
    getch();
    return 0;
}