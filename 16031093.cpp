#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[])
{
    srand(time(NULL));
    int n =rand()%10;  //n : 0~9
    int N=2*n+1;       //N=1~19
    int data[N]; /*�ŧidata�}�C�A�ΨӦs��ҿ�J��5�Ӿ�� */
    int i, j, t;
    int nn = (N+1)/2 ;
    
    printf("== ��w�ƧǪk(�Ѥp��j�Ƨ�)==\n\n");
    printf("�@��%d�ӼƦr \n",N);
    //printf("...�п�J���Ӽƭ�(��ƶ��Ť@��)...\n\n");
    /*��J�Ƨǫe����� */
    printf("�Ƨǫe:");
    for (i=0;i<N;i++) /* ��J����Ʒ|�̧Ǧs��bdata[0]~data[4] */
    {
        //scanf("%d", &n); /* scanf_s() for C++ */
        data[i]=rand()%1000+1;
        printf("%d,", data[i]);
    }
    /*��w�ƧǪk */    
    for(i=nn; i>=0;i--)
    {
             for(j=0;j<=i;j++)
             {
                              if (data[j]>data[j+1])
                              {
                                                    t=data[j];   /*�洫���*/
                                                    data[j]=data[j+1];
                                                    data[j+1]=t;
                              }
             }
    }
    /*�L�X�Ƨǫ᪺���*/
    printf("\n �Ƨǫ�: \n");
    for(i=0; i<N;i++)
    {
                    printf("%d,", data[i]);
    }
    
    
    printf("�����=%d ", data[nn-1]); 
    
    printf("\n\n");
    system("PAUSE");
    return 0;
} 

