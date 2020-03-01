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
	//타입에 맞는 init 함수가 호출 되었을거임. 가상함수니까 공유되고
	if (!pstage->Init())
	{
		SAFE_DELETE(pstage);
		return false;
	}

	m_vecStage.push_back(pstage);

	return true;
}
