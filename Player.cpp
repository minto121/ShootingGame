#include"DxLib.h"
#include "Player.h"
#include"PadInput.h"
#include"SphereCollider.h"
#include"GameMainScene.h"


Player::Player()
{

    location.x = 100;
    location.y = 100;
    //�t���[���擾
    P_FPS++;

    //���X�e�B�b�N
    P_L_Stick = PAD_INPUT::GetLStickX();

    //�f�W�^�������E�{�^��
    P_Right_Btn = PAD_INPUT::OnPressed(XINPUT_BUTTON_DPAD_RIGHT);
    //�f�W�^���������{�^��
    P_Left_Btn = PAD_INPUT::OnPressed(XINPUT_BUTTON_DPAD_LEFT);
    //�f�W�^��������{�^��
    P_Up_Btn = PAD_INPUT::OnPressed(XINPUT_BUTTON_DPAD_UP);
    //�f�W�^���������{�^��
    P_Down_Btn = PAD_INPUT::OnPressed(XINPUT_BUTTON_DPAD_DOWN);

    // A�{�^���P����
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

    //�E�ړ�
    if (P_L_Stick > RIGHT_MOVE || P_Right_Btn == 1) {
        P_MoveR_Flg = TRUE;

        //�����x
        P_XSpeed = 1.0f;

        location.x = location.x + P_XSpeed;
 
    }
    else {
        P_MoveR_Flg = FALSE;

    }

    //���ړ�
    if (P_L_Stick < LEFT_MOVE || P_Left_Btn == 1) {
        P_MoveL_Flg = TRUE;

        //�����x
        P_XSpeed = -1.0f;

        location.x = location.x + P_XSpeed;
    }
    else {
        P_MoveL_Flg = FALSE;
    }

    //��ړ�
    if (P_L_Stick < UP_MOVE || P_Up_Btn == 1) {
        P_MoveL_Flg = TRUE;

        //�����x
        P_YSpeed = 1.0f;

        location.y = location.x + P_XSpeed;
    }
    else {
        P_MoveL_Flg = FALSE;
    }

    //���ړ�
    if (P_L_Stick < DOWN_MOVE || P_Down_Btn == 1) {
        P_MoveL_Flg = TRUE;

        //�����x
        P_YSpeed = -1.0f;

        location.y = location.x + P_XSpeed;
    }
    else {
        P_MoveL_Flg = FALSE;
    }

    ////�ҋ@��
    //if (Respawn_Flg == FALSE && P_MoveL_Flg == FALSE && P_MoveR_Flg == FALSE) {
    //    //�����l�ɂ��ǂ�
    //    P_XSpeed = 0.0f;
}

void Player::Draw() const
{
	DrawBox(30, 30, 30, 30, 0x00ffff, TRUE);
}
