#ifndef __TCPPING_H__
#define __TCPPING_H__

#include <netinet/ip.h>

char *dest_name;
u_short dest_port = 80;

typedef struct host_entry
{
in_addr_t dest_ip;

long long sum_ping;
long long sum_ping2;

float min_ping;
float avg_ping;
float max_ping;
float mdev_ping;

int total_syns;
int total_synacks;
int total_rsts;

int successful_pings;

} HOST_ENTRY;


#endif
