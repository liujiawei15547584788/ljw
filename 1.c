/********************************************************************
 *
 *	name	 :	CalFactorial
 *	function :  char类型数组内字节高低位互换
 *	argument :
 *				@n  :需要计算的值n
 *
 *	retval	 :  调用成功返回计算后的结果
 *	author	 :  17647576169@163.com
 *	date	 :  2024/04/17
 * 	note	 :  1*2*3*4*...*(n-2)*(n-1)*n  考查递归思想解决问题
 *
 * *****************************************************************/
#include <stdlib.h>
#include <stdio.h>
int main(int argc,
         char const *argv[])
{
    if (3 != argc)
    {
        perror("error1\n");
        exit(1);
    }
    FILE *file1 = fopen(argv[1], "rb");
    FILE *file2 = fopen(argv[2], "wb");
    if (NULL == file1)
    {
        perror("error2\n");
        exit(1);
    }
    int data;
    while (1)
    {

        data = fgetc(file1);
        if (feof(file1))
        {
            break;
        }
        fputc(data, file2);
    }

    fclose(file1);
    fclose(file2);
    return 0;
}