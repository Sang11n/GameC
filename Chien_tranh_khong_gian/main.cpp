#include <graphics.h>
#include <stdio.h>
#include <windows.h>   
#include <dos.h>     
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")


using namespace std;

// VE BOSS
void BOSS(int x1_boss, int y1_boss, int x2_boss, int y2_boss, int x_boss=0, int y_boss=0){
	
	int ponts[8]={515+x_boss, 20+y_boss, 545+x_boss, 45+y_boss, 515+x_boss, 45+y_boss, 515+x_boss, 20+y_boss};
	int ponts5[8]={518+x_boss, 28+y_boss, 538+x_boss, 42+y_boss, 518+x_boss, 42+y_boss, 518+x_boss, 28+y_boss};
	int ponts1[8]={605+x_boss, 20+y_boss, 575+x_boss, 45+y_boss, 605+x_boss, 45+y_boss, 605+x_boss, 25+y_boss};
	int ponts6[8]={602+x_boss, 28+y_boss, 580+x_boss, 42+y_boss, 602+x_boss, 42+y_boss, 602+x_boss, 28+y_boss};
	
	int ponts2[8]={525+x_boss, 60+y_boss, 555+x_boss, 60+y_boss, 540+x_boss, 70+y_boss, 525+x_boss, 60+y_boss};
	int ponts3[8]={595+x_boss, 60+y_boss, 565+x_boss, 60+y_boss, 580+x_boss, 70+y_boss, 595+x_boss, 60+y_boss};
	int ponts4[8]={545+x_boss, 85+y_boss, 575+x_boss, 85+y_boss, 560+x_boss, 70+y_boss, 545+x_boss, 85+y_boss};
	
	setcolor(15);
	setfillstyle(1, 0);
	rectangle(x1_boss, y1_boss, x2_boss, y2_boss);
	floodfill(x1_boss+1, y1_boss+1, 15);
	setcolor(RED);
	setfillstyle(1, RED);
	rectangle(x1_boss+5, y1_boss+5, x2_boss-5, y2_boss-5);
	floodfill(x1_boss+6, y1_boss+6, RED);
	setcolor(0);
	setfillstyle(1, 0);
	fillpoly(4, ponts);
	fillpoly(4, ponts1);
	setcolor(GREEN);
	setfillstyle(1,GREEN);
	fillpoly(4, ponts5);
	fillpoly(4, ponts6);
	setcolor(0);
	setfillstyle(1, 0);
	rectangle(x1_boss+15, y1_boss+55, x2_boss-15, y2_boss-15);
	floodfill(x1_boss+16, y1_boss+56, 0);
	setcolor(15);
	setfillstyle(1, 15);
	rectangle(x1_boss+20, y1_boss+60, x2_boss-20, y2_boss-20);
	floodfill(x1_boss+21, y1_boss+61, 15);
	setfillstyle(1, 15);
	setcolor(0);
	setfillstyle(1, 0);
	fillpoly(4, ponts2);
	fillpoly(4, ponts3);
	fillpoly(4, ponts4);
	
}

// VE HP
void HP(int x1_do, int x2_do, int y1_do, int y2_do, int x1_den, int x2_den, int y1_den, int y2_den){
	
	setcolor(15);
	setfillstyle(1, 15);
	rectangle(x1_den, y1_den, x2_den, y2_den);
	floodfill(x1_den+1, y1_den, 15);
	setcolor(RED);
	setfillstyle(1, RED);
	rectangle(x1_do, y1_do, x2_do, y2_do);
	floodfill(x1_do+1, y1_do+1, RED);
}

// VE DAN BOSS
void Dan(int x_dan, int y_dan, int r, int color_boss){
	setcolor(15);
	setfillstyle(1, color_boss);
	circle(x_dan, y_dan, 5+r);
	floodfill(x_dan, y_dan, 15);

	
}

// VE DAN TRON
void DanTron(int x, int y, int color_dan){

	setcolor(color_dan);
	setfillstyle(1,color_dan);
	circle(x, y, 10);;
	floodfill(x+1, y+1, color_dan);
}

// VAT PHAM
void Qua(int x_qua, int y_qua, int color_qua){
	
	setcolor(15);
	setfillstyle(1, color_qua);
	circle(x_qua, y_qua, 12);
	floodfill(x_qua+1, y_qua+1,15);
}

