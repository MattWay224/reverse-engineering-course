undefined8 FUN_00101460(void)

{
  int iVar1;
  undefined8 local_18;

  iVar1 = FUN_001011a0();
  if (iVar1 == 1) {
     FUN_00101210(local_18,"flag.txt");
     FUN_00101280(local_18,"encrypted_flag.txt");
  }
  else if (iVar1 == 2) {
     FUN_00101210(local_18,"encrypted_flag.txt");
     FUN_00101380(local_18,"flag.txt");
  }
  else {
     printf("Invalid option\n");
  }
  return 0;
}
