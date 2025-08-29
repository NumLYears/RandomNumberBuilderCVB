//全局设置

#ifndef RANDOMNUMBERBUILDER_V3_SETTINGS_H
#define RANDOMNUMBERBUILDER_V3_SETTINGS_H
#include <string>

inline std::string Lang = "zh_cn";
inline std::string User = "Admin";

inline char SK = 'S';
inline char HK = 'H';
inline char QBK = 'Q';
inline char CBK = 'C';

void MessagesCreator(int MessageId, std::string Lang, std::string DebugAddress = "ADD = -1", int Numx = 0);

#endif //RANDOMNUMBERBUILDER_V3_SETTINGS_H