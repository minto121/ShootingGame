#include"DxLib.h"
#include "TitleScene.h"
#include"GameMainScene.h"
#include"PadInput.h"

TitleScene::TitleScene()
{
}

TitleScene::~TitleScene()
{
}

AbstractScene* TitleScene::Update()
{
	if (CheckHitKey(KEY_INPUT_0) || PAD_INPUT::OnButton(XINPUT_BUTTON_START) == 1) {
		return new GameMainScene();
	}
	return this;
}

void TitleScene::Draw() const
{
	DrawString(100, 0,"title", 0xffffff);
}
