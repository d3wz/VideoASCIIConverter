#include "Console.h"

Console::Console() {
	consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
}

void Console::Initiliaze() {

}

void Console::Clear() {
	system("cls");
}

void Console::SetCursorPosition(short x, short y) {
	COORD position;
	position.X = x;
	position.Y = y;

	SetConsoleCursorPosition(
		consoleHandle,
		position
	);
}