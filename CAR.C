#include <stdio.h>
#include <conio.h>
#include "graphics.h"
#include <dos.h>
int gd, gm, er,i,flag,j;
void main()
{
	clrscr();

	gd = DETECT;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	er = graphresult();
	flag=0;
	for (i = -500 ; i <= 750; i += 10)
	{
		// upper part
		arc(290 + i, 250, 40, 140, 155);
		arc(320 + i, 325, 40, 140, 155);
		line(220 + i, 113, 250 + i, 185);
		line(350 + i, 108, 380 + i, 183);
		// back part
		arc(130 + i, 250, 70, 150, 110); // 1
		// II
		arc(95 + i, 275, 180, 230, 30); // 3
		arc(160 + i, 330, 70, 150, 110);
		arc(160 + i, 195, 180, 220, 125);

		ellipse(205 + i, 200, 180, 220, 170, 150);
		line(200 + i, 228, 170 + i, 148); // 4
		line(200 + i, 228, 100 + i, 188);
		line(100 + i, 188, 170 + i, 148);
		line(115 + i, 228, 85 + i, 148);

		circle(90 + i, 195, 5);
		circle(90 + i, 195, 3);
		// side part
		line(76 + i, 298, 140 + i, 298);
		ellipse(180 + i, 298, 0, 180, 40, 40);
		ellipse(460 + i, 298, 0, 180, 40, 40);
		ellipse(320 + i, 235, 280, 90, 110, 55);
		ellipse(320 + i, 235, 100, 270, 110, 55);
		ellipse(405 + i, 240, 0, 360, 10, 5);
		ellipse(235 + i, 240, 0, 360, 10, 5);
		line(340 + i, 290, 320 + i, 180);
		line(330 + i, 230, 430 + i, 230);
		line(500 + i, 298, 525 + i, 298);
		// III
		line(320 + i, 290, 300 + i, 180);
		line(310 + i, 230, 210 + i, 230);
		line(220 + i, 298, 420 + i, 298);
		// wheel part
		for (j = 35; j >= 25; j -= 2)
		{
			circle(180 + i, 298, j);
			circle(460 + i, 298, j);
		}
		if (flag == 0)
		{
			line(435 + i, 298, 485 + i, 298);
			line(460 + i, 273, 460 + i, 323);
			line(155 + i, 298, 205 + i, 298);
			line(180 + i, 273, 180 + i, 323);
			flag = 1;
		}
		else
		{
			line(443 + i, 317, 477 + i, 282);
			line(477 + i, 317, 443 + i, 282);
			line(163 + i, 317, 197 + i, 282);
			line(197 + i, 317, 163 + i, 282);
			flag = 0;
		}

		// front part

		arc(445 + i, 250, 40, 110, 110);
		arc(475 + i, 330, 50, 110, 110);
		ellipse(525 + i, 268, 270, 50, 30, 30);
		line(528 + i, 178, 555 + i, 265);
		arc(490 + i, 215, 50, 70, 50);
		arc(493 + i, 225, 50, 70, 50);
		line(523 + i, 178, 527 + i, 188);
		line(523 + i, 178, 527 + i, 188);

		// VI
		line(506 + i, 168, 510 + i, 178);
		arc(504 + i, 260, 50, 70, 50);
		arc(508 + i, 270, 50, 70, 50);
		line(535 + i, 220, 540 + i, 232);
		line(520 + i, 212, 525 + i, 223);
		line(418 + i, 145, 450 + i, 223);
		line(450 + i, 223, 535 + i, 200);
		line(418 + i, 145, 535 + i, 200);
		line(440 + i, 228, 407 + i, 148);

		settextstyle(5, 0, 3);
		outtextxy(240 + i, 120, "INDRESH");
		delay(250);
		cleardevice();
	}
	printf("Press Any button to EXIT ");
	getch();
	closegraph();
}