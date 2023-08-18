#pragma once
#include"AbstractScene.h"
#include"Player.h"
class GameMainScene:public AbstractScene
{
private:

public:
	//コンストラクタ
	GameMainScene();
	//デストラクタ
	~GameMainScene();
	//描画以外の更新を実行
	AbstractScene* Update();
	//描画に関することを実装
	void Draw() const;

	void SpawnBullet();

	 /*Player* player;*/

};

