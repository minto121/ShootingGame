#pragma once
#include"BulletsSpawner.h"
class NwaySpawner :
    public BulletsSpawner
{
    // �R���X�g���N�^
    NwaySpawner();

    // �f�X�g���N�^
    ~NwaySpawner();

    // �X�V���������s����
    void Update()override;

    // �`�揈�������s����
    void Draw() const override;
};

