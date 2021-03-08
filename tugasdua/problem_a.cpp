#include "problem_a.hpp"

int *multiply_by_two(int &n)
{
  int *kalidua;

  n*=2;
  kalidua = &n;

  return kalidua;
}

std::string the_third_and_fifth(char *ptr)
{
  std::string nilai,tigalima;
  
  for(int i=0; i<=1;i++){
      nilai[i]=ptr[(i*2)+2];
  }
  
  tigalima={nilai[0],nilai[1]};
  return tigalima;
}

int my_own_strlen(char *ptr)
{
  char* cek;
  int panjang,i;
  cek=ptr;
  
  for(i=0; i<=50;i++){
      if((cek[i]=ptr[i])){
          panjang=i+1;
      }
      else {
          break;
      }
  }

  return panjang;
}

void element_swapper(int *ptr1, int *ptr2, int n)
{
  int* cek,*a;
    int i, temp,panjang;
    
    cek=ptr1;
    a=ptr1;
  
    for(i=0; i<=20;i++){
      if((a[i]=ptr1[i])){
          panjang=i+1;
      }
      else {
          break;
      }
    }

    for(i=1;i<=n;i++){
        cek++;
    }
  
    for(i=0; i<panjang;i++){
        if(&ptr1[i]==cek){
          temp = ptr1[i];
          ptr1[i]= ptr2[i];
          ptr2[i]= temp;
        }
    }
}