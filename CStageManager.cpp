#include "CStageManager.h"
#include "CStageEasy.h"
#include "CStageHard.h"
#include "CStageNormal.h"

DEFINITION_SINGLE(CStageManager)

CStageManager::CStageManager()
{

}


CStageManager::~CStageManager()
{
	Safe_Del_Veclist(m_vecStage);
}

bool CStageManager::Init()
{
	if (!CreateStage(ST_EASY))
		return false;

	if (!CreateStage(ST_NORMAL))
		return false;

	if (!CreateStage(ST_HARD))
		return false;

	return true;
}

void CStageManager::Run()
{
}

bool CStageManager::CreateStage(STAGE_TYPE eType)
{
	CStage* pstage = NULL;

	switch (eType)
	{
	case ST_EASY:
		pstage = new CStageEasy;
		break;
	case ST_NORMAL:
		pstage = new CStageNormal;
		break;
	case ST_HARD:
		pstage = new CStageHard;
		break;
	}
	//Ÿ�Կ� �´� init �Լ��� ȣ�� �Ǿ�������. �����Լ��ϱ� �����ǰ�
	if (!pstage->Init())
	{
		SAFE_DELETE(pstage);
		return false;
	}

	m_vecStage.push_back(pstage);

	return true;
}
