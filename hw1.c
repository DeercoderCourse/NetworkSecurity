#include<stdio.h>
#include<string.h>
#include<stdlib.h>


const char str[] = "NTCGPDOPANFLHJINTOOFITOVJHJCTMMHIHEMTCPFDWTSOFSHTOGFWTETTJJTBTOOFSZOVEOCHCVCHPJHOCGTOHNQMTOCNTCGPDCGFCSTQMFBTOFBGFSFBCTSHJCGTQMFHJCTYCXHCGFAHYTDDHAATSTJCBGFSFBCTSHJCGTBHQGTSCTYCCGHONTCGPDQSTOTSWTOCGTMTCCTSASTRVTJBZHJCGTQMFHJCTYCFJDOPPJTBFJOTFSBGAPSCGTQMFHJCTYCASPNFIHWTJBHQGTSCTYCEZBPNQFSHJICGTASTRVTJBZPATFBGMTCCTSFIFHJOCCGTLJPXJBPNNPJASTRVTJBZHJCGTVJDTSMZHJIMFJIVFIT";

int main()
{
  int num[26];
  int len = strlen(str);
  int i = 0;
  int index;

  printf("total chars in the ciphertext = %d\n", len);
  while (i < 26) {
      num[i] = 0;
      i++;
  }

  i = 0;
  while(i < len) {
    index = str[i] - 'A';
    num[index]++;
    i++;
  }
  printf("cipher text is: %s\n", str);

  int total = 0;
  for (int j = 0; j < 26; j++) {
      total += num[j];
  }
  printf("total counts of cipher text = %d\n", total);

  for (int j = 0; j < 26; j++) {
      printf("char = %c, count = %d, frequency  = %f\n", 'A'+j, num[j], num[j] * 100.0 / total);
  }
  return 0;
}
