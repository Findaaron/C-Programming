//
//  Gauss.c
//  DataStructureInC
//
//  Created by Findaaron on 2020/6/22.
//  Copyright © 2020 Findaaron. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //高斯算法:计算 1+2+...+100 的方法
    int sum = 0, n = 100;
    sum = n*(n+1)/2;
    printf("%d\n", sum);
    return 0;
}
