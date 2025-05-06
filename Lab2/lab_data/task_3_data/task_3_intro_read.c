undefined1 [16] __pfx_intro_read(undefined8 param_1, undefined8 param_2, ulong param_3) {
  long lVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;

  _printk(&DAT_001006b3);
  lVar1 = vmalloc(0x27);
  bVar2 = 0x14;
  bVar4 = 0x72;
  lVar3 = 0;

  while (true) {
    *(byte *)(lVar1 + lVar3) = bVar2 ^ bVar4;
    if (lVar3 + 1 == 0x26) break;
    bVar4 = "rEdWcNDyavDSNOdKOC95iTEP8bioF3IPmAKUXx"[lVar3 + 1];
    bVar2 = crypted[lVar3 + 1];
    lVar3 = lVar3 + 1;
  }
  *(undefined1 *)(lVar1 + 0x26) = 0;

  if (param_3 < 0x28) {
    __check_object_size(lVar1, param_3, 1);
    _copy_to_user(param_2, lVar1, param_3);
  } else {
    __copy_overflow(0x27, param_3);
  }
  return ZEXT816(0);
}