#pragma once
#include <windows.h>
#include <string>
#include <iostream>
#include <locale>

class Console {
	public:
		Console();
		void Initialize();
		void SetSize(short width, short height);
		void SetTitle(const std::wstring& title);
		void Clear();
		void SetCursorPosition(short x, short y);
		void Write(
			short x,
			short y,
			const std::wstring& text
		);
	
	private:
		HANDLE consoleHandle;
};
