/* �p������׹��-�i���m�ߧ@�~-�@�~15 */
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/05/24 10:00 */
#include <stdio.h>  //��ܮw 
#include <stdlib.h> //��ܮw 
#include <ctype.h>  //��ܮw 
#include <string.h> //��ܮw 

int main(void)
{
	printf("�p������׹��-�i���m�ߧ@�~-�@�~15\n");
    printf("�s�@�H�G���f�W\n");
	printf("�����ɶ��G2019/05/24 10:00\n");
	printf("-----------------------------------\n");
   char slogan1[]="Taiwan, Touch, Your, Heart"; //�r��
   char slogan2[50];
   int i, j=0, length; 

   length=strlen(slogan1); //���X�Ӧr�������� 

   for (i=0; i<length; i++) //���X�Ӧr�������� 
   {
      if (isalpha(slogan1[i])!=0 || isspace(slogan1[i]) !=0) ////�P�O�O�_���r�� 
      {
          slogan2[j]=slogan1[i]; 
          j++;
      }
   }
   slogan2[j]='\0';//�̫�@���J�����r�� 
   puts(slogan2);    
   system("pause");//�Ȱ����� 
   return 0;//�^�ǭ� 0 
}
