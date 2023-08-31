#pragma once
#include"SphereCollider.h"

class CharaBase:public SphereCollider
{
private:
protected:
    float speed;
    int image;
public:

    // 更新処理を実行する
    virtual void Update() = 0;
    // 描画処理を実行する
    virtual void Draw() const = 0;

};

