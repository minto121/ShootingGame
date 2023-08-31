#pragma once
#include"BulletsSpawner.h"
class NwaySpawner :
    public BulletsSpawner
{
    // コンストラクタ
    NwaySpawner();

    // デストラクタ
    ~NwaySpawner();

    // 更新処理を実行する
    void Update()override;

    // 描画処理を実行する
    void Draw() const override;
};

