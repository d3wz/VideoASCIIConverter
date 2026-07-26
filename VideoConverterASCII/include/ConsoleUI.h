#pragma once
#include <iostream>
#include <windows.h>
#include "Layout.h"

class ConsoleUI {
	public:
		void Initiliaze();
	private:
		HANDLE consoleHandle;

		Layout currentLayout;

		void SetConsoleSize();
		void SetupConsoleTitle();
		void ClearScreen();
		void SetCursorPosition(short x, short y);

		void DrawBox(int x, int y, int width, int height);
		void DrawLayout();
};
