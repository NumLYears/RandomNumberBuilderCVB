// This File (dictionary.cpp / .h) stores all stream_out sentences, including Word, tips, debug messages...

#include <bits/stdc++.h>
#include "Debug.h"
#include "Funcs.h"
#include "settings.h"
using namespace std;

namespace D100 {
    string cn = "欢迎使用\033[1m【Random Number Builder 2025】\033[0m，\n以下是一些基本功能，键入快捷键以使用，在\033[94m设置\033[0m中可调整对应的快捷键\n";

    string en = "Welcome to use \033[1m[Random Number Builder 2025]\033[0m, \nThere are some basic operations following, Press the keyboard to use the"
                "m. You can change them in \033[94mSettings\033[0m.\n";

    string tw = "歡迎使用\033[1m【Random Number Builder 2025】\033[0m，\n以下是一些基本功能，鍵入快捷鍵以使用，在\033[94m設置\033[0m中可調整對應的快捷鍵\n";
}

namespace D200 {string cn = "\t全局设置\t对控制台与算法进行配置整合\n", en = "\tSettings\tIntegrate and configure the console and algorithm\n", tw = "\t全局設置\t對控制臺與算法進行配置整合\n";}
namespace D201 {string cn = "\t快速生成\t快速生成一组随机序列\n", en = "\tQuick Build\tQuickly generate a set of random sequences\n", tw = "\t快速生成\t快速生成一組隨機序列，可在設置中配置生成參數\n";}
namespace D202 {string cn = "\t普通生成\t更加详细地生成随机序列\n", en = "\tCommen Build\tGenerate a random sequence in greater detail\n", tw = "\t普通生成\t更加詳細地生成隨機序列\n";}
namespace D203 {string cn = "\t帮助\t\t查看本软件的帮助信息\n", en = "\tProgram Help\tView the help information of this software\n", tw = "\t幫助\t\t查看本軟件的幫助信息\n";}

namespace D300 {
    string cn = "\033[94m全局配置\033[0m\n\n这里是本软件的设置界面，您可以通过命令导航来选择您要配置的参数，关于命令语法，请转到\033[94m帮助\033[0m或者本软件的开发文档"
                "进行阅览。按键盘上的“Z键”以返回主界面，或按“C键”以键入命令。也可以在任何时候输入\"@back\"返回主界面";

    string en = "\033[94mSettings\033[0m\n\nThis is the settings interface of this software. You can navigate through commands to select the paramet"
                "ers you want to configure. For command syntax, please go to the \033[94mhelp\033[0m section or the development documentation of this"
                " software for further reading, Press 'Z' : back for the main menu, Press 'C' : open command. It is also possible to enter \"@back\" r"
                "eturn to the main interface at any time";

    string tw = "\033[94m全域配寘\033[0m\n\n這裡是本軟件的設定介面，您可以通過命令導航來選擇您要配寘的參數，關於命令語法，請轉到\033[94m幫助\033[0m或者本軟件的開發檔案"
                "進行閱覽。按鍵盤上的“Z鍵”以返回主界面，或按“C鍵”以鍵入命令。也可以在任何時候輸入\"@back\"返回主介面";
}

namespace D400 {string cn = "\n请输入目标静态参数的SegID:", en = "\nPlease enter the SegIds:", tw = "\n請輸入目標靜態參數的SegID:";}

namespace D500 {string cn = "\033[91m查询不到该命令子字节，请重新键入:\033[0m", en = "\033[91mThe command subbyte cannot be found, Please type it again:\033[0m", tw = "\033[91m查詢不到該命令子字節，請重新鍵入:\033[0m";}

namespace D600 {string cn = "请在下方输入 静态参数 或 成员命令 的命令头:", tw = "請在下方輸入 靜態參數 或成員命令 的命令頭：", en = "Enter the command header for Static Parameters or Member Commands below:";}

