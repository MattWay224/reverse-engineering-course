undefined8 FUN_00101280(char *param_1)

{
  size_t sVar1;
  uint local_1c;

  sVar1 = strlen(param_1);
  printf("%lu",sVar1);
  local_1c = 0;
  while( true ) {
     sVar1 = strlen(param_1);
     if (sVar1 <= (ulong)(long)(int)local_1c) break;
     printf("%c",(ulong)(uint)(int)param_1[(int)local_1c]);
     printf("%c",(ulong)((local_1c ^ ((int)param_1[(int)local _1c] - 0x19U ^ 0xffffffd7) + 0x1f) +
                              0x29));
     local_1c = local_1c + 1;
  }
  return 0;
}
