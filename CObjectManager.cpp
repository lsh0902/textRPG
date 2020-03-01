#include "CObjectManager.h"
#include "CPlayer.h"
#include "CMonster.h"
//cpp에다가 인클루드하면 헤더끼리 인클루드 하는 상황이 없어짐.


DEFINITION_SINGLE(CObjectManager)

CObjectManager::CObjectManager()
{
}


CObjectManager::~CObjectManager()
{
}

bool CObjectManager::Init()
{
	//플레이어 생성
	CObj* pPlayer = CreateObj("Player", OT_PLAYER);


	//몬스터 생성


	return true;
}

CObj * CObjectManager::CreateObj(const string& strKey, OBJECT_TYPE eType)
{
	CObj* p = NULL;

	switch (eType)
	{
	case OT_PLAYER:
		p = new CPlayer;
		break;
	case OT_MONSTER:
		p = new CMonster;
		break;
	}
	if (!p->Init()) {
		SAFE_DELETE(p);
		return NULL;
	}

	//맵은 키와 밸류를 이용해서 데이터를 관리하기 때문에
	//make pair를 이용해서 키와 밸류를 묶어서 맵에 insert한다.
	m_mapObj.insert(make_pair(strKey,p));

	return p;
}

CObj* CObjectManager::FindOb(const string& strKey)
{
	//map은 find함수를 제공해준다. find함수에 key를 넣어주면 해당 키를
	//탐색해서 해당키의 iterator반환 없으면 end 반환
	//찾는 기능 외엔 아무것도 없다.
	unordered_map<string, CObj*>::iterator iter = m_mapObj.find(strKey);

	if (iter == m_mapObj.end())
		return NULL;

	return iter->second;
}