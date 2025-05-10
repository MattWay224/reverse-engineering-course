undefined8 FUN_00101380(char *param_1,char *param_ 2)

{
  FILE *__stream;
  size_t sVar1;
  uint local_24;

  __stream = fopen(param_2,"wb");
  local_24 = 0;
  while( true ) {
     sVar1 = strlen(param_1);
     if (sVar1 <= (ulong)(long)(int)local_24) break;
     fprintf(__stream,"%c",
                (ulong)(((local_24 ^ (int)param_1[(int)local_24] - 0x29U) - 0x1f ^ 0xffffffd7) + 0x19));
     local_24 = local_24 + 1;
  }
  return 0;
}
