#include "EntModel.h"

#include "../GameEngine.h"


void CEntModel::Attach(int entityId, int param_2)
{
	field_0x1a0 = entityId;

	CEntModel* this_00;

	if (entityId != 0)
	{
		if (entityId = uId)
		{
			field_0x1a0 = 0;
			this_00 = this;
		}
		else
		{
			this_00 = GetGameEngine()->SearchEntityId(entityId);
		}

		if (param_2 != 0)
		{
			// Matrix stuff I still gotta implement
		}
	}
}
