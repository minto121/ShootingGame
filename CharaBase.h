#pragma once
#include"SphereCollider.h"

class CharaBase:public SphereCollider
{
private:
    float speed;
    int image;
public:
    //�R���g���N�^
    CharaBase();

    //�f�X�g���N�^
    ~CharaBase();

    // �X�V���������s����
    void Update();

    // �`�揈�������s����
    void Draw() const ;

};

