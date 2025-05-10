
/* plouf(std::string, std::string) */

string * plouf(string *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  allocator local_21;
  int local_20;

  std::allocator<char>::allocator();
                          /* try { // try from 080489b6 to 080489ba has its Ca tchHandler @ 08048a4b */
  std::string::string(param_1,"",&local_21);
  std::allocator<char>::~allocator((allocator<char> *)&local_21);
  local_20 = 0;
  while( true ) {
     pcVar3 = (char *)std::string::operator[](param_2);
     if (*pcVar3 == '\0') break;
                          /* try { // try from 080489dc to 08048a3c has its Ca tchHandler @ 08048a62 */
     pbVar2 = (byte *)std::string::operator[](param_2);
     bVar1 = *pbVar2;
     std::string::length();
     pbVar2 = (byte *)std::string::operator[](param_3);
     std::string::operator+=(param_1,*pbVar2 ^ bVar1);
     local_20 = local_20 + 1;
  }
  return param_1;
}

