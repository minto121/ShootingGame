#pragma once
#include"SphereCollider.h"
#include"Bullet.h"

class Bullet :SphereCollider
{
    // �R���X�g���N�^
    Bullet();

    // �f�X�g���N�^
    ~Bullet();

    // �X�V���������s����
    void Update();

    // �`�揈�������s����
    void Draw() const;
};

