#pragma once
#include "CharaBase.h"
class Enemy :public CharaBase
{
private:
    int hp;
    int point;
    int weapon;

public:
    // �R���X�g���N�^
    Enemy();

    // �f�X�g���N�^
    ~Enemy();

    // �X�V���������s����
    void Update();

    // �`�揈�������s����
    void Draw() const;
};

