#pragma once
class BulletsSpawner
{
private:
	int flg;
	int x;
	int y;
	int speed;
public:
	//�R���X�g���N�^
	BulletsSpawner();
	//�f�X�g���N�^
	~BulletsSpawner();
	//�`��ȊO�̍X�V�����s
	void Update();
	//�`��Ɋւ��邱�Ƃ�����
	void Draw() const;
	//�{�[���̈ړ�
	void MoveBall();

};

