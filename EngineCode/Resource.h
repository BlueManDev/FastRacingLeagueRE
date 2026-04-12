#pragma once


struct CResource
{
	// Temporary names based on their use in CVM::LoadScriptGuarded
	// These are all completely wrong and are probably just structs on their own
	int headerId;
	int version;
	int field_0x8;
};

// Another resource class, presumably a resource manager
class CResourceMgr
{
public:
	CResourceMgr() = default;

	CResource* Load(const char* resourcePath, int param_2, int param_3);

	void FUN_8004755c(CResource* resource);
};

extern CResourceMgr* gResourceMgr;
