#pragma once
#include"AbstractScene.h"

class TitleScene:public AbstractScene
{
private:

public:
	//�R���X�g���N�^
	TitleScene();
	//�f�X�g���N�^
	~TitleScene();
	//�`��ȊO�̍X�V�����s
	AbstractScene* Update()override;
	//�`��Ɋւ��邱�Ƃ�����
	void Draw() const override;
};

