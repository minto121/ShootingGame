#pragma once
#include"SphereCollider.h"
#include"Bullet.h"

class Bullet :SphereCollider
{
    // コンストラクタ
    Bullet();

    // デストラクタ
    ~Bullet();

    // 更新処理を実行する
    void Update();

    // 描画処理を実行する
    void Draw() const;
};

