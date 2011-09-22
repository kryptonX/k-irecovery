#ifndef modules_H
#define modules_H

#include <stdio.h>
#include <math.h>
#include <string.h>
#include "kstring.h"

/*--*/

int k_init();
int setup();
void grabBootrom();
int grabDeviceChip();
int grabBoard();
void grabDevice(void);
void grabDeviceString();
int grabDeviceMode();
int grabModeValue();
int grabAppleVendorID(void);
int grabSerialNumber();
void resetRecovery(void);
int grabDfuPath();
int grabiBootPath();
int grabProduct(void);
int grabIndex(void);
void grabInterface();
int checkMode(void);
int recvMode();

int model();

/*--*/

#endif