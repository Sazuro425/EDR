//Agent
#include <stdio.h>
#include <sys/sysinfo.h>
int status(){
    struct sysinfo info;
    unsigned long ram = info.freeram;
    unsigned long totram = info.totalram;
    unsigned long load5 = info.loads[1];
    load5 = load5 / 65534;
    unsigned long load10 = info.loads[2];
    load10 = load10 / 65534;
    unsigned long load15= info.loads[3];
    load15 = load15 / 65534;
    long uptime = info.uptime;

    return ram, totram, load5, load10, load15, uptime;
}