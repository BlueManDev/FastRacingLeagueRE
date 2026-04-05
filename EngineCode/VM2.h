#pragma once


// VM namespace comes from some symbols in the PC port of The Touryst, not sure if it's in this but I added it anyway
namespace VM
{
	struct Node
	{
		Node* next;
		const char* scriptPath;
	};
}

class CVM
{
public:
	CVM();

	// This function is so insanely long to the point where Ghidra can't even decompile it with 14 GB allocated.
	// It contains every single variable, constant and function used by the scripting system.
	// It probably won't be fully implemented for a long time due to how long it is and I don't want anyone to experience the pain of compiling this in the future.
	void RegisterScriptBindings();

	void Execute(const char* functionName);

	// For some reason, RegisterScriptBindings registers these functions under CGameEngine.
	void LoadScriptGuarded(const char* scriptPath, int param_2);
	void UnloadScript(const char* scriptName);

	void Debug(const char* param);
	void Breakpoint(unsigned short param);

private:
	VM::Node* loadedScripts;
};
