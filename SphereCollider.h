#pragma once
class SphereCollider
{
private:
	

public:
	//�R���X�g���N�^
	SphereCollider();
	//�f�X�g���N�^
	~SphereCollider();
	//�`��ȊO�̍X�V�����s
	void Update();
	//�`��Ɋւ��邱�Ƃ�����
	void Draw() const ;
	//�����蔻��̔���
	void CheckCollision();
};

