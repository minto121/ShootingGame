#include "SphereCollider.h"
#include"DxLib.h"


void SphereCollider::CheckCollision()
{
}

int SphereCollider::Hit(SphereCollider* bCollider)
{
	int ret = false; //返り値

	//float ax1 = location.x - (APPLE_SIZE * erea.rate);
	//float ay1 = location.y - (APPLE_SIZE * erea.rate);
	//float ax2 = location.x + APPLE_SIZE + (APPLE_SIZE * erea.rate);
	//float ay2 = location.y + APPLE_SIZE + (APPLE_SIZE * erea.rate);

	//プレイヤーの当たり判定の範囲
	float px = bCollider->GetLocation().x;
	float py = bCollider->GetLocation().y;
	float pr = bCollider->GetLocation().r;
	

	//if ((ex1 < px2) && (px1 < ex2) && (ey1 < py2) && (py1 < ey2)) //当たり判定
	//{
	//	ret = true;
	//}
	//return ret;

	
	return 0;
}

void SphereCollider::Draw() const
{
	DrawBox(100, 100, 30, 30, 0xfffff, TRUE);
}

Location SphereCollider::GetLocation()const
{
	return location;
}

Erea SphereCollider::GetErea()const
{
	return erea;
}

void SphereCollider::SetLocation(Location location)
{
	this->location = location;
}
