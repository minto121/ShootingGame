#include"DxLib.h"
#include "GameMainScene.h"
#include"AbstractScene.h"
#include"Player.h"

GameMainScene::GameMainScene()
{
	player = new Player();
}

GameMainScene::~GameMainScene()
{
}

AbstractScene* GameMainScene::Update()
{
	player->Update();
	return this;
}

void GameMainScene::Draw() const
{
	player->Draw();
	DrawString(100, 0, "gamemain", 0xffffff);
}

void GameMainScene::SpawnBullet()
{
}
