#pragma once
//�θ�Ŭ������ �Ҹ��ڰ� virual�̾�� ������ �̿��ؼ�,
//�θ� ������ Ÿ������ ������ ������ �����Ҵ��Ѱ� �޸� �����ϸ� �ڽ��� �Ҹ��ڰ� ȣ���.
#include"value.h"

class CStage
{
public:
	CStage();
	virtual ~CStage();

	virtual bool Init() = 0;
	virtual void Run() = 0;
};

