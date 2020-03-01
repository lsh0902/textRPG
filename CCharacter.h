#pragma once
#include "CObj.h"
class CCharacter :
	public CObj
{
protected:
	CCharacter();
	virtual ~CCharacter() = 0;

public:
	virtual bool Init();
};

