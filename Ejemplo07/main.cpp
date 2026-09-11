#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char** argv)
{
    char c;
    bool test;
    cout << "Pulse teclas numericas. Acabe pulsando ESC\n";
    do {
        c = getchar();
        test = ((c >= '0') && (c <= '9'));
        if (test)
            cout << c << " pulsado.\n";
    } while (c != 27); // 27 es el código ASCII de ESC
    return 0;
}