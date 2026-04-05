#pragma once

// Some Wii debugging functions that I might reimplement later, some file system related functions will need to be implemented at some point.


void OSReport(const char* msg, ...);
void OSPanic(const char* file, int line, const char* msg, ...);
