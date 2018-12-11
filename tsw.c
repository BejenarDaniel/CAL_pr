/* 
 * File:   tsw.c
 */
 
#include "tsw.h"
#include "rte.h"
#include "general.h"



void TestLinie()
{
	T_U8 read,a=0;
	read=LineSensor();	
	//------Urmarire linie------//
	switch(read){
		case 0b110000://left
			a=70;
		break;
		case 0b011000://left --
			a=80;
		break;
		case 0b001100://mid
			a=90;
		break;
		case 0b000110://right--
			a=110;
		break;
		case 0x000011://right
			a=120;
		break;
		case 0x00://no line
			a=90;
		break;
		default:
		a++;

		

	}
SetDir(a);
	
/*
	if(read ==0b00110000) //vireaza stanga
		{
			SetDir(73);
		}
		else
		if(read ==0x0A)//inainte
		{
			SetDir(90);
		}
		else
		if(read ==0x03)//dreapta
		{
			SetDir(107);
		}
		else
		if(read ==0x05)//dreapta jumate
		{
			SetDir(100);
		}
		else
		if(read ==0x18)//stanga jumate
		{
			SetDir(80);
		}
		else
		if(read==0x0C)
		{		
			SetDir(90);
		}
		*/
	
}
void Inainte()
{
	T_U8 read;
	read=LineSensor();
//-----Detectare lipsa linie------//
	if(read ==0b00000000)
	{
		SetSpeed(FWD,0);
	}
	else
	if(read!=0)
	{
		SetSpeed(FWD,25);
	}
}