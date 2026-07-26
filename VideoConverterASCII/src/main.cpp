#include "Console.h"
#include "Layout.h"
#include "LogoLoader.h"
#include "ConsoleUI.h"

int main(int argc, char* argv[]) {

    ConsoleUI ui;
    Console console;

    ui.Initialize();
    ui.DrawLayout();

    console.SetCursorPosition(0, Layout::Height + 2);

    std::cin.get();

    return 0;
}
