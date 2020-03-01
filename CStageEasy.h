#pragma once
#include "CStage.h"
class CStageEasy :
	public CStage
{
public:
	CStageEasy();
	~CStageEasy();

	virtual bool Init();
	virtual void Run();
};

