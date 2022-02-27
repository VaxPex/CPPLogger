#include "Logger.h"

int main()
{
    Logger::setDebugLevel(2);
    LOG_INFO << "hi\n";
    LOG_DEBUG << "hehe"; // debug level needs to be 2
    return 0;
}