//包含了Debug配置文件的所有参数

#ifndef RANDOMNUMBERBUILDER_V3_DEBUG_H
#define RANDOMNUMBERBUILDER_V3_DEBUG_H

extern bool DebugModeA;
extern bool DebugModeB;
extern bool DebugModeC;

void MessagesCreator(const int &MessageId, const std::string &Lang, const std::string &DebugAddress = "0x0", const std::string &SendReason = "ProgramNeeded", const int &Version = 0, const int &Numx = 0);

#endif //RANDOMNUMBERBUILDER_V3_DEBUG_H