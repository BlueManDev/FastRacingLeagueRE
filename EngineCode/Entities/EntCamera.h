#pragma once

#include "EntModel.h"


class CEntCamera : public CEntModel
{
public:
	CEntCamera();

public:
	const char* shadowMapLightName;
};
