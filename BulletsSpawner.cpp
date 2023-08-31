#include "BulletsSpawner.h"
#include"GameMainScene.h"
#include"Player.h"
#include"PadInput.h"
#include"DxLib.h"

BulletsSpawner::BulletsSpawner()
{
	speed = 2;
	angle = 0;
	acceleration = 0;
	angulVelocity = 0;
}

BulletsSpawner::~BulletsSpawner()
{
}

void BulletsSpawner::Update()
{
}


void  BulletsSpawner::Shoot(GameMainScene* g_gamemain)
{

	if (flg == FALSE) {
		flg = TRUE;
		x = 680;
		Speed = 12;


		

		////ê¨å˜
		//return TRUE;
	}
	////é∏îs
	//return FALSE;
	 
	
	//if (flg == TRUE) {
	//	//è„Ç…çsÇ≠
	//	x += Speed;

	//	//âÊñ ÇÇÕÇ›èoÇµÇΩÇÁè¡ãé
	//	if (x <= 1280)
	//		flg = FALSE;

	//	if (type == 0) {
	//		DrawCircle(x, y, RADIUS, 0xFF0000, TRUE);
	//	}
	//	else if (type == 1) {
	//		DrawCircle(x, y, RADIUS, 0x00FF00, TRUE);
	//	}
	//	else if (type == 2) {
	//		DrawCircle(x, y, RADIUS, 0x0000FF, TRUE);
	//	}


	//}
}
