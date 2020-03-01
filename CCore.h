#pragma once
#include"value.h"
#include"define.h"
//코어는 모든걸 관리하는 관리자이기 때문에 여러개 생성되면 안되므로
//단일 디자인패턴인 
class CCore
{
public:
	bool Init();
	void Run();

private:
	int OutputMenu();

	DECLARE_SINGLE(CCore)
};

