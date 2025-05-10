
undefined4 main(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  bool bVar2;
  ostream *poVar3;
  undefined4 uVar4;
  allocator local_1e;
  allocator local_1d;
  string local_1c [4];
  string local_18 [4];
  string local_14 [4];
  undefined4 *local_10;

  local_10 = &param_1;
  if (param_1 < 2) {
    pcVar1 = (char *)*param_2;
    poVar3 = std::operator<<((ostream *)std::cerr,"usage : ");
    poVar3 = std::operator<<(poVar3,pcVar1);
    poVar3 = std::operator<<(poVar3," password");
    std::ostream::operator<<(poVar3,std::endl<>);
    uVar4 = 5;
  }
  else {
    std::allocator<char>::allocator();
                    /* try { // try from 08048b0e to 08048b12 has its CatchHandler @ 08048c64 */
    std::string::string(local_14,&DAT_08048dc4,&local_1d);
    std::allocator<char>::allocator();
                    /* try { // try from 08048b33 to 08048b37 has its CatchHandler @ 08048c3b */
    std::string::string(local_18,&DAT_08048dcc,&local_1e);
                    /* try { // try from 08048b4c to 08048b50 has its CatchHandler @ 08048c1d */
    plouf(local_1c,local_18,local_14);
                    /* try { // try from 08048b5a to 08048b5e has its C atchHandler @ 08048c2c */
    std::string::~string(local_18);
    std::allocator<char>::~allocator((allocator<char> *)&local_1e );
                    /* try { // try from 08048b70 to 08048b74 has its CatchHandler @ 08048c55 */
    std::string::~string(local_14);
    std::allocator<char>::~allocator((allocator<char> *)&local_1 d);
                    /* try { // try from 08048b92 to 08048c08 has its CatchHandler @ 08048c7b */
    bVar2 = std::operator==(local_1c,(char *)param_2[1]);
    if (bVar2) {
      poVar3 = std::operator<<((ostream *)std::cout,
                               "Bravo, tu peux valider en utilisant ce mot d e passe...");
      std::ostream::operator<<(poVar3,std::endl<>);
      poVar3 = std::operator<<((ostream *)std::cout,
                               "Congratz. You can validate with this passw ord...");
      std::ostream::operator<<(poVar3,std::endl<>);
    }
    else {
      poVar3 = std::operator<<((ostream *)std::cout,"Password in correct.");
      std::ostream::operator<<(poVar3,std::endl<>);
    }
    uVar4 = 0;
    std::string::~string(local_1c);
  }
  return uVar4;
}

