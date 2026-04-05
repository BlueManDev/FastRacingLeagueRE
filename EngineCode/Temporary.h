#pragma once

// Stuff that doesn't really have a location yet

// Some sort of resource struct/class, will probably dive back into The Touryst eventually to see if there's any symbols related to this
struct AutoStruct1
{
	// Temporary names based on their use in CVM::LoadScriptGuarded
	int magicString;
	int version;
	int field_0x8;
};

// Another resource class, presumably a resource manager
class AutoClass2
{
public:
	AutoClass2() = default;

	AutoStruct1* Load(const char* resourcePath, int param_2, int param_3);
};

AutoClass2* gAutoClass2;
