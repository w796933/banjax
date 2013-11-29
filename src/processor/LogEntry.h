#ifndef LOGENTRY_H
#define LOGENTRY_H
#include <stdio.h>
#include <time.h>


#define UNUSED(x) (void)(x)

enum CacheLookupStatus {Hit=100,Miss=1,Stale=2,Error=3};
struct LogEntry
{
	char hostname[100];
	char userAgent[120];
	char url[400]; // just cut off after 400
	time_t endTime;
	long msDuration;
	int httpCode;
	int payloadsize;
	int requestDepth;
	CacheLookupStatus cacheLookupStatus;
	char useraddress[40];
	char contenttype[80];
};
#endif