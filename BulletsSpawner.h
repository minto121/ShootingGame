#pragma once

#define RADIUS 14


class GameMainScene;

class BulletsSpawner
{
private:
	int speed;
	int angle;
	int acceleration;
	int angulVelocity;

	int flg;
	int x;
	int y;
	int Speed;
	int type;


public:
	//コンストラクタ
	BulletsSpawner();
	//デストラクタ
	~BulletsSpawner();
	//描画以外の更新を実行
	virtual void Update() = 0;
	//描画に関することを実装
	virtual void Draw() const = 0;
	
	virtual void Shoot(GameMainScene* g_gamemain) = 0;

	

};

