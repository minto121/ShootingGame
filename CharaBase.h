#pragma once
#include"SphereCollider.h"
class CharaBase:public SphereCollider
{
private:
    float speed;
    int image;
public:
    //コントラクタ
    CharaBase();

    // 更新処理を実行する
    void Update();

    // 描画処理を実行する
    void Draw() const ;

    void Hit();
};