void MessagesCreator(int MessageId, string Lang, string DebugAddress, int Numx) {

    /*------
    MessageId为选发消息的调用头，即对应消息的索引编号；Lang为选发语言，在Lang.dat中存储，程序启动时初始化；
    DebugAdd为调试发生器，在Mainisett.dat配置，默认返回0x0；Numx是选发数量参数，为0正常输出，为1输出DebugAdd
    (手动模式)，为-1输出第四参数，为-2输出前两个参数，但会屏蔽其他输出。

    先判断第一参数，再判断语言配置，根据[Bool:Debug]配置可选输出[DebugAdd]，根据第四参数额外输出一些内容（参上）。
    ------*/

    if (MessageId == 1) {
        if (Numx == -2) {
            cout << MessageId << "\t" << Lang << "\t";
            if (Lang == "zh_cn")    cout << D100::cn;
            if (Lang == "zh_tw")    cout << D100::tw;
            if (Lang == "en")       cout << D100::en;
            cutline();
            return;
        }
        if (DebugModeA == true or Numx == 1)    cout << DebugAddress << "[::AUTO_OUT]\n";
        if (DebugModeB == true or Numx == -1)   cout << Numx << "[::AUTO_OUT]\n";
        if (Lang == "zh_cn")    cout << D100::cn;
        if (Lang == "zh_tw")    cout << D100::tw;
        if (Lang == "en")       cout << D100::en;
        cutline();
        return;
    }

    if (MessageId == 2) {
        if (Numx == -2) {
            cout << MessageId << "\t" << Lang << "\t";
            if (Lang == "zh_cn")    printf("[%c]%s[%c]%s[%c]%s[%c]%s", SK, D200::cn.c_str(), QBK, D201::cn.c_str(), CBK, D202::cn.c_str(), HK, D203::cn.c_str());
            if (Lang == "zh_tw")    printf("[%c]%s[%c]%s[%c]%s[%c]%s", SK, D200::tw.c_str(), QBK, D201::tw.c_str(), CBK, D202::tw.c_str(), HK, D203::tw.c_str());
            if (Lang == "en")       printf("[%c]%s[%c]%s[%c]%s[%c]%s", SK, D200::en.c_str(), QBK, D201::en.c_str(), CBK, D202::en.c_str(), HK, D203::en.c_str());
            cutline();
            return;
        }
        if (DebugModeA == true or Numx == 1)    cout << DebugAddress << "[::AUTO_OUT]\n";
        if (DebugModeB == true or Numx == -1)   cout << Numx << "[::AUTO_OUT]\n";
        if (Lang == "zh_cn")    printf("[%c]%s[%c]%s[%c]%s[%c]%s", SK, D200::cn.c_str(), QBK, D201::cn.c_str(), CBK, D202::cn.c_str(), HK, D203::cn.c_str());
        if (Lang == "zh_tw")    printf("[%c]%s[%c]%s[%c]%s[%c]%s", SK, D200::tw.c_str(), QBK, D201::tw.c_str(), CBK, D202::tw.c_str(), HK, D203::tw.c_str());
        if (Lang == "en")       printf("[%c]%s[%c]%s[%c]%s[%c]%s", SK, D200::en.c_str(), QBK, D201::en.c_str(), CBK, D202::en.c_str(), HK, D203::en.c_str());
        cutline();
        return;
    }

    if (MessageId == 3) {
        if (Numx == -2) {
            cout << MessageId << "\t" << Lang << "\t";
            if (Lang == "zh_cn")    printf("%s\n", D300::cn.c_str());
            if (Lang == "zh_tw")    printf("%s\n", D300::tw.c_str());
            if (Lang == "en")       printf("%s\n", D300::en.c_str());
            cutline();
            return;
        }
        if (DebugModeA == true or Numx == 1)    cout << DebugAddress << "\n";
        if (DebugModeB == true or Numx == -1)   cout << Numx << "\n";
        if (Lang == "zh_cn")    printf("%s\n", D300::cn.c_str());
        if (Lang == "zh_tw")    printf("%s\n", D300::tw.c_str());
        if (Lang == "en")       printf("%s\n", D300::en.c_str());
        cutline();
        return;
    }

    if (MessageId == 4) {
        if (Numx == -2) {
            cout << MessageId << "\t" << Lang << "\t";
            if (Lang == "zh_cn")    printf("%s", D400::cn.c_str());
            if (Lang == "zh_tw")    printf("%s", D400::tw.c_str());
            if (Lang == "en")       printf("%s", D400::en.c_str());
            return;
        }
        if (DebugModeA == true or Numx == 1)    cout << DebugAddress << "\n";
        if (DebugModeB == true or Numx == -1)   cout << Numx << "\n";
        if (Lang == "zh_cn")    printf("%s", D400::cn.c_str());
        if (Lang == "zh_tw")    printf("%s", D400::tw.c_str());
        if (Lang == "en")       printf("%s", D400::en.c_str());
        return;
    }

    if (MessageId == 5) {
        if (Numx == -2) {
            cout << MessageId << "\t" << Lang << "\t";
            if (Lang == "zh_cn")    printf("%s", D500::cn.c_str());
            if (Lang == "zh_tw")    printf("%s", D500::tw.c_str());
            if (Lang == "en")       printf("%s", D500::en.c_str());
            return;
        }
        if (DebugModeA == true or Numx == 1)    cout << DebugAddress << "\n";
        if (DebugModeB == true or Numx == -1)   cout << Numx << "\n";
        if (Lang == "zh_cn")    printf("%s", D500::cn.c_str());
        if (Lang == "zh_tw")    printf("%s", D500::tw.c_str());
        if (Lang == "en")       printf("%s", D500::en.c_str());
        return;
    }

    if (MessageId == 6) {
        if (Numx == -2) {
            cout << MessageId << "\t" << Lang << "\t";
            if (Lang == "zh_cn")    printf("%s", D600::cn.c_str());
            if (Lang == "zh_tw")    printf("%s", D600::tw.c_str());
            if (Lang == "en")       printf("%s", D600::en.c_str());
            return;
        }
        if (DebugModeA == true or Numx == 1)    cout << DebugAddress << "\n";
        if (DebugModeB == true or Numx == -1)   cout << Numx << "\n";
        if (Lang == "zh_cn")    printf("%s", D600::cn.c_str());
        if (Lang == "zh_tw")    printf("%s", D600::tw.c_str());
        if (Lang == "en")       printf("%s", D600::en.c_str());
        return;
    }

}