// VE QUAI VAT 1
void QuaiVat_1(int x1_quai, int y1_quai, int x2_quai, int y2_quai, int color_qv1){
	setcolor(15);
	setfillstyle(1, color_qv1);
	line(x1_quai, y1_quai, x2_quai, y2_quai);
	line(x1_quai+20, y1_quai, x2_quai, y2_quai+10);
	line(x1_quai+20, y1_quai+10, x2_quai+10, y2_quai+10);
	line(x1_quai+30, y1_quai+10, x2_quai+10, y2_quai+20);
	line(x1_quai+30, y1_quai+20, x2_quai+20, y2_quai+20);
	line(x1_quai+40, y1_quai+20, x2_quai+20, y2_quai+70);
	line(x1_quai+40, y1_quai+70, x2_quai+10, y2_quai+70);
	line(x1_quai+30, y1_quai+70, x2_quai+10, y2_quai+50);
	line(x1_quai+30, y1_quai+50, x2_quai, y2_quai+50);
	line(x1_quai+20, y1_quai+50, x2_quai, y2_quai+60);
	line(x1_quai+20, y1_quai+60, x2_quai-5,y2_quai+60);
	line(x1_quai+15, y1_quai+60, x2_quai-5, y2_quai+50);
	line(x1_quai+15, y1_quai+50, x2_quai-15, y2_quai+50);
	line(x1_quai+5, y1_quai+50, x2_quai-15, y2_quai+60);
	line(x1_quai+5, y1_quai+60, x2_quai-20, y2_quai+60);
	line(x1_quai, y1_quai+60, x2_quai-20, y2_quai+50);
	line(x1_quai, y1_quai+50, x2_quai-30, y2_quai+50);
	
	line(x1_quai, y1_quai, x2_quai-20, y2_quai+10);
	line(x1_quai-10, y1_quai+10, x2_quai-20, y2_quai+10);
	line(x1_quai-10, y1_quai+10, x2_quai-30, y2_quai+20);
	line(x1_quai-20, y1_quai+20, x2_quai-30, y2_quai+20);
	line(x1_quai-20, y1_quai+20, x2_quai-40, y2_quai+70);
	line(x1_quai-10, y1_quai+70, x2_quai-30, y2_quai+70);
	line(x1_quai-10, y1_quai+70, x2_quai-40, y2_quai+70);
	line(x1_quai-10, y1_quai+70, x2_quai-30, y2_quai+50);
	
	rectangle(x1_quai, y1_quai+20, x2_quai-13, y2_quai+27);
	rectangle(x1_quai+13, y1_quai+20, x2_quai, y2_quai+27);
	rectangle(x1_quai, y1_quai+35, x2_quai, y2_quai+40);
	floodfill(x1_quai+1, y1_quai+1, 15);
	
}

