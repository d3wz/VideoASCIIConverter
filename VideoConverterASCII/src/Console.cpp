#include "Console.h"

Console::Console() {
	consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
}

void Console::Initiliaze() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	std::locale::global(std::locale(""));
	std::wcout.imbue(std::locale());
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

void Console::Write(
	short x,
	short y,
	const std::wstring& text
) {
	SetCursorPosition(x, y);
	DWORD written;
	WriteConsoleW(
		consoleHandle,
		text.c_str(),
		static_cast<DWORD>(text.length()),
		&written,
		nullptr
	);
}

void Console::SetSize(short width, short height) {
	COORD bufferSize;
	bufferSize.X = width;
	bufferSize.Y = height;
	SetConsoleScreenBufferSize(
		consoleHandle,
		bufferSize
	);

	SMALL_RECT windowSize;
	windowSize.Left = 0;
	windowSize.Top = 0;
	windowSize.Right = width - 1;
	windowSize.Bottom = height - 1;

	SetConsoleWindowInfo(
		consoleHandle,
		TRUE,
		&windowSize
	);
}