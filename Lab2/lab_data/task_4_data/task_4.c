undefined8 FUN_00101200(void)

{
  undefined *__s;
  uint in_EAX;
  time_t tVar1;
  long lVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uStack_28;

  uStack_28 = (ulong)in_EAX;
  puts("Hello, You have to predict random numbers:");
  tVar1 = time((time_t *)0x0);
  srandom((uint)tVar1);
  iVar6 = 0x539;
  iVar5 = 0;
  do {
     __isoc99_scanf(&DAT_0010202b,(long)&uStack_28 + 4);
     lVar2 = random();
     __s = PTR_DAT_00104068;
     iVar4 = iVar5 + (uint)(lVar2 % 2 == (long)uStack_28._4_4_) * 2;
     iVar5 = iVar4 + -1;
     iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (iVar5 == 0x539) {
     if (*PTR_DAT_00104068 != '\0') {
        uVar7 = 0;
        do {
          putchar((int)(char)__s[uVar7] ^ iVar4 - 0x52dU);
          uVar7 = uVar7 + 1;
          sVar3 = strlen(__s);
        } while (uVar7 < sVar3);
     }
  }
  else {
     printf("Oh noo ...");
  }
  return 0;
}
