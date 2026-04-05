#pragma once

#include "Entity.h"


class CEntModel : public CEntity
{
public:
	CEntModel();

	void Attach(int entityId, int param_2);

private:
	int field_0x1a0;
};
