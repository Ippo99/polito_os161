#include "types.h"
#include "lib.h"
#include "syscall.h"

ssize_t sys_write(int filehandle, const void *buff, size_t size) {
    char *buf = (char *)buff;
    size_t i;
    filehandle++;  // just to use it
    for (i = 0; i < size; i++) {
        putch(buf[i]);
    }
    return (ssize_t)i;
}

ssize_t sys_read(int filehandle, const void *buff, size_t size) {
    char *buf = (char *)buff;
    size_t i;
    filehandle++;  // just to use it
    for (i = 0; i < size; i++) {
        buf[i] = getch();
    }
    buf[i] = '\0';
    return (ssize_t)i;
}