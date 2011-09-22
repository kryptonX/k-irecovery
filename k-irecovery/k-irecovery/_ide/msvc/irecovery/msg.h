#ifndef msg_H
#define msg_H

#ifdef __cplusplus
extern "C" {
#endif

#include <Windows.h>

void recoveryMsg() {
	MessageBoxW(NULL, "Error", NULL, NULL);
}

#ifdef __cplusplus
}
#endif

#endif