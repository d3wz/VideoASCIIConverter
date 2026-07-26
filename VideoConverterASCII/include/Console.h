#pragma once
#include <windows.h>
#include <string>
#include <iostream>

class Console {
	public:
		Console();
		void Initiliaze();
		void Clear();
		void SetCursorPosition(short x, short y);
	
	private:
		HANDLE consoleHandle;
};