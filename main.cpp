#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>

#include "ansi_func.h"
#include "Debug.h"
#include "Funcs.h"
#include "settings.h"

using namespace std;



int main() {
    int a;
    SetConsoleOutputCP(65001);  // 设置输出代码页为UTF-8
    SetConsoleCP(65001);        // 设置输入代码页为UTF-8

    Main_UI:
    system("cls");
    MessagesCreator(1, Lang, "&::D100~D100| \033[90mCREATOR_NAME::ProgramEnter()\033[0m");
    MessagesCreator(2, Lang, "&::D200~D203| \033[90mCREATOR_NAME::MainUI()\033[0m");

    Sleep(300);
    coutuser();
    const int KeyMain = cinch_MainUI();
    if (KeyMain == 'S' or KeyMain == 's') {
        if (Settings()) goto Main_UI;
    }
    cin >> a;
    return 0;
}
