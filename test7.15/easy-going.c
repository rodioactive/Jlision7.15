//
//  easy-going.c
//  test7.15
//
//  Created by Jlision Eilish on 2022/7/15.
//
#include <stdio.h>
#include "easy-going.h"
//int main()
//{
//    int i = 0;
//    for(i=0;i<10;i++)
//    {
//
//    }
//    //循环10次判断11次
//    return 0;
//}
//1~100内带9的数9共多少99被统计两次
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i=1;i<=100;i++)
//    {
//        if(i%10==9)
//        {
//            count++;
//        }
//        if(i/10==9)
//        {
//            count++;
//        }
////        else if(i/10==9)
////        {
////            count++;
////        }
//    }
//    printf("%d\n",count);
//    return 0;
//}
//1/1+1/2+1/3+1/4...到100
//int main()
//{
//    int i = 0;
//    double sum = 0;
//    for(i=1;i<=100;i++)
//    {
//        sum+=1.0/i;
//    }
//    printf("%lf\n",sum);
//    return 0;
//}
//1/1-1/2+1/3....
//int main()
//{
//    int i = 0;
//    double sum = 0;
//    for(i=1;i<=100;i++)
//    {
//        if(i%2==0)
//        {
//            sum-=1.0/i;
//        }
//        else
//        {
//            sum+=1.0/i;
//        }
//    }
//    printf("%lf\n",sum);
//    return 0;
//}
//或者+-+-+-
//int main()
//{
//
//    int i = 0;
//    double sum = 0;
//    int flag = 1;
//    for(i=1;i<=100;i++)
//    {
//        sum+=flag*1.0/i;
//        flag=-flag;
//
//    }
//    printf("%lf\n",sum);
//
//    return 0;
//
//
//}
//寻找数组最大值
//int main()
//{
//    int i = 0;
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};  //当数组空间内都是负数就不行
//    int max = 0;
//    for(i=0;i<10;i++)
//    {
//        if(max<arr[i])
//        {
//            max=arr[i];
//        }
//    }
//    printf("%d\n",i);
//    return 0;
//}
//int max = 0改为int arr[0] = 0   for(i=1)
//乘法口诀表
//int main()
//{
//    int i = 0;
//    for(i=1;i<10;i++)
//    {
//        int j = 0;
//        for(j=1;j<=i;j++)
//        {
//            printf("%d*%d=%d ",i,j,i*j);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//栈区里存放局部变量和函数形参
