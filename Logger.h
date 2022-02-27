#pragma once

#include <iostream>

//todo add time hh:mm:ss

#define LOG_INFO std::cout << "\x1b[38;5;63m" << "INFO > \x1b[38;5;231m"
#define LOG_ALERT std::cout << "\x1b[38;5;83m" << "ALERT > \x1b[38;5;231m"
#define LOG_WARNING std::cout << "\x1b[38;5;227m" << "WARNING > \x1b[38;5;231m"
#define LOG_CRITICAL std::cout << "\x1b[38;5;124m" << "CRITICAL > \x1b[38;5;231m"
#define LOG_NOTICE std::cout << "\x1b[38;5;87m" << "NOTICE > \x1b[38;5;231m"
#define LOG_ERROR std::cout << "\x1b[38;5;227m" << "ERROR > \x1b[38;5;231m"
#define LOG_DEBUG if(debuglevel > 1)std::cout << "\x1b[38;5;145m" << "DEBUG > \x1b[38;5;231m"

int debuglevel = 1;

class Logger {
public:
	static auto setDebugLevel(int new_level) -> void {
		debuglevel = new_level;
	}
	static auto getDebugLevel() -> int {
		return debuglevel;
	}
};
