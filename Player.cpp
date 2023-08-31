//#include"DxLib.h"
#include "Player.h"
#include"PadInput.h"


#define PLAYER_SCREEN_HIGHT 720
#define PLAYER_SCREEN_WIDTH 1280


Player::Player()
{
    location.x = 100;
    location.y = 400;

    speed = 4;
	
}

Player::~Player()
{
}

void Player::Update(/*GameMainScene* g_gamemain*/)
{

	//上移動
	if (PAD_INPUT::GetLStick().y > 10000 || PAD_INPUT::OnPressed(XINPUT_BUTTON_DPAD_UP))
	{
		location.y = location.y - speed;
	}
	//下移動
	if (PAD_INPUT::GetLStick().y < -10000 || PAD_INPUT::OnPressed(XINPUT_BUTTON_DPAD_DOWN))
	{
		location.y = location.y + speed;
	}
	//左移動
	if (PAD_INPUT::GetLStick().x < -10000 || PAD_INPUT::OnPressed(XINPUT_BUTTON_DPAD_LEFT))
	{
		location.x = location.x - speed;
	}
	//左移動
	if (PAD_INPUT::GetLStick().x > 10000 || PAD_INPUT::OnPressed(XINPUT_BUTTON_DPAD_RIGHT))
	{
		location.x = location.x + speed;
	}
	
	if (location.x > PLAYER_SCREEN_WIDTH - 30) {//右の壁
		location.x = PLAYER_SCREEN_WIDTH - 30;
	}
	if (location.x < 30) {//左の壁
		location.x = 30;
	}

	//Bボタンを押したとき玉を発射する
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_B) == 1)
	{
		/*g_gamemain;*/
	}

}



void Player::Draw() const
{
    DrawCircle(location.x, location.y, 25, 0xffff00, TRUE);

   // DrawFormatString(0, 20, GetColor(255, 255, 255), " マウス座標：X座標 %d Y座標 %d", MouseX, MouseY);

   // DrawFormatString(0, 40, GetColor(255, 255, 255), " P_L_Stick %d", P_L_Stick);

}
