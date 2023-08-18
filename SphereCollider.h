#pragma once
#include"GameMainScene.h"

//中心座標
struct Location
{
	float x;	//中心座標(x)
	float y;	//中心座標(y)
	float r;	//半径(r)
};

//範囲
struct Erea
{
	float height;	//高さ
	float width;	//幅
	float rate;		//大きさの倍率
};
class SphereCollider
{
protected:
	Location location;	//中心座標
	Erea erea; //範囲
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

	int Hit(SphereCollider* bCollider);

	//中心座標の取得
	Location GetLocation()const;
		
	//半径の取得
	Erea GetErea()const;

	//中心座標の設定
	void SetLocation(Location location);
};

