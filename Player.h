#pragma once
#include"CharaBase.h"

#define HEIGHT 720
#define WIDTH 1280

//�X�e�B�b�N�̌X�������v���C���[�̏�Ԃ��擾
#define LEFT_MOVE -2000
#define RIGHT_MOVE 2000
#define UP_MOVE -2000
#define DOWN_MOVE 2000

class Player :public CharaBase
{
private:
    
    int P_L_Stick;
    //(��)�f�W�^�������{�^���E
    int	P_Right_Btn;
    //(��)�f�W�^�������{�^����
    int P_Left_Btn;
    //(��)�f�W�^�������{�^����
    int P_Up_Btn;
    //(��)�f�W�^�������{�^����
    int P_Down_Btn;
    //(��)A�{�^��
    int	P_A_Btn;	//�P����
    
    int P_FPS;
    int P_location_X;
    int P_location_Y;


    int P_MoveR_Flg;
    int P_MoveL_Flg;

    float P_YSpeed;
    float P_XSpeed;

    int MouseX;
    int MouseY;


public:
    // �R���X�g���N�^
    Player();

    // �f�X�g���N�^
    ~Player();

    // �X�V���������s����
    void Update();

    void Player_Move();

    // �`�揈�������s����
    void Draw() const;
};

