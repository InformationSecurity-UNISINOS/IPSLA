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

struct client_info
{
	int socket;
	struct sockaddr_in addr;
};

static int control_request_msg (struct client_info *client)
{
	int socket = client->socket;
	control_phase::command_header cmd_header;
	cmd_header.version=2;
	cmd_header.reserved=0;
	cmd_header.status=0;
	cmd_header.sequence_number=0;
	cmd_header.sequence_number++;
}

int main (void)
{
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
	control_request_msg(client	
	int size_obj=sizeof(struct control_phase);
	printf("Tamanho da struct control_phase eh: %d\n",size_obj);
	char tecla;
	tecla=getchar();
    return (0);
}