// VE QUAI VAT 2
void QuaiVat_2(int x1_vat, int x2_vat, int y1_vat, int y2_vat, int color_qv2){
	setcolor(color_qv2);
	setfillstyle(1, color_qv2);
	line(x1_vat, y1_vat, x2_vat, y2_vat);
	line(x1_vat+15, y1_vat, x2_vat, y2_vat+5);
	line(x1_vat+15, y1_vat+5, x2_vat+15, y2_vat+5);
	line(x1_vat+30, y1_vat+5, x2_vat+15, y2_vat+10);
	line(x1_vat+30, y1_vat+10, x2_vat+20, y2_vat+10);
	line(x1_vat+35, y1_vat+10, x2_vat+20, y2_vat+25);
	line(x1_vat+35, y1_vat+25, x2_vat+15, y2_vat+25);
	line(x1_vat+30, y1_vat+25, x2_vat+15, y2_vat+40);
	line(x1_vat+30, y1_vat+40, x2_vat+10, y2_vat+40);
	line(x1_vat+25, y1_vat+40, x2_vat+10, y2_vat+45);
	line(x1_vat+25, y1_vat+45, x2_vat-25, y2_vat+45);
	
	line(x1_vat, y1_vat, x2_vat-15, y2_vat+5);
	line(x1_vat, y1_vat+5, x2_vat-30, y2_vat+5);
	line(x1_vat-15, y1_vat+5, x2_vat-30, y2_vat+10);
	line(x1_vat-15, y1_vat+10, x2_vat-35, y2_vat+10);
	line(x1_vat-20, y1_vat+10, x2_vat-35, y2_vat+25);
	line(x1_vat-20, y1_vat+25, x2_vat-30, y2_vat+25);
	line(x1_vat-15, y1_vat+25, x2_vat-30, y2_vat+40);
	line(x1_vat-15, y1_vat+40, x2_vat-25, y2_vat+40);
	line(x1_vat-10, y1_vat+40, x2_vat-25, y2_vat+45);
	floodfill(x1_vat+1, y1_vat+1, color_qv2);
	
	setcolor(0);
	setfillstyle(1, 0);
	rectangle(x1_vat-15, y1_vat+15, x2_vat-15, y2_vat+22);
	floodfill(x1_vat-14, y1_vat+16, 0);
	setfillstyle(1, 0);
	rectangle(x1_vat+15, y1_vat+15, x2_vat+15, y2_vat+22);
	floodfill(x1_vat+16, y1_vat+16, 0);
	setfillstyle(1, 0);
	rectangle(x1_vat, y1_vat+22, x2_vat, y2_vat+30);
	floodfill(x1_vat+1, y1_vat+23, 0);
	setfillstyle(1, 0);
	rectangle(x1_vat-10, y1_vat+30, x2_vat-15, y2_vat+40);
	floodfill(x1_vat-9, y1_vat+31, 0);
	setfillstyle(1, 0);
	rectangle(x1_vat, y1_vat+35, x2_vat, y2_vat+40);
	floodfill(x1_vat+1, y1_vat+36, 0);
	setfillstyle(1, 0);
	rectangle(x1_vat+15, y1_vat+30, x2_vat+10, y2_vat+40);
	floodfill(x1_vat+16, y1_vat+31, 0);
}

