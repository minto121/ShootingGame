#pragma once
#include"SphereCollider.h"

class CharaBase:public SphereCollider
{
private:
protected:
    float speed;
    int image;
public:

    // �X�V���������s����
    virtual void Update() = 0;
    // �`�揈�������s����
    virtual void Draw() const = 0;

};

