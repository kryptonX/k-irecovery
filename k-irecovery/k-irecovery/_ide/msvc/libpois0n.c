/**
 * GreenPois0n Syringe - libpois0n.c
 * Copyright (C) 2010 Chronic-Dev Team
 * Copyright (C) 2010 Joshua Hill
 * Portions Copyright (C) 2011 KryptonX
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#include "libpois0n.h"
#include "libirecovery.h"

#include "common.h"
#include "exploits.h"

#define LIMERA1N
#define STEAKS4UCE
//#define PWNAGE2

static pois0n_callback progress_callback = NULL;
static void* user_object = NULL;

int recovery_callback(irecv_client_t client, const irecv_event_t* event) {
	progress_callback(event->progress, user_object);
	return 0;
}


int send_command(char* command) {
	unsigned int ret = 0;
	irecv_error_t error = IRECV_E_SUCCESS;
	error = irecv_send_command(client, command);
	if (error != IRECV_E_SUCCESS) {
		printf("Unable to send command\n");
		return -1;
	}

	error = irecv_getret(client, &ret);
	if (error != IRECV_E_SUCCESS) {
		printf("Unable to send command\n");
		return -1;
	}

	return ret;
}

void pois0n_init() {
	#ifdef __APPLE__
	//system("killall -9 iTunesHelper");
#endif

#ifdef _WIN32
	int retVal;
	//retVal = system("TASKKILL /F /IM iTunes.exe > NUL");	
#endif

	irecv_init();
	irecv_set_debug_level(libpois0n_debug);
	
}

void pois0n_set_callback(pois0n_callback callback, void* object) {
	progress_callback = callback;
	user_object = object;
}

int pois0n_is_ready() {
	irecv_error_t error = IRECV_E_SUCCESS;

	//////////////////////////////////////
	// Begin
	// debug("Connecting to device\n");
	error = irecv_open(&client);
	if (error != IRECV_E_SUCCESS) {
		return 0;
	}
	irecv_event_subscribe(client, IRECV_PROGRESS, &recovery_callback, NULL);

	//////////////////////////////////////
	// Check device
	// debug("Checking the device mode\n");
	if (client->mode != kDfuMode) {
		
		return 0;
	}

	return 0;
}

int pois0n_is_compatible() {
	irecv_error_t error = IRECV_E_SUCCESS;
	
	error = irecv_get_device(client, &device);
	if (device == NULL || device->index == DEVICE_UNKNOWN) {
		error("\nPlease connect a device in Recovery or DFU\n");
		return -1;
	}

	if (device->chip_id != 8930
#ifdef LIMERA1N
			&& device->chip_id != 8922 && device->chip_id != 8920
#endif
#ifdef STEAKS4UCE
			&& device->chip_id != 8720
#endif
	) {
		debug("Connected device is an iPhone 3G [S5L8900]\n");
		info("The iPhone 3G is NOT supported\n");
		return -1;
	}

	return 0;
}

void pois0n_exit() {
	irecv_close(client);
	irecv_exit();
}

int pois0n_injectonly() {
	//////////////////////////////////////
	// Send exploit
	if (device->chip_id == 8900) {
		
	} else if (device->chip_id == 8930) {

#ifdef LIMERA1N
		
		
		debug("Exploiting with limera1n...\n");
		if (limera1n_exploit() < 0) {
			error("Unable to upload exploit data\n");
			return -1;
		}

#else

		error("Sorry, this device is not currently supported\n");
		return -1;

#endif

	}

	else if (device->chip_id == 8920 || device->chip_id == 8922) {

#ifdef LIMERA1N
		
		debug("Preparing to upload limera1n exploit\n");
		if (limera1n_exploit() < 0) {
			error("Unable to upload exploit data\n");
			return -1;
		}

#else

		error("Sorry, this device is not currently supported\n");
		return -1;

#endif

	}

	else if (device->chip_id == 8720) {

		info("Connected device is an iPod Touch 2G [s5l8720x]\nThis device is not supported\n");


/*#ifdef STEAKS4UCE

	/*	//debug("Preparing to upload steaks4uce exploit\n");
		if (steaks4uce_exploit() < 0) {
			//error("[!] steaks4uce exploit FAILED. [!]\n");
			return -1;
		} */

		/*info("The 2ND Generation iPod isn't supported");
		return EOF;*/

/*#else

		error("Sorry, this device is not currently supported\n");
		return -1;

#endif*/

	}

	else if (device->chip_id == 8900) {
		debug("Connected device is an iPhone 3G [S5L8900]\n");
		info("The iPhone 3G is NOT supported\n");
/*#ifdef PWNAGE2

		debug("Preparing to upload pwnage2 exploit\n");
		if(pwnage2_exploit() < 0) {
			error("Unable to upload exploit data\n");
			return -1;
		}

#else

		error("Sorry, this device is not currently supported\n");
		return -1;

#endif*/

	}

	else {
		error("Sorry, this device is not currently supported\n");
		return -1;
	}
	return 0;
}