// VE QUAI VAT 2
void Maybay(int x1_bay, int x2_bay, int y1_bay, int y2_bay){
	setcolor(15);
	setfillstyle(1, 15);
	line(x1_bay+10, y1_bay, x2_bay, y2_bay);
	line(x1_bay+10, y1_bay, x2_bay-20, y2_bay+30);
	line(x1_bay+30, y1_bay, x2_bay, y2_bay+30);
	//phai
	line(x1_bay+30, y1_bay+30, x2_bay+5, y2_bay+30);
	line(x1_bay+35, y1_bay+30, x2_bay+5, y2_bay+20);
	line(x1_bay+35, y1_bay+20, x2_bay+10, y2_bay+20);
	line(x1_bay+40, y1_bay+20, x2_bay+10, y2_bay+40);
	line(x1_bay+40, y1_bay+40, x2_bay+15, y2_bay+40);
	line(x1_bay+45, y1_bay+40, x2_bay+15, y2_bay+30);
	line(x1_bay+45, y1_bay+30, x2_bay+20, y2_bay+30);
	line(x1_bay+50, y1_bay+30, x2_bay+20, y2_bay+60);
	line(x1_bay+50, y1_bay+60, x2_bay+25, y2_bay+60);
	line(x1_bay+55, y1_bay+60, x2_bay+25, y2_bay+50);
	line(x1_bay+55, y1_bay+50, x2_bay+30, y2_bay+50);
	line(x1_bay+60, y1_bay+50, x2_bay+30, y2_bay+80);
	
	line(x1_bay+60, y1_bay+80, x2_bay+20, y2_bay+80);
	line(x1_bay+50, y1_bay+80, x2_bay+20, y2_bay+75);
	line(x1_bay+50, y2_bay+75, x2_bay-20, y2_bay+75);
	
	//trai
	line(x1_bay+5, y1_bay+30, x2_bay-19, y2_bay+30);
	line(x1_bay+5, y1_bay+30, x2_bay-25, y2_bay+20);
	line(x1_bay+5, y1_bay+20, x2_bay-30, y2_bay+20);
	line(x1_bay, y1_bay+20, x2_bay-30, y2_bay+40);
	line(x1_bay, y1_bay+40, x2_bay-35, y2_bay+40);
	line(x1_bay-5, y1_bay+40, x2_bay-35, y2_bay+30);
	line(x1_bay-5, y1_bay+30, x2_bay-40, y2_bay+30);
	line(x1_bay-10, y1_bay+30, x2_bay-40, y2_bay+60);
	line(x1_bay-10, y1_bay+60, x2_bay-45, y2_bay+60);
	line(x1_bay-15, y1_bay+60, x2_bay-45, y2_bay+50);
	line(x1_bay-15, y1_bay+50, x2_bay-50, y2_bay+50);
	line(x1_bay-20, y1_bay+50, x2_bay-50, y2_bay+80);
	
	line(x1_bay-20, y1_bay+80, x2_bay-40, y2_bay+80);
	line(x1_bay-10, y1_bay+80, x2_bay-40, y2_bay+75);
	line(x1_bay-10, y2_bay+75, x2_bay, y2_bay+75);
	floodfill(x2_bay-1, y2_bay+5, 15);
	
	//trai 1
	setcolor(RED);
	setfillstyle(1, RED);
	rectangle(x1_bay+35, y1_bay+15, x2_bay+10, y2_bay+25);
	floodfill(x1_bay+36, y1_bay+21, RED);
	//trai 2
	setcolor(RED);
	setfillstyle(1, RED);
	rectangle(x1_bay+45, y1_bay+25, x2_bay+20, y2_bay+35);
	floodfill(x1_bay+46, y1_bay+26, RED);
	//trai 3
	setcolor(RED);
	setfillstyle(1, RED);
	rectangle(x1_bay+55, y1_bay+40, x2_bay+30, y2_bay+50);
	floodfill(x1_bay+56, y1_bay+41, RED);
	//phai 1
	setcolor(RED);
	setfillstyle(1, RED);
	rectangle(x1_bay, y1_bay+15, x2_bay-25, y2_bay+25);
	floodfill(x1_bay+1, y1_bay+16, RED);
	//phai 2
	setcolor(RED);
	setfillstyle(1, RED);
	rectangle(x1_bay-5, y1_bay+25, x2_bay-40, y2_bay+35);
	floodfill(x1_bay-6, y1_bay+26, RED);
	//phai 3
	setcolor(RED);
	setfillstyle(1, RED);
	rectangle(x1_bay-15, y1_bay+40, x2_bay-50, y2_bay+50);
	floodfill(x1_bay-16, y1_bay+41, RED);
	
	setcolor(BLUE);
	setfillstyle(1, BLUE);
	rectangle(x1_bay+15, y1_bay+10, x2_bay-5, y2_bay+25);
	floodfill(x1_bay+16, y1_bay+11, BLUE);

	setcolor(BLUE);
	setfillstyle(1, BLUE);
	rectangle(x1_bay+15, y1_bay+35, x2_bay-5, y2_bay+50);
	floodfill(x1_bay+16, y1_bay+36, BLUE);
	
	setcolor(BLUE);
	setfillstyle(1, BLUE);
	rectangle(x1_bay, y1_bay+45, x2_bay-13, y2_bay+55);
	floodfill(x1_bay+1, y1_bay+46, BLUE);
	
	setcolor(BLUE);
	setfillstyle(1, BLUE);
	rectangle(x1_bay+23, y1_bay+45, x2_bay+10, y2_bay+55);
	floodfill(x1_bay+30, y1_bay+46, BLUE);
	
	setcolor(BLUE);
	setfillstyle(1, BLUE);
	rectangle(x1_bay+15, y1_bay+65, x2_bay-5, y2_bay+85);
	floodfill(x1_bay+16, y1_bay+66, BLUE);
	
	setcolor(RED);
	setfillstyle(1, RED);
	rectangle(x1_bay+5, y1_bay+65, x2_bay-30, y2_bay+85);
	floodfill(x1_bay+4, y1_bay+66, RED);
	
	setcolor(RED);
	setfillstyle(1, RED);
	rectangle(x1_bay+35, y1_bay+65, x2_bay+10, y2_bay+85);
	floodfill(x1_bay+36, y1_bay+66, RED);
	
}

