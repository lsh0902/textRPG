#pragma once

#include"value.h"



class CObj
{
protected:
	CObj();
	virtual ~CObj() = 0; 
	// = 0���޸� ���������Լ��� ��. ���������Լ��� ���⿡ ���Ǹ� �ϸ� �ȵ�����
	//�Ҹ��� ���� ���� ���Ǹ� �������.

private:
	friend class CObjectManager;
public:
	virtual bool Init();
};

