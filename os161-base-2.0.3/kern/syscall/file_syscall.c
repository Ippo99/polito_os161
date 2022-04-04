#include <types.h>
#include <lib.h>
#include "syscall.h"

ssize_t sys_write(int filehandle, const void *buff, size_t size){
    char *buf=(char *)buff;
    filehandle++;
    for (size_t i = 0; i < size; i++){
            putch(buf[i]);
    }
    return 0;
}