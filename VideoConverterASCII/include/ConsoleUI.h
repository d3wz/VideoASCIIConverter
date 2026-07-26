#pragma once
#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
#include "Console.h"
#include "Layout.h"

class ConsoleUI {
	private:
		Console console;

		Layout currentLayout;

		void DrawBox(int x, int y, int width, int height);
		void DrawLayout();
		void DrawLogo(
			const std::vector<std::wstring>& logo
		);
};
