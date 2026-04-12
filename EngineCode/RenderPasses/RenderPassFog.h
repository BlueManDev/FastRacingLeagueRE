#pragma once

#include "../Temporary.h"


class CRenderPassFog
{
public:
	CRenderPassFog() : start(0.5f), end(1.0f), color(255.0f, 255.0f, 255.0f) {}

public:
	float start, end;
	CVector color;
};
