﻿///*
 //* Timer.c
 //*
 //* Created: 22-06-21 오후 3:36:51
 //*  Author: PKNU
 //*/ 
//#define  F_CPU 7372800
//#include <avr/io.h>
//#include <avr/interrupt.h>
//
//volatile unsigned char LED_Data = 0x00;
//unsigned char timer0Cnt = 0;
//SIGNAL(TIMER0_OVF_vect);
//
//int main(void)
//{
	//DDRC = 0x0F;
	//TCCR0 = 0x07;	//1024분주
	//TCNT0 = 183;	// 7372800 / 1024 / (256-7) = 100ms
	//
	//TIMSK = 0x01;
	//TIFR |= 1 << TOV0;
	//sei();
	//
	//while(1)
	//{
		//PORTC = LED_Data;
	//}
	//
//}
//
//SIGNAL(TIMER0_OVF_vect)
//{
	//
	//cli();
	//TCNT0 = 184;
	//timer0Cnt++;
	//if(timer0Cnt == 100)
	//{
		//LED_Data++;
		//if(LED_Data>0x0F) LED_Data = 0;
		//timer0Cnt = 0;
	//}
	//sei();
//}