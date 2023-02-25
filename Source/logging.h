#pragma once
#include <cstdarg>

#define LOG(fmt,...) \
	{ \
		printf("[ExtremeIshin] "); \
		printf(fmt,__VA_ARGS__); \
		printf("\n"); \
	}
