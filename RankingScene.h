#pragma once
#include"AbstractScene.h"
class RankingScene:public AbstractScene
{
private:


public:
    // �R���X�g���N�^
    RankingScene();

    // �f�X�g���N�^
    ~RankingScene();

    // �X�V���������s����
    AbstractScene* Update()override;

    // �`�揈�������s����
    void Draw() const;
};

