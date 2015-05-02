struct control_phase
{
	/*command-header*/
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

struct measurement_phase
{
	__int16 measurement_type,reserved;
	char sender_send_time,responder_receive_time,responder_send_time,responder,sender_receive_time,sender_clock_offset,responder_clock_offset;
	__int32 sender_sequence_number,response_sequence_number;
	long data; /*ver com Nobre a definição desta variavel*/
}
