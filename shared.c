#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char **argv)
{
  void *m;
  char *s;

  
  dumpmap();
  m = sharedmem();
  s = (char *) m;
  dumpmap();

  id = fork()

  if (id == 0) {
    dumpmap();
    strcpy(s, "Hello from child\n");
    exit();
  }

  wait();
  printf("s = %s\n", s);
  exit();  
}
