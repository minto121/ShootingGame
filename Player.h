#pragma once
#include"CharaBase.h"


#define HEIGHT 720
#define WIDTH 1280


class Player :public CharaBase
{

private:
    

public:
    // �R���X�g���N�^
    Player();

    // �f�X�g���N�^
    ~Player();

    // �X�V���������s����
    void Update(/*GameMainScene* g_gamemain*/)override;

    // �`�揈�������s����
    void Draw() const override;

    int GetPlayerX() { return location.x; }
    int GetPlayerY() { return location.y; }
};

