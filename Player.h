#pragma once
#include"CharaBase.h"
#define HEIGHT 720
#define WIDTH 1280

class Player:public CharaBase
{
private:
    int gPlayer;


public:
    // コンストラクタ
    Player();

    // デストラクタ
    ~Player();

    // 更新処理を実行する
    void Update();

    // 描画処理を実行する
    void Draw() const;
};

