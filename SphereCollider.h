#pragma once
class SphereCollider
{
private:
	

public:
	//コンストラクタ
	SphereCollider();
	//デストラクタ
	~SphereCollider();
	//描画以外の更新を実行
	void Update();
	//描画に関することを実装
	void Draw() const ;
	//当たり判定の判定
	void CheckCollision();
};

