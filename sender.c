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

/*APAGAR
   The Control Phase begins with the Sender sending a Control-Request
   message to the Responder.  The Control-Request message is sent to UDP
   port 1167 on the Responder requesting that a Measurement Phase UDP
   port be opened and, in addition, indicates the duration for which the
   port needs to remain open.  The Responder replies by sending a
   Control-Response with an appropriate Status indicating Success when
   the Sender identity is verified and the requested UDP port was
   successfully opened.  In all other cases, a non-zero Status is
   returned in the Command-Header Status field.
*/

/*Define variáveis do protocolo de controle
*/

#define SENDER_CONTROL_PORT	3000
#define RESPONDER_CONTROL_PORT 1167

/*Define variáveis para Control-request Message
  0                   1                   2                   3
        0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
       +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
       |                                                               |
       +                                                               +
       |                                                               |
       +                                                               +
       |                      Command-Header                           |
       +                                                               +
       |                                                               |
       +                                                               +
       |                                                               |
       +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
       |     Command                   |           Status              |
       +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
       |                          Command-Length                       |
       +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
       |                                                               |
       .                                                               .
       .                          Data                                 .
       .                                                               .
       |                                                               |
       +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
       |     Command                   |          Status               |
       +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
       |                         Command-Length                        |
       +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
       |                                                               |
       .                                                               .
       .                          Data                                 .
       .                                                               .
       |                                                               |
       +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
*/

/*Command-header
 0                   1                   2                   3
        0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
       +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
       | Version = 2   |     Reserved  |          Status               |
       +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
       |                         Sequence Number                       |
       +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
       |                         Total Length                          |
       +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
       |                        Send Timestamp                         |
       +                                                               +
       |                                                               |
       +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+

   The Command-Header fields hold the following meaning:

   +-----------+-----------+-------------------------------------------+
   | Field     | Size      | Description                               |
   |           | (bits)    |                                           |
   +-----------+-----------+-------------------------------------------+
   | Version   | 8         | Current version supported and is to be    |
   |           |           | set to 2.                                 |
   | --------- | --------- | --------------------------                |
   | Reserved  | 8         | Reserved field, MUST be set to 0.         |
   | --------- | --------- | --------------------------                |
   | Status    | 16        | Indicates success or failure for the      |
   |           |           | entire message.  In a Control-Request, the|
   |           |           | value of the Status field is ignored by   |
   |           |           | the receiver and SHOULD be set to 0.      |
   | --------- | --------- | --------------------------                |
   | Sequence  | 32        | Used to map requests to responses.  This  |
   | Number    |           | is a monotonically increasing number.     |
   |           |           | Implementations MAY reset the sequence    |
   |           |           | number to 0 after a reboot, and it SHOULD |
   |           |           | wrap around after all bits have been      |
   |           |           | exceeded.                                 |
   | --------- | --------- | --------------------------                |
   | Total     | 32        | Carries the total length of the Control   |
   | Length    |           | message in number of octets.              |
   | --------- | --------- | --------------------------                |
   | --------- | --------- | --------------------------                |
   | Send      | 64        | This field is set to the time the command |
   | Timestamp |           | was submitted for transmission and is     |
   |           |           | updated for a response.  This field MAY   |
   |           |           | be used when security is of concern in    |
   |           |           | order to prevent replay attacks.  SHOULD  |
   |           |           | be updated when the response is sent.     |
   |           |           | When not being used, it MUST be set to all|
   |           |           | 0's.  The format is as given in RFC 5905. |
   +-----------+-----------+-------------------------------------------+
   */

int main ()
{
	__int32 command_header_sequence_number;
	__int8 command_header_version;
	__int8 command_header_reserved;
	__int32 command_header_total_length;
	char command_header_send_timestamp;
	
	command_header_version=2;
	command_header_reserved=0;

	printf("Escreva ja!\n");
    return (0);
}
