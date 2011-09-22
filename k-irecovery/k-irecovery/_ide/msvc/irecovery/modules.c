#include <stdio.h>
#include "kstring.h"
#include "libirecovery.h"
#include "libpois0n.h"

int serialNum;
int modelNum;

int k_init() {
	setup();		
}

int setup() {
	
	if (client->mode == kRecoveryMode1 || client->mode == kRecoveryMode2 || client->mode == kRecoveryMode3 || client->mode == kRecoveryMode4) {		
	} else if (client->mode == kDfuMode) {
		printf("You are in DFU!\nA reboot will not be possible!\n");		
		return EOF;
		
	} else if (client == NULL) {
		printf("Could not connect to device\n");
		return EOF;
	}
}

void grabBootrom() {
	if (device->chip_id == CPID_IPOD4G) {
		printf("BOOTROM: S5L8930\n");
	} else if (device->chip_id == CPID_IPHONE3GS) {
		printf("BOOTROM: S5L8920\n");
	} else if (device->chip_id == CPID_IPHONE3G) {
		printf("BOOTROM: S5L8900\n");
	} else if (device->chip_id == CPID_IPHONE2G) {
		printf("BOOTROM: S5L8900\n"); 
	} else if (device->chip_id == CPID_IPOD2G) {
		printf("BOOTROM: S5l8720\n");
	} else if (device->chip_id == CPID_IPOD1G) {
		printf("BOOTROM: S5L8900\n"); 	
	} else if (device->chip_id == CPID_IPOD3G) {
		printf("BOOTROM:  S5L8922\n");
	} else if (device->chip_id == CPID_IPAD1G) {
		printf("BOOTROM: S5L8930\n");
	} else if (device->chip_id == CPID_APPLETV2) {
		printf("BOOTROM: S5L8930\n");
	} else  {
		printf("BOOTROM check was skipped\n");
		
	}
}

int grabDeviceChip() {
	if (device->chip_id == CPID_IPOD4G) {
		printf("CHIP ID: %d\n", CPID_IPOD4G);
	} else if (device->chip_id == CPID_IPHONE3GS) {
		printf("CHIP ID: %d\n", CPID_IPHONE3GS);
	} else if (device->chip_id == CPID_IPHONE3G) {
		printf("CHIP ID: %d\n", CPID_IPHONE3G);
	} else if (device->chip_id == CPID_IPHONE2G) {
		printf("CHIP ID: %d\n", CPID_IPHONE2G); 
	} else if (device->chip_id == CPID_IPOD2G) {
		printf("CHIP ID: %d\n", CPID_IPHONE2G);
	} else if (device->chip_id == CPID_IPOD1G) {
		printf("CHIP ID: %d\n", CPID_IPOD1G); 	
	} else if (device->chip_id == CPID_IPOD3G) {
		printf("CHIP ID: %d\n", CPID_IPOD3G);
	} else if (device->chip_id == CPID_IPAD1G) {
		printf("CHIP ID: %d\n", CPID_IPAD1G);
	} else if (device->chip_id == CPID_APPLETV2) {
		printf("CHIP ID: %d\n", CPID_APPLETV2);
	} else {
		printf("CHIP_ID check was skipped\n");
	}
}

int grabBoard() {
	if (device->board_id == BDID_IPOD4G) {
		printf("BOARD ID: %d\n", BDID_IPOD4G);
	} else if (device->board_id == BDID_IPHONE3GS) {
		printf("BOARD ID: %d\n", BDID_IPHONE3GS);
	} else if (device->board_id == CPID_IPHONE3G) {
		printf("BOARD ID: %d\n", BDID_IPHONE3G);
	} else if (device->board_id == BDID_IPHONE2G) {
		printf("BOARD ID: %d\n", BDID_IPHONE2G); 
	} else if (device->board_id == BDID_IPOD2G) {
		printf("BOARD ID: %d\n", BDID_IPHONE2G);
	} else if (device->board_id == BDID_IPOD1G) {
		printf("BOARD ID: %d\n", BDID_IPOD1G); 	
	} else if (device->board_id == BDID_IPOD3G) {
		printf("BOARD ID: %d\n", BDID_IPOD3G);
	} else if (device->board_id == BDID_IPAD1G) {
		printf("BOARD ID: %d\n", BDID_IPAD1G);
	} else if (device->board_id == BDID_APPLETV2) {
		printf("BOARD ID: %d\n", BDID_APPLETV2);
	} else {
		printf("BOARD_ID check was skipped\n");
	}
}

