#ifndef SOCKNOTIFY_H
#define SOCKNOTIFY_H
#include <cstring>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <inttypes.h>
#include <iostream>
#include <types.h>

using namespace std;
enum {HTON=0,NTOH};

template<typename T>
void field_hton(T& field){
    int n = sizeof(field);
    switch(n){
        case 2:
            field = htons(field);break;
        case 4:
            field = htonl(field);break;
        case 8:
            field = htonll(field);break;
        default:break;
    }
}

template<typename T>
void field_ntoh(T& field){
    int n = sizeof(field);
    switch(n){
        case 2:
            field = ntohs(field);break;
        case 4:
            field = ntohl(field);break;
        case 8:
            field = ntohll(field);break;
        default:break;
    }
}




#define BEGIN_SOCK_SERIALIZE  \
    void serialize(int flag){ \

#define END_SOCK_SERIALIZE \
    }

#define SOCK_FIELD_SERIALIZE(field)  \
    switch(flag) \
    { \
        case 0: \
        { \
            field_hton(field); \
            break;  \
        } \
        case 1: \
        { \
            field_ntoh(field); \
            break; \
        } \
        default: \
        { \
            break; \
        } \
    }
#define SOCK_ARRAY_SERIALIZE(array,iNum) \
    switch(flag) \
    { \
        case 0: \
        { \
            for(int32 iCount = 0; iCount < iNum; iCount++) \
            { \
                field_hton(array[iCount]); \
            } \
            break; \
        } \
        case 1: \
        { \
            for(int32 iCount = 0; iCount < iNum; iCount++) \
            { \
                field_ntoh(array[iCount]); \
            } \
            break; \
        } \
        default: \
        { \
            break; \
        } \
    }

#endif // SOCKNOTIFY_H
