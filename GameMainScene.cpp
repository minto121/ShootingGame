#include"DxLib.h"
#include "GameMainScene.h"

GameMainScene::GameMainScene()
{
	player = new Player();
	//bullet = new Bullet();
}

GameMainScene::~GameMainScene()
{
}

AbstractScene* GameMainScene::Update()
{
	player->Update();
	/*bullet->Update(Player player);*/
	return this;
}

void GameMainScene::Draw() const
{
	player->Draw();
	/*bullet->Draw();*/
	DrawString(100, 0, "gamemain", 0xffffff);
}

//íeÇÃê∂ê¨
void GameMainScene::SpawnBullet()
{

}
