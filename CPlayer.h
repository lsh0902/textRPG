#pragma once
#include "CCharacter.h"
class CPlayer :
	public CCharacter
{
private:
	CPlayer();
	~CPlayer();

private:
	friend class CObjectManager;

public:
	virtual bool Init();
};

