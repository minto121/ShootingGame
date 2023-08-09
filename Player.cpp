#include"DxLib.h"
#include "Player.h"
#include"PadInput.h"

Player::Player()
{
	
}

Player::~Player()
{
}

void Player::Update()
{
	//è„â∫ç∂âEà⁄ìÆ
	if (gPlayer.flg == TRUE) {
		if (PAD_INPUT::GetLStick() & PAD_INPUT_UP)gPlayer.y -= gPlayer.speed;
		if (PAD_INPUT::GetLStick() & PAD_INPUT_DOWN)gPlayer.y += gPlayer.speed;
		if (PAD_INPUT::GetLStick() & PAD_INPUT_LEFT)gPlayer.x -= gPlayer.speed;
		if (PAD_INPUT::GetLStick() & PAD_INPUT_RIGHT)gPlayer.x += gPlayer.speed;
	}
}

void Player::Draw() const
{
	DrawBox(300, 300, 30, 30, 0x00ffff, TRUE);
}
