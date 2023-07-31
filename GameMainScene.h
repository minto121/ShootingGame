#pragma once
#include"AbstractScene.h"
class GameMainScene:public AbstractScene
{

	//コンストラクタ
	GameMainScene();

	//デストラクタ
	~GameMainScene() {};

	//描画以外の更新を実行
	AbstractScene* Update() = 0;

	//描画に関することを実装
	void Draw() const = 0;
};

