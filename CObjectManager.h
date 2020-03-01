#pragma once

//관리자 클래스이기 때문에 하나만 있으면 됨
//그러므로 싱글톤으로 작업
#include"value.h"

class CObj; //요게 전방선언
class CObjectManager
{
private://첫번째 인자는 탐색 타입
	//헤더 없이 하는법 전방선언. 선언만 가능 사용은 x 객체생성 안됨 포인터선언만 가능
	
	//map은 기본적으로 key, value 로 구성되어있음
	//첫번째 template 타입이 key, 두번째 template 타입이 value임
	//그래서 타입을 2개 지정해주고 key를 이용해서 탐색을 하게한다.
	//실제 값은 value에 지정된 타입의 값을 저장하는 것이다.
	
	unordered_map<string, CObj*> m_mapObj;


public:
	bool Init();
	CObj* CreateObj(const string& strKey, OBJECT_TYPE eType);
	CObj* FindOb(const string& strKey);
	DECLARE_SINGLE(CObjectManager)
};

