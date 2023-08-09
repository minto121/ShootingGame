#pragma once
#include"AbstractScene.h"
class RankingScene:public AbstractScene
{
private:


public:
    // コンストラクタ
    RankingScene();

    // デストラクタ
    ~RankingScene();

    // 更新処理を実行する
    AbstractScene* Update()override;

    // 描画処理を実行する
    void Draw() const;
};

