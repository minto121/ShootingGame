#pragma once
#include"AbstractScene.h"
#include"Bullet.h"
#include"Player.h"

class GameMainScene:public AbstractScene
{
private:
	
public:
	//�R���X�g���N�^
	GameMainScene();
	//�f�X�g���N�^
	~GameMainScene();
	//�`��ȊO�̍X�V�����s
	AbstractScene* Update()override;
	//�`��Ɋւ��邱�Ƃ�����
	void Draw() const override;

	void SpawnBullet();

	Player* player;
	//Bullet* bullet;

};

