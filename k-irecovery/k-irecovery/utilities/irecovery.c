/**
  * Syringe-base irecovery -- irecovery.c
  * Copyright (C) 2010 Chronic-Dev Team
  * Copyright (C) 2010 Joshua Hill
  * Copyright (C) 2010 iH8sn0w
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
#include <unistd.h>
#include "libirecovery.h"
#include "libpois0n.h"
#include "modules.h"

int ret;


void print_progress(double progress) {
int i = 0;
			if(progress < 0) {
			return;
	}

	if(progress > 100) {
		progress = 100;
	}

		printf("\r[");
	for(i = 0; i < 50; i++) {
		if(i < progress / 2) {
			printf("=");
		} else {
			printf(" ");
		}
	}
	printf("] %3.1f%%", progress);
	if(progress == 100) {
		printf("\n");
	}
}

int progress_cb(irecv_client_t client, const irecv_event_t* event) {
	if (event->type == IRECV_PROGRESS) {
		print_progress(event->progress);
	}
	return 0;
}

int main(int argc, char* argv[]) {
		if(argc < 2) {
		printf("\nk-irecovery - Recovery Utility\nOriginally made by westbaer\nThanks to pod2g, tom3q, planetbeing, geohot, and posixninja.\n\nThis is based off syringe available at: http://github.com/posixninja/syringe \nThe source of s-irecovery at: http://github.com/iH8sn0w/syringe-irecovery \nThe source of k-irecovery is available at: %%%%%%%%%%%%\n\n");
		printf("./irecovery [args]\n");
		printf("\t-c <command>\tsend a single command.\n");
		printf("\t-f <file>\tupload a file (to 0x21,1).\n");
		printf("\t================Exploits================\n");
		printf("\t-e\t\tsend limera1n or steaks4uce [bootrom exploits].\n");		
		printf("\t========================================\n");
		printf("\t-k\tGrab Hardware Data\n");
		printf("\t-kk\tGrab iBoot Data\n");
		
		
		
		return 0;
	}
			else {

	char** pArg;
	for (pArg = argv + 1; pArg < argv + argc; ++pArg) {
	const char* arg = *pArg;
		int* pIntOpt = NULL;
	if (!strcmp(arg, "-e")) {
	irecv_error_t error;
	unsigned int cpid;
	int can_ra1n = 0;
	irecv_init();

	printf("\n");

	error = irecv_open_attempts(&client, 10);
	if(error != IRECV_E_SUCCESS)
	{
		fprintf(stderr, "Failed to connect to iBoot, error %d.\n", error);
		return -error;
	}	
	if(irecv_get_cpid(client, &cpid) == IRECV_E_SUCCESS)
	{
		if(cpid > 8900) {
			can_ra1n = 1;
		} 
		if(cpid = 8720) {
			can_ra1n = 1;
		} 
	}
	if(client->mode == kDfuMode && can_ra1n)
	{
		int ret;
		irecv_close(client);
		irecv_exit();

		pois0n_init();

		ret = pois0n_is_ready();
		if(ret < 0)
			return ret;

		ret = pois0n_is_compatible();
		if(ret < 0)
			return ret;

		pois0n_injectonly();

		irecv_close(client);
		client = NULL;
	}
		} 	
		 else if
			(!strcmp(arg, "-c")) {
	irecv_open_attempts(&client, 10);
	irecv_event_subscribe(client, IRECV_PROGRESS, &progress_cb, NULL);
	irecv_send_command(client, argv[2]);
	irecv_exit();
	printf("\nCommand Sent!\n");
} else if (!strcmp(arg, "-f")) {
	irecv_open_attempts(&client, 10);
	irecv_event_subscribe(client, IRECV_PROGRESS, &progress_cb, NULL);
	if(client->mode == kDfuMode) {
		printf("\nUploading file in DFU...\n\n");
		irecv_send_file(client, argv[2],1);
	}	else {
		printf("\nUploading file in Recovery Mode...\n\n");
	irecv_send_file(client, argv[2],0);
		}
		irecv_exit();
	printf("\nFile Sent!\n");
			} 
else if (!strcmp(arg, "-k")) {
	 
	irecv_error_t error;
	unsigned int cpid;
	int can_ra1n = 0;
	irecv_init();
	
	

	error = irecv_open_attempts(&client, 10);
	if(error != IRECV_E_SUCCESS)
	{
		fprintf(stderr, "Failed to connect to iBoot, error %d.\n", error);
		return -error;
	}	
	if(irecv_get_cpid(client, &cpid) == IRECV_E_SUCCESS)
	{
		if(cpid > 8900) {
			can_ra1n = 1;
		} 
		if(cpid = 8720) {
			can_ra1n = 1;
		} 
	}
	
		
		irecv_close(client);
		irecv_exit();					
				
		pois0n_init();

		ret = pois0n_is_ready();
		if(ret < 0)
			return ret;

		ret = pois0n_is_compatible();
		if(ret < 0)
			return ret;

		k_init();			
		grabDevice();
		grabProduct();
		grabBootrom();
		grabDeviceChip();
		grabBoard();
		
		/*---REMOVE!*/
		grabIndex();
		checkMode();
		grabModeValue();

		grabAppleVendorID();
		grabSerialNumber();

		grabInterface();
		
		

		grabDfuPath();
		grabiBootPath();
	resetRecovery();

		
		
	//pois0n_injectonly();
		irecv_close(client);
		client = NULL;

	
	
	
	 } else if (!strcmp(arg, "-kk")) {
		 irecv_close(client);
		irecv_exit();					
				
		pois0n_init();

		ret = pois0n_is_ready();
		if(ret < 0)
			return ret;

		ret = pois0n_is_compatible();
		if(ret < 0)
			return ret;

		recvMode();
		

		irecv_close(client);
		client = NULL;
	 
	} else if (!strcmp(arg, "-i")) {
		irecv_close(client);
		irecv_exit();					
				
		pois0n_init();

		ret = pois0n_is_ready();
		if(ret < 0)
			return ret;

		ret = pois0n_is_compatible();
		if(ret < 0)
			return ret;

		model();
		

		irecv_close(client);
		client = NULL;
	 }	else {
		 printf("\n[!] No payload was specified! [!]\n");
	}
}
	return 0;
} 
}


