﻿
/*
 * LCD.h
 *
 * Created: 22-06-24 오전 10:44:24
 *  Author: PKNU
 */ 


#ifndef _LCD_H_
#define _LCD_H_

#define LCD	8

#if	LCD == 4
#define	LCD_DATAWR	PORTC	//LCD 데이터버스 정의(데이터 쓰기)
#define LCD_INSTWR	PORTC	//LCD 데이터버스 정의(명령어 쓰기)
#define	LCD_CTRL	PORTC	//LCD 제어신호 정의
#endif

#if	LCD == 8
#define	LCD_DATAWR	PORTC	//LCD 데이터버스 정의(데이터 쓰기)
#define LCD_INSTWR	PORTC	//LCD 데이터버스 정의(명령어 쓰기)
#define	LCD_CTRL	PORTG	//LCD 제어신호 정의
#endif

#define	LCD_EN	2			//Enable 신호 정의
#define LCD_RW	1			//Write(0), Read(1)
#define LCD_RS	0			//Select 신호정의 : IR(0), DR(1)

#define ON	1
#define OFF	0
#define RIGHT	1
#define	LEFT	0

#define Byte	unsigned char

void Lcd_CHAR(Byte c);
void Lcd_STR(Byte *str);
void Lcd_Pos(Byte col, Byte row);
void Lcd_Clear(void);
void Lcd_Shift(Byte p);

void Lcd_Data(Byte ch);
void Lcd_Cmd(Byte ch);
void Lcd_Init(void);

void LcdCmd_4bit(Byte ch);
void LcdData_4bit(Byte ch);
void LcdInit_4bit(void);

#endif /* _LCD_H_ */