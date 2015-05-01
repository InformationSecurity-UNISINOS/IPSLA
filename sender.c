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
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <dirent.h>
#include <netdb.h>
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
#define SENDER_CONTROL_PORT	3000
#define RESPONDER_CONTROL_PORT 1167

int main ()
{
    printf("Escreva ja!\n");
    return (0);
}
