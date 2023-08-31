#pragma once
#include"CharaBase.h"


#define HEIGHT 720
#define WIDTH 1280


class Player :public CharaBase
{

private:
    

public:
    // コンストラクタ
    Player();

    // デストラクタ
    ~Player();

    // 更新処理を実行する
    void Update(/*GameMainScene* g_gamemain*/)override;

    // 描画処理を実行する
    void Draw() const override;

    int GetPlayerX() { return location.x; }
    int GetPlayerY() { return location.y; }
};

