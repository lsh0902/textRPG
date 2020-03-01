#pragma once
#include "CStage.h"
class CStageNormal :
	public CStage
{
public:
	CStageNormal();
	~CStageNormal();

	virtual bool Init();
	virtual void Run();
};

