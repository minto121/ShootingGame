#include"DxLib.h"
#include "TitleScene.h"

TitleScene::TitleScene()
{
}

TitleScene::~TitleScene()
{
}

AbstractScene* TitleScene::Update()
{
	return this;
}

void TitleScene::Draw() const
{
	DrawFormatString(100, 400, 0xffffff, "f_fps:%d", );
}
