
undefined8 __as_cast(undefined8 param_1,undefined8 param_ 2,undefined8 param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_188 [24];
  undefined8 uStack_170;
  undefined1 local_160 [16];
  undefined2 *local_150;
  undefined4 local_148;
  undefined4 local_144;
  char *local_140;
  undefined4 local_138;
  undefined4 local_134;
  char *local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120 [16];
  undefined4 local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined4 local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [40];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  int local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 *local_38;
  undefined1 local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;

  local_18._0_4_ = (int)param_2;
  local_20._0_4_ = (int)param_3;
  local_10 = param_1;
  if ((int)local_18 != (int)local_20) {
    local_38 = (undefined8 *)auStack_188;
    local_20 = param_3;
    local_18 = param_2;
    memmove@plt(auStack_188,&as_cast_type_indexes,0x20);
    lVar1 = array_get(0);
    local_38 = (undefined8 *)(lVar1 + 8);
    uStack_170 = 0x421884;
    local_48 = string_clone(*local_38,*(undefined8 *)(lVar1 + 0 x10));
    uStack_170 = 0x4218af;
    memmove@plt(local_30,local_48,0x10);
    local_38 = (undefined8 *)auStack_188;
    memmove@plt(auStack_188,&as_cast_type_indexes,0x20);
    lVar1 = array_get(0);
    local_38 = (undefined8 *)(lVar1 + 8);
    uStack_170 = 0x421919;
    local_68 = string_clone(*local_38,*(undefined8 *)(lVar1 + 0 x10));
    uStack_170 = 0x421944;
    memmove@plt(local_58,local_68,0x10);
    for (local_6c = 0; local_6c < DAT_006e462c; local_6c = loc al_6c + 1) {
      local_38 = (undefined8 *)(as_cast_type_indexes + (long)loc al_6c * 0x18);
      uStack_170 = 0x4219bc;
      memmove@plt(local_88,local_38,0x18);
      if (local_88[0] == (int)local_18) {
        uStack_170 = 0x4219dd;
        auVar2 = string_clone(local_80,local_78);
        uStack_170 = 0x421a11;
        local_98 = auVar2;
        memmove@plt(local_30,local_98,0x10);
      }
      if (local_88[0] == (int)local_20) {
        uStack_170 = 0x421a32;
        auVar2 = string_clone(local_80,local_78);
        uStack_170 = 0x421a66;
        local_a8 = auVar2;
        memmove@plt(local_58,local_a8,0x10);
      }
    }
    uStack_170 = 0x421a97;
    memset@plt(local_120,0,0x78);
    uStack_170 = 0x421ac3;
    memset@plt(&local_130,0,0x10);
    local_130 = "as cast: cannot cast `";
    local_128 = 0x16;
    local_124 = 1;
    uStack_170 = 0x421b10;
    memmove@plt(local_120,&local_130,0x10);
    local_110 = 0xfe10;
    uStack_170 = 0x421b41;
    memmove@plt(local_108,local_30,0x10);
    uStack_170 = 0x421b6d;
    memset@plt(&local_140,0,0x10);
    local_140 = "` to `";
    local_138 = 6;
    local_134 = 1;
    uStack_170 = 0x421bba;
    memmove@plt(local_f8,&local_140,0x10);
    local_e8 = 0xfe10;
    uStack_170 = 0x421beb;
    memmove@plt(local_e0,local_58,0x10);
    uStack_170 = 0x421c17;
    memset@plt(&local_150,0,0x10);
    local_150 = &L.443;
    local_148 = 1;
    local_144 = 1;
    uStack_170 = 0x421c64;
    memmove@plt(local_d0,&local_150,0x10);
    uStack_170 = 0x421c7b;
    local_160 = str_intp(3,local_120);
    uStack_170 = 0x421ca2;
    _v_panic(local_160._0_8_,local_160._8_8_);
  }
  return local_10;
}