int grabDeviceMode() {
	printf("");
	if (client->mode == kRecoveryMode1 || client->mode == kRecoveryMode2 || client->mode == kRecoveryMode3 || client->mode == kRecoveryMode4) {
		
		printf("MODE: Recovery [1]\n");
	}  else if (client->mode == kDfuMode) {
		printf("MODE: Recovery [2] (DFU)\n");
	} else {
		printf("\n");
	}
}

int grabModeValue() {
	if (client->mode == kRecoveryMode1 || client->mode == kRecoveryMode2 || client->mode == kRecoveryMode3 || client->mode == kRecoveryMode4) {

	if (device->chip_id == CPID_IPOD4G) {
		printf("RECOVERY VALUE: 0x1283\n");
	} else if (device->chip_id == CPID_IPHONE3GS) {
		printf("RECOVERY VALUE: 0x1282\n");
	} else if (device->chip_id == CPID_IPHONE3G) {
		printf("RECOVERY VALUE: 0x1280\n");
	} else if (device->chip_id == CPID_IPHONE2G) {
		printf("RECOVERY VALUE: 0x1280\n");
	} else if (device->chip_id == CPID_IPOD2G) {
		printf("RECOVERY VALUE: 0x1281\n");
	} else if (device->chip_id == CPID_IPOD1G) {
		printf("RECOVERY VALUE: 0x1280\n"); 	
	} else if (device->chip_id == CPID_IPOD3G) {
		printf("RECOVERY VALUE: 0x1282\n");
	} else if (device->chip_id == CPID_IPAD1G) {
		printf("RECOVERY VALUE: 0x1283\n");
	} else if (device->chip_id == CPID_APPLETV2) {
		printf("RECOVERY VALUE: 0x1283\n");
	} else {
		printf("RECOVERY VALUE check wa skipped\n");
	}

	} else if (client->mode == kDfuMode) {
		printf("MODE VALUE: %d", kDfuMode);
	}
}

void grabDevice(void) {		
		modelNum = device->model;
		printf("MODEL: %s\n", modelNum);
}

int grabDfuPath() {
	int DfuPath_;
	DfuPath_ = client->DfuPath;
	printf("\nDFU PATH: %s\n", DfuPath_);
}

int grabiBootPath() {
	int iBootPath_;
	iBootPath_ = client->iBootPath;
	printf("\niBOOT PATH: %s\n\n", iBootPath_);
	
}

void grabDeviceString() {
/* Disabled |------------*/
		  if (device->chip_id == CPID_IPHONE4) {
		debug("Device: iPhone3,1 , iPod 4,1 , iPad 1, APPLETV2,1\n");
	}  else if (device->chip_id == 8920) {
			debug("Device: iPhone 2,1\n");
		} else if (device->chip_id == 8922) {
			debug("Device: iPod3,1\n");
		} else if (device->chip_id == 8900) {
		debug("Device: iPhone1,2\n");		
		}  else {
			error("No device connected\n");
		}
}

int grabAppleVendorID(void) {
	printf("Apple Vendor ID: 0x05AC\n");
}

int grabSerialNumber(void) {	
	serialNum = client->serial;	
	printf("SERIAL #: %d\n", serialNum);

}


int grabProduct(void) {
	int product_;
	product_ = device->product;
	printf("PRODUCT: %s\n", product_);
	
}

int grabIndex(void) {
	int index_;
	index_ = device->index;
	printf("INDEX: %d\n", index_);

}

void resetRecovery(void) {	
	irecv_open_attempts(&client, 10);	
	irecv_send_command(client, "reset");
	irecv_exit();
	
}

void grabInterface() {
	int interface_;
	interface_ = client->interface;
	printf("INTERFACE: %s\n", interface_);
}

int checkMode(void) {
	int deviceMode;
	deviceMode = client->mode;
	printf("MODE: %d\n");
}

int recvMode(char agv) {
	if (client->mode == kRecoveryMode1 || client->mode == kRecoveryMode2 || client->mode == kRecoveryMode3 || client->mode == kRecoveryMode4) {		
		printf("recovery");
		return EOF;
	} else if (client->mode == kDfuMode) {
		printf("dfu");
	} else {
		/* Return -1 - EOF */
		EOF;
	}
}

int model() {
	int _model;
	_model = device->model;
	printf("%s", _model);
	return -1;
}
