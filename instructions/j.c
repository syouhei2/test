#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "commands.h"


void j(uint32_t addr)
{
  write_bit(J,6);
  write_bit(addr,26);
  printf("\n");

}