void Game(){	
	initwindow(1000, 850, "Game");
	PlaySound(TEXT("music\\2.wav"), NULL,SND_FILENAME| SND_ASYNC | SND_LOOP);

	int page=0; int i,j=200;
	int x=420, y=850;
	int x_dan=550, y_dan=70, i_dan, color_boss=15;
	int x_qua=10+ rand()%950, y_qua=0, qua=rand()%5, color_qua=1+rand()%14;
	int x1_vat= 700, x2_vat=715, y1_vat=30, y2_vat=30;
	int x1_do= 511, x2_do=609, y1_do=34,y2_do= 39, x1_den= 510,  x2_den=610,  y1_den=33,  y2_den=40, hp_do=98;  //hp
	int x1_quai=70, y1_quai=20, x2_quai=90, y2_quai=20;
	int color_qv1= rand()%10, color_qv2= rand()%10;;
	int leve=0, r=0;
	char arr[50];
	int x1_bay=400, x2_bay=430, y2_bay=700, y1_bay=700;
	int x1_boss=500, y1_boss=50, x2_boss=620, y2_boss=150, x_boss=0, y_boss=50;
	
	int color_dan=3;
	
	
 	while(1){

		setactivepage(page);
		setvisualpage(1-page);
		cleardevice();
		setbkcolor(0);
		Maybay(x1_bay, x2_bay, y1_bay, y2_bay);
		
		//DanTron
		for(i=0; i<=j; i+=100){
			DanTron(x, y-i, color_dan);
			y-=5;
	
			if(y<=0){
				y=700;
			}
		}
		
		QuaiVat_1(x1_quai, y1_quai, x2_quai, y2_quai, color_qv1);
		y1_quai+=1;
		y2_quai+=1;
		QuaiVat_2(x1_vat, x2_vat, y1_vat, y2_vat, color_qv2);
		y1_vat+=2;
		y2_vat+=2;
		
		//qua xuat hieen
		if(qua=5){
			Qua(x_qua, y_qua, color_qua);
			y_qua+=2;
			if(x_qua>x1_bay-40 && x_qua<x2_bay+40 && y_qua>y1_bay && y_qua<y2_bay+70){
				color_dan=color_qua;
				y_qua=-500;
				color_qua=1+rand()%14;
			}
			if(y_qua>1500){
				y_qua=0;
				color_qua=1+rand()%14;
			}
		}
		
	

		// DIEU KHIEN
		//Sang trai
		if(GetAsyncKeyState(VK_LEFT)){
			x1_bay-=15;
			x2_bay-=15;
			x-=15;
			
			
		}
		//Sang phai
		else if(GetAsyncKeyState(VK_RIGHT)){
			x1_bay+=15;
			x2_bay+=15;
			x+=15;
			
			
		}
		
		// VA CHAM
		if(x1_bay-10<=0 ){
			x1_bay=10;
			x2_bay=40;
			x=30;
		}
		else if(x2_bay+30>=1000){
			x1_bay=940;
			x2_bay=970;
			x=955;
		}
		// QUAI VAT ROI LIEN TUC
		if(y2_quai>800){
			y1_quai=0;
			y2_quai=0;
			x1_quai=rand()%900;
			x2_quai=x1_quai+20;
			color_qv1= 1+rand()%14;
			
		}
		if(y2_vat>800){
			y1_vat=0;
			y2_vat=0;
			x1_vat=rand()%950;
			x2_vat=x1_vat+15;
			color_qv2=1+rand()%14;
		}
		
		//va cham quai vat 1
		if(x>x1_quai-20 && x<x2_quai+30 && y+20<y2_quai+50 ){
			y=830;
			y1_quai=0;
			y2_quai=0;
			x1_quai=rand()%900;
			x2_quai=x1_quai+20;
			color_qv1= 1+rand()%14;
			leve++;
			
		}
		
		//va cham quai vat 2
		if(x>x1_vat-20 && x<x2_vat+20 && y+20<y2_vat+45 ){
			y1_vat=0;
			y2_vat=0;
			x1_vat=rand()%950;
			x2_vat=x1_vat+15;
			color_qv2=1+rand()%14;
			leve++;
		}
		
		// Va cham dan vs may bay
		if(x_dan>x1_bay-70 && x_dan<x2_bay+70 && y_dan-50>y1_bay && y_dan<y2_bay+70){
			break;
			

		}
		// LEVEL
		setcolor(15);
		settextstyle(10, 0, 3);
		sprintf(arr, "Level:%d ", leve);
		outtextxy(850, 30, arr);

		// BOSS XUAT HIEN
		if(leve>=5){
			BOSS(x1_boss, y1_boss, x2_boss, y2_boss, x_boss, y_boss);
			HP(x1_do, x2_do, y1_do, y2_do, x1_den, x2_den , y1_den, y2_den);
			Dan(x_dan, y_dan, r, color_boss);
			r+=1;
			y_dan+=10;

		}
		
		if(y_dan>1400){
			x1_boss=rand()%850;
			x2_boss=x1_boss+120;
			x_boss=x1_boss-500;
			x_dan=x1_boss+55;
			y_dan=70;
			x1_den=x1_boss+10;
			x2_den=x2_boss-10;
			x1_do=x1_den+1; 
			x2_do=x1_do+hp_do;
			r=0;
			
		}
		//BOSS VA CHAM DAN
		if(x>x1_boss && x< x2_boss && y+20< y2_boss){
			hp_do-=1;
			x2_do=x1_do+hp_do;
			
		}
		
		
		if(hp_do<=1){
			hp_do=98;
			x2_den=x2_do+1; 
			j=300;
			color_dan=4;
			color_boss=1+ rand()%14;
			
			
		}
		

		delay(10);
		
	 }
		
	
}

