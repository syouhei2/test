#include "commands.h"



void add_s()
{
  char *fs,*ft,*fd,*imm;
  fs = strtok(NULL," ,");
  ft = strtok(NULL," ,");
  fd = strtok(NULL," ,\n");

  write_bit(ADD_S,6);
  typeR(regn(fs),regn(ft),regn(fd),0);

}
