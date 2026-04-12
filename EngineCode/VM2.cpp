#include "VM2.h"

#include "WiiSDKFunctions/osD.h"

#include <string>


CVM::CVM()
{
	RegisterScriptBindings();
}

void CVM::LoadScriptGuarded(const char* scriptPath, int param_2)
{
	while (true)
	{
		if (loadedScripts == nullptr)
		{
			if (*scriptPath == '/')
			{
				CResource* scriptResource = gResourceMgr->Load(scriptPath, 0, 32);
				if (scriptResource->headerId == 0x53485641) // "SHVA"
				{
					if (scriptResource->version != 0x132b5a0)
						OSPanic(__FILE__, __LINE__, "%s: illegal version (expected %d, got %d)", scriptPath, 0x132b5a0, scriptResource->headerId); // This should be on line 632 according to the original code

					// Loads each script inside the .vma archive???
					for (int i = scriptResource->field_0x8; i != 0; i = (i + i + 4)) // what?
					{
						// LoadScript__Unk is called here with some weird pointer bullshit
					}
				}
				else
				{
					LoadScript__Unk(scriptPath, scriptResource, 0, param_2);
				}
			}
		}

		if (strcmp(loadedScripts->scriptPath, scriptPath) == 0) break;
		if (loadedScripts != nullptr)
			loadedScripts = loadedScripts->next;
	}
}
