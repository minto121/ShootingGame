#pragma once
#include"AbstractScene.h"
class GameMainScene:public AbstractScene
{
private:

public:
	//�R���X�g���N�^
	GameMainScene();
	//�f�X�g���N�^
	~GameMainScene();
	//�`��ȊO�̍X�V�����s
	AbstractScene* Update();
	//�`��Ɋւ��邱�Ƃ�����
	void Draw() const;
};

