#include "ConsoleUI.h"

void ConsoleUI::DrawLayout() {
	DrawBox(0, 0, Layout::Width, Layout::Height);
	DrawLogo();
	DrawSeparator();
	DrawMenu();
	DrawFooter();
}

void ConsoleUI::Initialize()
{
	console.Initialize();

	console.SetTitle(L"Video to ASCII Converter");

	console.SetSize(
		Layout::Width,
		Layout::Height
	);

	logoLoader.Load("assets/logo.txt");

	menuItems = {
		L"Preset",
		L"ASCII Mode",
		L"Color",
		L"Flicker",
		L"Output"
	};

}

void ConsoleUI::DrawBox(int x, int y, int width, int height) {
	//TOP BORDER
	console.Write(x, y, L"┌");
	std::wstring horizontal;
	horizontal.append(width - 2, L'─');
	console.Write(x + 1, y, horizontal);
	console.Write(x + width - 1, y, L"┐");

	//SIDE BORDERS
	for (int i = 1; i < height - 1; i++) {
		console.Write(x, y + i, L"│");
		console.Write(x + width - 1, y + i, L"│");
	}

	//BOTTOM BORDER
	console.Write(x, y + height - 1, L"└");
	console.Write(x + 1, y + height - 1, horizontal);
	console.Write(x + width - 1, y + height - 1, L"┘");
}

void ConsoleUI::DrawLogo() {
	const auto& logo = logoLoader.GetLines();

	short y = Layout::LogoY;

	for (const auto& line : logo)
	{
		console.Write(
			Layout::LogoX,
			y,
			line
		);

		y++;
	}
}

void ConsoleUI::DrawMenu() {
	console.Write(
		Layout::MenuX,
		5,
		L"Settings"
	);

	short y = Layout::MenuY + 3;

	for (int i = 0; i < menuItems.size(); i++) {
		std::wstring text;

		if (i == selectedMenuItem) {
			text = L"> " + menuItems[i];
		}
		else {
			text = L"  " + menuItems[i];
		}

		console.Write(
			Layout::MenuX,
			y,
			text
		);

		y += 2;
	}
}


void ConsoleUI::DrawSeparator() {
	for (short y = 1; y < Layout::Height - Layout::FooterHeight - 1; y++) {
		console.Write(
			Layout::SeparatorX,
			y,
			L"│"
		);
	}
}

void ConsoleUI::DrawFooter() {
	console.Write(
		Layout::StatusX,
		Layout::FooterY,
		L"Status: Ready"
	);

	console.Write(
		Layout::VersionX,
		Layout::FooterY,
		L"v0.1"
	);
}