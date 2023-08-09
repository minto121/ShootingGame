#pragma once
class BulletsSpawner
{
private:
	int flg;
	int x;
	int y;
	int speed;
public:
	//コンストラクタ
	BulletsSpawner();
	//デストラクタ
	~BulletsSpawner();
	//描画以外の更新を実行
	void Update();
	//描画に関することを実装
	void Draw() const;
	//ボールの移動
	void MoveBall();

};

