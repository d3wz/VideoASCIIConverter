#include "Console.h"
#include "Layout.h"
#include "LogoLoader.h"

int main(int argc, char* argv[]) {

    Console console;

    console.Initiliaze();
    console.SetTitle(L"Video ASCII Converter");
    console.SetSize(
        Layout::Width,
        Layout::Height
    );
    LogoLoader logo;

    if (logo.Load("assets/logo.txt"))
    {
        short y = 2;

        for (const auto& line : logo.GetLines())
        {
            console.Write(
                2,
                y,
                line
            );

            y++;
        }
    }

    system("pause");    

    return 0;
}
