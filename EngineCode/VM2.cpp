#include "VM2.h"

#include "Temporary.h"

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
				AutoStruct1* v0 = gAutoClass2->Load(scriptPath, 0, 32);
				if (v0->magicString == 0x53485641) // SHVA
				{
					if (v0->version != 0x132b5a0)
						OSPanic(__FILE__, __LINE__, "%s: illegal version (expected %d, got %d)", scriptPath, 0x132b5a0, v0->magicString); // This should be on line 632 according to the original code

					// Loads each script inside the .vma archive???
					for (int i = v0->field_0x8; i != 0; i = (i + i + 4)) // what?
					{
						// CVM function call goes here, it basically does similar thing to this function but for SHVM scripts

					}
				}
				else
				{
					// Same function call without the for loop bullshit
				}
			}
		}

		if (strcmp(loadedScripts->scriptPath, scriptPath) == 0) break;
		if (loadedScripts != nullptr)
			loadedScripts = loadedScripts->next;
	}
}
