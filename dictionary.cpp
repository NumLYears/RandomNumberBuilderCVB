// Created by NASA2025 on 2025/8/25.
// This File (dictionary.cpp / .h) stores all stream_out sentences, including Word, tips, debug messages...
#include "dictionary.h"
#include <bits/stdc++.h>
#include "Debug.h"

using namespace std;

namespace ID0x1 {
    string zh = "快速访问 Quick Found\n\n欢迎使用【Random Number Builder CVB】，以下是一些基本功能，键入快捷键以使用，在设置中可设置对应的快捷键\n\n";
    string en = "Menu - Quick Found\n\nWelcome to use [Random Number Builder CVB], There are some basic operations following, Press the keyboard to use them. You can change them in Settings.";
    string tw = "快速訪問 Quick Found\n\n歡迎使用【Random Number Builder CVB】，以下是一些基本功能，鍵入快捷鍵以使用，在設置中可設置對應的快捷鍵\n\n";
}

void MessagesCreator(const int &MessageId, const string &Lang, const string &DebugAddress = "0x0", const string &SendReason = "ProgramNeeded", const int &Version = 0, const int &Numx = 0) {

    /*------
    源解释：MessageId为选发消息的调用头，即对应消息的索引编号；Lang为选发语言，在Lang.dat中存储，程序启动时初始化；
    DebugAdd为调试发生器，在Mainisett.dat配置，默认返回0x0；SR是消息转发触发条件，默认为ProgramNeeded；Version为
    消息版本号，默认值为0；Numx是选发数量参数，为0正常输出，为1输出DebugAdd(手动模式)，为-1输出第六参数，为101输出前
    两个参数，但会屏蔽其他输出。

    先判断第一参数，再判断语言配置，根据[Bool:Debug]配置可选输出[DebugAdd]，根据第六参数额外输出一些内容（参上）。
    ------*/

    if (MessageId == 1) {
        if (Numx == 101) {
            cout << MessageId << "\t" << Lang << "\t";
            goto SkipCommenDebugStep;
        }
        if (DebugModeA == true or Numx == 1)    cout << DebugAddress << "\t";
        if (DebugModeB == true) cout << DebugAddress << "\t" << SendReason << "\t" << Version << "\t";
        if (DebugModeC == true or Numx == -1)   cout << Numx << "\t";

        SkipCommenDebugStep: //因为 Numx == 101，则屏蔽其他输出

        if (Lang == "zh_cn")    cout << ID0x1::zh;
        if (Lang == "zh_tw")    cout << ID0x1::tw;
        if (Lang == "en")       cout << ID0x1::en;
    }

}