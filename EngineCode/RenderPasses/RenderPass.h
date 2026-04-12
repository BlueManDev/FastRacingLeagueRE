#pragma once

#include "RenderPassFog.h"


class CRenderPass
{
public:
	CRenderPass();
	CRenderPass* Create();

public:
	CRenderPassFog fog;
};
