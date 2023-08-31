#pragma once

#define RADIUS 14


class GameMainScene;

class BulletsSpawner
{
private:
	int speed;
	int angle;
	int acceleration;
	int angulVelocity;

	int flg;
	int x;
	int y;
	int Speed;
	int type;


public:
	//�R���X�g���N�^
	BulletsSpawner();
	//�f�X�g���N�^
	~BulletsSpawner();
	//�`��ȊO�̍X�V�����s
	virtual void Update() = 0;
	//�`��Ɋւ��邱�Ƃ�����
	virtual void Draw() const = 0;
	
	virtual void Shoot(GameMainScene* g_gamemain) = 0;

	

};

