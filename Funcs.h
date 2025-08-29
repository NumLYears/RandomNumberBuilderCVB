// 这里是所有的全局静态函数

#ifndef RANDOMNUMBERBUILDER_V3_FUNCS_H
#define RANDOMNUMBERBUILDER_V3_FUNCS_H

#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>

#include "settings.h"

using namespace std;

// static void printc(const char* s, int color) {
//     //彩色文本打印函数（参数为char）
//     HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//     SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | color);
//     printf(s);
//     SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7);
// }

// ---- 彩色打印的颜色代号 ---------------------------------------------------------
// |0 = 黑色|1 = 蓝色|2 = 绿色|3 = 浅绿色|4 = 红色|5 = 紫色|6 = 黄色|7 = 白色|8 = 灰色
// |9 = 淡蓝色|10 = 淡绿色|11 = 淡浅绿色|12 = 淡红色|13 = 淡紫色|14 = 淡黄色|15 = 亮白色

static void coutuser() {
    //提示符生成函数(主界面)
    printf("[@%s] >", User.c_str());
}

static void coutcomm() {
    //提示符生成函数(设置界面)
    printf("\n[CommandMode::%s] >", User.c_str());
}

static void settUI() {
    //跳转至设置UI
    system("cls");
    MessagesCreator(3, Lang, "&::D300~D300| \033[90mCREATOR_NAME::SettUI()\033[0m");
}

static int cinch_MainUI() {
    //读入快捷键（在主界面）
    int Key = _getch();
    while (Key != 'S' and Key != 's' and Key != 'H' and Key != 'h' and Key != 'Q' and Key != 'q' and Key != 'B' and Key != 'b') {
        Key = _getch();
    }
    return Key;
}

static int cinch_SettUI() {
    //读入快捷键（在设置界面）
    int Key = _getch();
    while (Key != 'Z' and Key != 'z' and Key != 'C' and Key != 'c') {
        Key = _getch();
    }
    return Key;
}

static void cutline() {
    //生成一条分割线
    if (Lang == "zh_cn") {
        int a = 27;
        printf("\n\033[90m");
        while (a --) {
            printf("-=");
        }
        printf("-\033[0m\n\n");
    }
    if (Lang == "en") {
        int a = 54;
        printf("\n\033[90m");
        while (a --) {
            printf("-=");
        }
        printf("-\033[0m\n\n");
    }
}

static bool Settings() {
    //设置界面控制函数
    settUI();
    coutuser();
    const int KeySett = cinch_SettUI();
    if (KeySett == 'Z' or KeySett == 'z') {
        system("cls");
        return true;
    }
    else {
        cout << char(KeySett) << endl << endl;

        SettStep2:

        string s;
        MessagesCreator(6, Lang, "&::D600~D600| \033[90mCREATOR_NAME::Command()\033[0m");
        coutcomm();
        fflush(stdin);
        getline(cin, s);
        if (s == "@back") {
            return true;
        }
        else if (s == "ChanStringSett.") {
            MessagesCreator(4, Lang, "&::D400~D400| \033[90mCREATOR_NAME::Command()\033[0m");
            coutcomm();
            string sc;
            cin >> sc;
            if (sc == "ch_username()") {
                if (Lang == "zh_cn") {
                    printf("\n为参数 \033[36m%s\033[0m 创建新的键值:\n", sc.c_str());
                }
                else if (Lang == "en") {
                    printf("\nCreate a new key-value for the parameter \033[36m%s\033[0m :\n", sc.c_str());
                }
                else {
                    printf("\n為參數 \033[36m%s\033[0m 創建新的鍵值:\n", sc.c_str());
                }
            }
            else if (sc == "@back") {
                return true;
            }
            else {
                MessagesCreator(5, Lang, "&::D500~D500| \033[90mCREATOR_NAME::ErrorThrow()\033[0m");
                Sleep(700);
                settUI();
                goto SettStep2;
            }
        }
        else {
            MessagesCreator(5, Lang, "&::D500~D500| \033[90mCREATOR_NAME::ErrorThrow()\033[0m");
            Sleep(700);
            settUI();
            goto SettStep2;
        }
    }
    return false;
}

#endif //RANDOMNUMBERBUILDER_V3_FUNCS_H