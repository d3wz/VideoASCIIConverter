#include "ConsoleUI.h"

void ConsoleUI::Initiliaze() {
	consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	SetupConsoleTitle();
	SetConsoleSize();
	ClearScreen();
	DrawLayout();
}

void ConsoleUI::SetupConsoleTitle() {
	SetConsoleTitleA("ASCII VIdeo Converter");
}

void ConsoleUI::SetConsoleSize() {
	SMALL_RECT windowSize = {0, 0, 119, 34};

	SetConsoleWindowInfo(
		consoleHandle,
		TRUE,
		&windowSize
	);
}

void ConsoleUI::ClearScreen() {
	system("cls");
}

void ConsoleUI::SetCursorPosition(short x, short y) {
	COORD position;
	position.X = x;
	position.Y = y;

	SetConsoleCursorPosition(consoleHandle, position);
}

void ConsoleUI::DrawLayout() {
	DrawBox(
		1, 1, 30, 30
	);
	DrawBox(
		35, 1, 80, 30
	);
}

void ConsoleUI::DrawBox(int x, int y, int width, int height) {
	//TOP BORDER
	SetCursorPosition(x, y);
	std::cout << "┌";
	for (int i = 0; i < width - 2; i++) {
		std::cout << "─";
	}
	std::cout << "┐";

	//SIDE BORDERS
	for (int i = 0; i < height - 1; i++) {
		SetCursorPosition(x, y + i);
		std::cout << "│";
		SetCursorPosition(x + width - 1, y + i);
		std::cout << "│";
	}

	//BOTTOM BORDER
	SetCursorPosition(x, y + height - 1);
	std::cout << "└";
	for (int i = 0; i < width - 2, i++;) {
		std::cout << "─";
	}
	std::cout << "┘";
}