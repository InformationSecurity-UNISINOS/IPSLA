/*
	Name: Jones Jardel Poersch
	Project: Open IPSLA
	University: Universidade do Vale do Rio dos Sinos
	Teacher: Jefferson Nobre
	Email: jonesjardel@gmail.com
	Source: sender.c
	Note: this file contains the IPSLA Sender protocol implementation
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <winsock2.h>
#include <windows.h>
#include <sys/stat.h>
#include <time.h>
#include <Ws2tcpip.h>
#include <iostream>
#include <cstdlib>
#include <ipsla.h>
using namespace std;

/*Define variáveis do protocolo de controle*/

#define SENDER_CONTROL_PORT	3000
#define RESPONDER_CONTROL_PORT 1167

int main (void)
{
	control_phase command_header;
	measurement_phase mp;
	control_phase::CSLD_authentication authentication;
	control_phase::CSLD_measurement measurement;
	authentication.status=0;
	authentication.mode=0;
	authentication.reserved=0;
	measurement.status=0;
	measurement.address_type=2;
	measurement.role=1;
	measurement.reserved=0;
	measurement.reserved2=0;
	command_header.version=2;
	command_header.reserved=0;

	printf("Escreva ja!\n");
    return (0);
}
