//ANSI转义序列

#ifndef RANDOMNUMBERBUILDER_V3_ANSI_FUNC_H
#define RANDOMNUMBERBUILDER_V3_ANSI_FUNC_H

#include <iostream>
#include <string>
using namespace std;

class c {
public:
    static const string black;
    static const string red;
    static const string green;
    static const string yellow;
    static const string blue;
    static const string magenta;
    static const string cyan;
    static const string white;
    static const string gray;
    static const string redb;
    static const string greenb;
    static const string yellowb;
    static const string blueb;
    static const string magentab;
    static const string cyanb;
    static const string whiteb;
    static const string blackbg;
    static const string redbg;
    static const string greenbg;
    static const string yellowbg;
    static const string bluebg;
    static const string magentabg;
    static const string cyanbg;
    static const string whitebg;
    static const string R;//重置
    static const string B;//加粗
    static const string U;//底线
    static const string V;//反转
    static void print(const string& color, const string& text, bool n = true) {
        cout << color << text << R;
        if(n) cout << "\n";
    }
};

#endif //RANDOMNUMBERBUILDER_V3_ANSI_FUNC_H