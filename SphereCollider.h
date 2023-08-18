#pragma once
#include"GameMainScene.h"

//���S���W
struct Location
{
	float x;	//���S���W(x)
	float y;	//���S���W(y)
	float r;	//���a(r)
};

//�͈�
struct Erea
{
	float height;	//����
	float width;	//��
	float rate;		//�傫���̔{��
};
class SphereCollider
{
protected:
	Location location;	//���S���W
	Erea erea; //�͈�
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

	int Hit(SphereCollider* bCollider);

	//���S���W�̎擾
	Location GetLocation()const;
		
	//���a�̎擾
	Erea GetErea()const;

	//���S���W�̐ݒ�
	void SetLocation(Location location);
};

