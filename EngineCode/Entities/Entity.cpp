#include "Entity.h"

#include "../WiiSDKFunctions/osD.h"


int gUIdCount = 1;

CEntity::CEntity()
{
	baseClass = "CEntity";

	gUIdCount++;
	if (gUIdCount == 0)
	{
		gUIdCount = 128;
		OSReport("uId overflowed.start again at uId %d", 128);
	}
	uId = gUIdCount;
}
