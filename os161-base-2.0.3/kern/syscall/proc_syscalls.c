#include "types.h"
#include "lib.h"
#include "syscall.h"
#include "thread.h"
#include "proc.h"
#include "addrspace.h"

void sys_exit(int code) {
    if (code == 0) {
        struct addrspace *as = proc_getas();
        as_destroy(as);
        thread_exit();
    }
}