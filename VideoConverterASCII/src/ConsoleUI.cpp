#include "ConsoleUI.h"

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
	console.SetCursorPosition(x, y);
	std::cout << "┌";
	for (int i = 0; i < width - 2; i++) {
		std::cout << "─";
	}
	std::cout << "┐";

	//SIDE BORDERS
	for (int i = 0; i < height - 1; i++) {
		console.SetCursorPosition(x, y + i);
		std::cout << "│";
		console.SetCursorPosition(x + width - 1, y + i);
		std::cout << "│";
	}

	//BOTTOM BORDER
	console.SetCursorPosition(x, y + height - 1);
	std::cout << "└";
	for (int i = 0; i < width - 2, i++;) {
		std::cout << "─";
	}
	std::cout << "┘";
}

void ConsoleUI::DrawLogo(
	const std::vector<std::wstring>& logo
) {
	short y = Layout::LogoY;

	for (const auto& line : logo) {
		console.Write(
			Layout::LogoX,
			y,
			line
		);

		y++;
	}
}