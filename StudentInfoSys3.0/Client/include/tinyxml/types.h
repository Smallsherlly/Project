#ifndef _DATATYPE_H__
#define _DATATYPE_H__

typedef signed char int8;
typedef unsigned char uint8;
typedef signed short int int16;
typedef unsigned short int uint16;
typedef signed int int32;
typedef unsigned int uint32;

#if __WORDSIZE == 64
typedef signed long int int64;
typedef unsigned long int uint64;
#else
__extension__ typedef signed long long int int64;
__extension__ typedef unsigned long long int uint64;
#endif

bool isLittelSystem();

unsigned long long htonll(unsigned long long data);
unsigned long long ntohll(unsigned long long data);

#endif //_DATATYPE_H__
