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
����� �̿��ؼ� ���������� �ϳ��� ����, �迭, 
��ũ�帮��Ʈ���ٰ� �Ȱ��� �θ������� Ÿ������
�����س��� ����ϴ� �� ���������Ƿ� ���ϰ� ��밡��.
�׷��� ������ ������. ���� �ڽ�Ÿ���� ������������ �ϳ��� �θ�Ÿ������ ���� �����Ѱ�.
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

