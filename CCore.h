#pragma once
#include"value.h"
#include"define.h"
//�ھ�� ���� �����ϴ� �������̱� ������ ������ �����Ǹ� �ȵǹǷ�
//���� ������������ 
class CCore
{
public:
	bool Init();
	void Run();

private:
	int OutputMenu();

	DECLARE_SINGLE(CCore)
};

