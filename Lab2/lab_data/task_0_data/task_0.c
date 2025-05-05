undefined8 FUN_00101170(void)

{
  int iVar1;
  char *__s1;
  
  __s1 = (char *)malloc(400);
  printf("%s","Hello, enter the flag:\n");
  __isoc99_scanf(&DAT_00102004,__s1);
  iVar1 = strcmp(__s1,"flag{6057f13c496ecf7fd777ceb9e79ae2 85}");
  if (iVar1 == 0) {
    printf("%s",&DAT_00102046);
  }
  else {
    printf("%s","TRY HARDER");
  }
  return 0;
}