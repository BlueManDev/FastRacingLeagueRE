#pragma once


extern int gUIdCount;

class CEntity
{
public:
	CEntity();

public:
	const char* name;
	const char* baseName;
	const char* baseClass;

	float priority;

	int uId;

private:
	bool deleteEntity;
};
