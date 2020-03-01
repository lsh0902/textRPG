#pragma once
//부모클래스의 소멸자가 virual이어야 다형성 이용해서,
//부모 포인터 타입으로 가지고 있을때 동적할당한걸 메모리 해제하면 자식의 소멸자가 호출됨.
#include"value.h"

class CStage
{
public:
	CStage();
	virtual ~CStage();

	virtual bool Init() = 0;
	virtual void Run() = 0;
};

