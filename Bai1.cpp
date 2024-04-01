#include<stdio.h>
//#include<conio.h>

#define MAXSIZE 1000		//Khai bao HANG SO

//xuất các số có 2 chữ số là bội của 7
void Boi7()
{
    printf("Cac so co 2 chu so la boi cua 7: ");
    for(int i=10;i<=99;i++)
    {
        if(i%7==0)
            printf("%3d",i);
    }
}

//Chuong trinh chinh
int main()
{
  Boi7();
  return 0;
}
