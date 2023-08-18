#include "BulletsSpawner.h"
#include"DxLib.h"

BulletsSpawner::BulletsSpawner()
{
}

BulletsSpawner::~BulletsSpawner()
{
}

void BulletsSpawner::Update()
{
}

void BulletsSpawner::Draw() const
{
}

void BulletsSpawner::MoveBall()
{
	if (flg == TRUE) {
		//‰E‚És‚­
		x += speed;

		//‰æ–Ê‚ğ‚Í‚İo‚µ‚½‚çÁ‹
		if (x <= 1280)
			flg = FALSE;

		/*if (type == 0) {
			DrawCircle(x, y, RADIUS, 0xFF0000, TRUE);
		}
		else if (type == 1) {
			DrawCircle(x, y, RADIUS, 0x00FF00, TRUE);
		}
		else if (type == 2) {
			DrawCircle(x, y, RADIUS, 0x0000FF, TRUE);
		}*/


	}
}
