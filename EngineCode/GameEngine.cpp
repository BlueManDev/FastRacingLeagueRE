#include "GameEngine.h"


extern CGameEngine* gGameEngine = nullptr;

CGameEngine::CGameEngine() : vm()
{
}

void CGameEngine::Init()
{
	vm->LoadScriptGuarded("entities/entities.vma", 1);
	vm->Execute("init_customproperties");
	vm->Execute("init_globals");
	vm->Execute("gameControl");
}
