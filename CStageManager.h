#pragma once
#include"value.h"

enum STAGE_TYPE
{
	ST_NONE,
	ST_EASY,
	ST_NORMAL,
	ST_HARD,
	ST_BACK
};
/*
상속을 이용해서 만들어놓으면 하나의 백터, 배열, 
링크드리스트에다가 똑같은 부모포인터 타입으로
저장해놓고 사용하는 게 가능해지므로 편하게 사용가능.
그래서 관리도 편해짐. 실제 자식타입은 여러가지지만 하나의 부모타입으로 관리 가능한것.
*/



class CStageManager
{
private:
	vector<class CStage*> m_vecStage;


public:
	bool Init();
	void Run();

private:
	bool CreateStage(STAGE_TYPE eType);

	DECLARE_SINGLE(CStageManager)
};

