#include "SphereCollider.h"
#include"DxLib.h"

SphereCollider::SphereCollider()
{
}

SphereCollider::~SphereCollider()
{
}

void SphereCollider::Update()
{
}

void SphereCollider::CheckCollision()
{
}

void SphereCollider::Draw() const
{
	DrawBox(100, 100, 30, 30, 0xfffff, TRUE);
}