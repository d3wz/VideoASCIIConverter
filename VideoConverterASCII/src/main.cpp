#include "Console.h"

int main(int argc, char* argv[]) {

    Console console;

    console.Initiliaze();
    console.SetSize(120, 35);

    console.Write(
        5,
        5,
        L"┌──────────────┐"
    );

    console.Write(
        5,
        6,
        L"│  Working!    │"
    );

    console.Write(
        5,
        7,
        L"└──────────────┘"
    );

    system("pause");    

    return 0;
}