void SETTING(int i_2=0){
	
}
void EXIT(int i_1=0){
	initwindow(1000, 800, "EXIT");

	int page=0;
	while(1){
		setactivepage(page);
		setvisualpage(1- page);
		cleardevice();
		setcolor(YELLOW);
		settextstyle(6, 0, 10);
		outtextxy(300, 200, "NO");
		outtextxy(300, 500, "YES");
		int ponts[8]={100, 200+i_1, 200, 250+i_1, 100, 300+i_1, 100, 200+i_1};
		setfillstyle(1, YELLOW);
		fillpoly(4, ponts);
		if(GetAsyncKeyState(VK_UP)){
			i_1-=300;
			PlaySound(TEXT("music\\Menu.wav"), NULL, SND_ASYNC);
			
		}
		else if(GetAsyncKeyState(VK_DOWN)){
			i_1+=300;
			PlaySound(TEXT("music\\Menu.wav"), NULL, SND_ASYNC);
		}
		
		if(i_1>300){
			i_1=0;
		}     
		else if(i_1<0){
			i_1=300;  
		}          
		else if(GetAsyncKeyState(VK_SPACE) && i_1==0){
			PlaySound(TEXT("music\\Menu.wav"), NULL, SND_ASYNC);
			break;
			
		}
		else if(GetAsyncKeyState(VK_SPACE) && i_1==300){
			PlaySound(TEXT("music\\Menu.wav"), NULL, SND_ASYNC);
			closegraph();
//			Menu();
		}
		delay(100);
		
	}
	
}
void Menu(){
	int page=0, i=0, i_1=0;
	initwindow(1000,800, "");
	PlaySound(TEXT("music\\HH.wav"), NULL,SND_FILENAME| SND_ASYNC | SND_LOOP);
	while(1){
		int ponts[8]={100, 200+i, 200, 250+i, 100, 300+i, 100, 200+i};
		int x;
		setactivepage(page);
		setvisualpage(1- page);
		cleardevice();
		setbkcolor(0);
		setcolor(YELLOW);
		settextstyle(6, 0, 8);
		outtextxy(350,200, "PLAY");
		outtextxy(320, 400, "Setting");
		outtextxy(350, 600, "EXIT");
		setcolor(RED);
		setfillstyle(1, RED);
		fillpoly(4, ponts);
	
		if(GetAsyncKeyState(VK_UP)){
			i-=200;
			PlaySound(TEXT("music\\Menu.wav"), NULL, SND_ASYNC);
		}
		else if(GetAsyncKeyState(VK_DOWN)){
			i+=200;
			PlaySound(TEXT("music\\Menu.wav"), NULL, SND_ASYNC);
		}
		if(i>400){
			i=0;

		}
		else if(i<0){
			i=400;
		
		}
		if (GetAsyncKeyState(VK_SPACE) && i==0){
			PlaySound(TEXT("music\\Menu.wav"), NULL, SND_ASYNC);
			closegraph();
			Game();
		}
		else if(GetAsyncKeyState(VK_SPACE) && i==400){
			PlaySound(TEXT("music\\Menu.wav"), NULL, SND_ASYNC);
			closegraph();
			EXIT(0);
		}
		if (ismouseclick(WM_LBUTTONDOWN) )
		{
			int x, y;
			getmouseclick(WM_LBUTTONDOWN, x, y);
			closegraph(); 
			Game(); 
		}
		
		delay(100);
	}

	
}
int main(){
	int page=0;
	int i=0;
	Menu();
	
	
	return 0;
}
