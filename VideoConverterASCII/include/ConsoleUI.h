#pragma once
#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
#include "Console.h"
#include "Layout.h"
#include "LogoLoader.h"

class ConsoleUI {
	public:
		void Initialize();
		void DrawLayout();

	private:
		Console console;
		LogoLoader logoLoader;

		std::vector<std::wstring> menuItems;
		int selectedMenuItem = 0;

		void DrawBox(int x, int y, int width, int height);
		void DrawLogo();
		void DrawMenu();
		void DrawSeparator();
		void DrawFooter();
};
