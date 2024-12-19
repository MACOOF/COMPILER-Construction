#include<stdio.h>
#include<conio.h>
#include <string.h>

// goal---> RE for => a*bb
int main(){
  char str[100];
  printf("Enter your string:");
  scanf("%s",str);
  int n = strlen(str);
  for(int i=0;i<n-2;i++){
    if(str[i]!='a'){
      printf("INVALID String");
      return 0;
    }
  }

  if(str[n-1]=='b' && str[n-2]=='b'){
    printf("VALIDE String");
  }else{
    printf("INVALID String");
  }
  return 0;
}