#pragma once
#include <windows.h>
#include <string>
#include <iostream>
#include <locale>

class Console {
	public:
		Console();
		void Initiliaze();
		void Clear();
		void SetCursorPosition(short x, short y);
		void Write(
			short x,
			short y,
			const std::wstring& text
		);
		void SetSize(short width, short height);
		void SetTitle(const std::wstring& title);
	
	private:
		HANDLE consoleHandle;
};
