#pragma once
#include"AbstractScene.h"
class GameMainScene:public AbstractScene
{

	//�R���X�g���N�^
	GameMainScene();

	//�f�X�g���N�^
	~GameMainScene() {};

	//�`��ȊO�̍X�V�����s
	AbstractScene* Update() = 0;

	//�`��Ɋւ��邱�Ƃ�����
	void Draw() const = 0;
};

