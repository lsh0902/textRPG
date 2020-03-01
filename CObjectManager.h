#pragma once

//������ Ŭ�����̱� ������ �ϳ��� ������ ��
//�׷��Ƿ� �̱������� �۾�
#include"value.h"

class CObj; //��� ���漱��
class CObjectManager
{
private://ù��° ���ڴ� Ž�� Ÿ��
	//��� ���� �ϴ¹� ���漱��. ���� ���� ����� x ��ü���� �ȵ� �����ͼ��� ����
	
	//map�� �⺻������ key, value �� �����Ǿ�����
	//ù��° template Ÿ���� key, �ι�° template Ÿ���� value��
	//�׷��� Ÿ���� 2�� �������ְ� key�� �̿��ؼ� Ž���� �ϰ��Ѵ�.
	//���� ���� value�� ������ Ÿ���� ���� �����ϴ� ���̴�.
	
	unordered_map<string, CObj*> m_mapObj;


public:
	bool Init();
	CObj* CreateObj(const string& strKey, OBJECT_TYPE eType);
	CObj* FindOb(const string& strKey);
	DECLARE_SINGLE(CObjectManager)
};

