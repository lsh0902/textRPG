#pragma once
#include "CStage.h"
class CStageHard :
	public CStage
{
public:
	CStageHard();
	~CStageHard();

	virtual bool Init();
	virtual void Run();
};

