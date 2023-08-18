#include"DxLib.h"
#include "Player.h"
#include"PadInput.h"
#include"SphereCollider.h"
#include"GameMainScene.h"


Player::Player()
{

    location.x = 100;
    location.y = 100;
    //フレーム取得
    P_FPS++;

    //左スティック
    P_L_Stick = PAD_INPUT::GetLStickX();

    //デジタル方向右ボタン
    P_Right_Btn = PAD_INPUT::OnPressed(XINPUT_BUTTON_DPAD_RIGHT);
    //デジタル方向左ボタン
    P_Left_Btn = PAD_INPUT::OnPressed(XINPUT_BUTTON_DPAD_LEFT);
    //デジタル方向上ボタン
    P_Up_Btn = PAD_INPUT::OnPressed(XINPUT_BUTTON_DPAD_UP);
    //デジタル方向下ボタン
    P_Down_Btn = PAD_INPUT::OnPressed(XINPUT_BUTTON_DPAD_DOWN);

    // Aボタン単押し
    P_A_Btn = PAD_INPUT::OnButton(XINPUT_BUTTON_A);
	
}

Player::~Player()
{
}

void Player::Update()
{

}

void Player::Player_Move()
{
    P_YSpeed = 0.0f;

    //右移動
    if (P_L_Stick > RIGHT_MOVE || P_Right_Btn == 1) {
        P_MoveR_Flg = TRUE;

        //加速度
        P_XSpeed = 1.0f;

        location.x = location.x + P_XSpeed;
 
    }
    else {
        P_MoveR_Flg = FALSE;

    }

    //左移動
    if (P_L_Stick < LEFT_MOVE || P_Left_Btn == 1) {
        P_MoveL_Flg = TRUE;

        //加速度
        P_XSpeed = -1.0f;

        location.x = location.x + P_XSpeed;
    }
    else {
        P_MoveL_Flg = FALSE;
    }

    //上移動
    if (P_L_Stick < UP_MOVE || P_Up_Btn == 1) {
        P_MoveL_Flg = TRUE;

        //加速度
        P_YSpeed = 1.0f;

        location.y = location.x + P_XSpeed;
    }
    else {
        P_MoveL_Flg = FALSE;
    }

    //下移動
    if (P_L_Stick < DOWN_MOVE || P_Down_Btn == 1) {
        P_MoveL_Flg = TRUE;

        //加速度
        P_YSpeed = -1.0f;

        location.y = location.x + P_XSpeed;
    }
    else {
        P_MoveL_Flg = FALSE;
    }

    ////待機中
    //if (Respawn_Flg == FALSE && P_MoveL_Flg == FALSE && P_MoveR_Flg == FALSE) {
    //    //初期値にもどす
    //    P_XSpeed = 0.0f;
}

void Player::Draw() const
{
	DrawBox(30, 30, 30, 30, 0x00ffff, TRUE);
}
