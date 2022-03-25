#include "hello.h"

#if OPT_HELLO
void hello(void){
  kprintf("HELLO!\n");
}
#endif
