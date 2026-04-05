#pragma once

#include "VM2.h"


// Both of these are used for some reason, will eventually remove GetGameEngine and just use gGameEngine instead
CGameEngine* gGameEngine;
CGameEngine* GetGameEngine() { return gGameEngine; }

class CGameEngine
{
public:
	CGameEngine();
	
	void Init();

	int SearchEntityId(int entityId);

private:
	CVM* vm;
};
