#pragma once
#include "CharaBase.h"
class Enemy :public CharaBase
{
private:
    int hp;
    int point;
    int weapon;

public:
    // コンストラクタ
    Enemy();

    // デストラクタ
    ~Enemy();

    // 更新処理を実行する
    void Update();

    // 描画処理を実行する
    void Draw() const;
};

