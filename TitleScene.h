#pragma once
#include"AbstractScene.h"

class TitleScene:public AbstractScene
{
private:

public:
	//�R���X�g���N�^
	TitleScene();
	//�f�X�g���N�^
	virtual ~TitleScene();
	//�`��ȊO�̍X�V�����s
	virtual AbstractScene* Update()override;
	//�`��Ɋւ��邱�Ƃ�����
	void Draw() const override;

};

