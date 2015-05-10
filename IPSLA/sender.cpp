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
	control_phase::command_header cmd_header;
	cmd_header.version=2;
	cmd_header.reserved=0;
	cmd_header.status=0;
	cmd_header.sequence_number=0;
	cmd_header.sequence_number++;

	int socket = client->socket;
	memset(&cmd_header,0,sizeof(cmd_header));
	
	int return_ctrl_req_msg=send(socket,reinterpret_cast<const char*>(&cmd_header),sizeof(cmd_header),0);
	if (return_ctrl_req_msg < 0)
	{
		printf ("[%s]",inet_ntoa(client->addr.sin_addr));
		perror ("Failed to send control request message");
	}
	else
	{
		printf ("Sent control request message to %s. Result %d\n",inet_ntoa(client->addr.sin_addr),return_ctrl_req_msg);
	}
	return return_ctrl_req_msg;
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
	


    return (EXIT_SUCCESS);
}
