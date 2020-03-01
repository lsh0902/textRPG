#include "CObjectManager.h"
#include "CPlayer.h"
#include "CMonster.h"
//cpp���ٰ� ��Ŭ����ϸ� ������� ��Ŭ��� �ϴ� ��Ȳ�� ������.


DEFINITION_SINGLE(CObjectManager)

CObjectManager::CObjectManager()
{
}


CObjectManager::~CObjectManager()
{
}

bool CObjectManager::Init()
{
	//�÷��̾� ����
	CObj* pPlayer = CreateObj("Player", OT_PLAYER);


	//���� ����


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

	//���� Ű�� ����� �̿��ؼ� �����͸� �����ϱ� ������
	//make pair�� �̿��ؼ� Ű�� ����� ��� �ʿ� insert�Ѵ�.
	m_mapObj.insert(make_pair(strKey,p));

	return p;
}

CObj* CObjectManager::FindOb(const string& strKey)
{
	//map�� find�Լ��� �������ش�. find�Լ��� key�� �־��ָ� �ش� Ű��
	//Ž���ؼ� �ش�Ű�� iterator��ȯ ������ end ��ȯ
	//ã�� ��� �ܿ� �ƹ��͵� ����.
	unordered_map<string, CObj*>::iterator iter = m_mapObj.find(strKey);

	if (iter == m_mapObj.end())
		return NULL;

	return iter->second;
}