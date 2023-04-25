#ifndef __SNAKE_H__
#define __SNAKE_H__


#define WIDE 60
#define HIGH 20
#define MAX_SLE_SEC 120

struct BODY
{
	int X;
	int Y;
};


struct SNAKE
{
	struct BODY body[WIDE*HIGH];
	int size;
}snake; 

struct FOOD
{
	int X;
	int Y;
}food;

int score = 0;
int kx = 0;
int ky = 0;
int lastX = 0;
int lastY = 0;

int sleepSecond = 300;

void initSnake(void);
void initFood(void);
void initUI(void);
void initWall(void);
void playGame(void);
void showScore(void);

#endif