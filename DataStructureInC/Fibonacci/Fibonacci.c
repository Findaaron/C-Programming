//
//  main.c
//  Fibonacci
//
//  Created by Findaaron on 2020/6/24.
//  Copyright © 2020 Findaaron. All rights reserved.
//

/*
 声明被调用的函数:
     1. 使用#include指令使用库函数.
     2. 函数调用声明 int Fib(int n);为外部声明,在整个文件范围内有效.
     3. 如果Fib(int n) 写在主调函数之前,就不需要函数声明.
 */

#include <stdio.h>

int Fib(int n);

int main() {
    
    int n;
    printf("Fibonacci数列：\n\n");
    for(n = 0;n < 20;n++)
        printf("%d ", Fib(n));
    
    printf("\n\n");
    return 0;
}

int Fib(int n) {
    /* Fibonacc数列的递归函数实现 */
    if( n < 2 ) return n == 0 ? 0 : 1;        /* 边界条件 */
    else return Fib(n - 1) + Fib(n - 2);  /* 递归表达式 */
}
