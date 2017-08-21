#include <iostream>
#include <arpa/inet.h>
#include <types.h>
using namespace std;

bool isLittelSystem(){
	int num = 1;
	char *p = (char*)&num;
	if(*p == 1){
		return true;	
	}
	return false;
}

unsigned long long ntohll(unsigned long long data){
	if(isLittelSystem()){
		unsigned long temp_low,temp_high;
		temp_low = htonl((int32)data);
		temp_high = htonl((int32)(data>>32));
		data &= 0;
		data |= temp_low;
		data <<= 32;
		data |= temp_high;	
	}	
	return data;
}

unsigned long long htonll(unsigned long long data){
	if(isLittelSystem()){
		unsigned long temp_low,temp_high;
		temp_low = htonl((int32)data);
		temp_high = htonl((int32)(data>>32));
		data &= 0;
		data |= temp_low;
		data <<= 32;
		data |= temp_high;
	}
	return data;
}
