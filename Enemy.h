#pragma once
#include "CharaBase.h"
class Enemy :public CharaBase
{
private:


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

