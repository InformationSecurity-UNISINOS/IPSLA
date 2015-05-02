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
using namespace std;

//Define variáveis do protocolo de controle

#define SENDER_CONTROL_PORT	3000
#define RESPONDER_CONTROL_PORT 1167

/*Define as variáveis utilizadas durante a sessão de controle do IPSLA para o envio de mensagens de controle*/
struct control_request_message
{
	__int32 sequence_number,total_length;
	__int8 version,reserved;
	char send_timestamp;

	struct CSLD_authentication
	{
		__int16 command,status,keyid;
		__int32 command_length;
		__int8 mode,reserved;
		long random_number;
		long message_authentication_digest;
	};

	struct CSLD_measurement
	{
		__int8 address_type,role;
		__int16 command,status,reserved,reserved2,control_source_port,measurement_source_port,measurement_destination_port;
		__int32 command_length,session_identifier,duration;
		long control_source_address,control_destination_address,measurement_source_address,measurement_destination_address;
	};
};


int main (void)
{
	control_request_message command_header;
	control_request_message::CSLD_authentication authentication;
	control_request_message::CSLD_measurement measurement;
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
