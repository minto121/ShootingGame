#pragma once
#include"AbstractScene.h"
#include"Bullet.h"
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
	AbstractScene* Update()override;
	//描画に関することを実装
	void Draw() const override;

	void SpawnBullet();

	Player* player;
	//Bullet* bullet;

};

