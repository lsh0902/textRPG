#pragma once

#include"value.h"



class CObj
{
protected:
	CObj();
	virtual ~CObj() = 0; 
	// = 0을달면 순수가상함수가 됨. 순수가상함수는 여기에 정의를 하면 안되지만
	//소멸자 같은 경우는 정의를 해줘야함.

private:
	friend class CObjectManager;
public:
	virtual bool Init();
};

