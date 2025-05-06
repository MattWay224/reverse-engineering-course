
undefined4 main(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 local_10;

  puts("############################################ ################");
  puts("##        Bienvennue dans ce challenge de cracking        ##" );
  puts("############################################ ################\n");
  printf("username: ");
  pcVar1 = (char *)getString(local_10);
  iVar2 = strcmp(pcVar1,"john");
  if (iVar2 == 0) {
     printf("password: ");
     pcVar1 = (char *)getString(pcVar1);
     iVar2 = strcmp(pcVar1,"the ripper");
     if (iVar2 == 0) {
        printf("Bien joue, vous pouvez valider l\'epreuve avec le mot d e passe : %s !\n","987654321");
     }
     else {
        puts("Bad password");
     }
  }
  else {
     puts("Bad username");
  }
  return 0;
}
