#pragma once
#include"CharaBase.h"
#define HEIGHT 720
#define WIDTH 1280

class Player:public CharaBase
{
private:
    int gPlayer;


public:
    // �R���X�g���N�^
    Player();

    // �f�X�g���N�^
    ~Player();

    // �X�V���������s����
    void Update();

    // �`�揈�������s����
    void Draw() const;
};

