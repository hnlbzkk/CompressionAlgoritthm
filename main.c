﻿#include <stdio.h>
#include <stdlib.h>
#include "data.h"
#include "file.c"


int main()
{
    /*
    Px px;
    Byte low = 1;
    Byte high = 1;
    px = hexadecimalToPx(low, high);
    printf("%d", px);
    */
	char chs[] = { 
        0X6B,0X7B,0X4B,0X73,0X4B,0X73,0X6B,0X7B,0X6B,0X73,0X6B,0X73,0X6B,0X73,0X6B,0X7B,
        0X6B,0X73,0X6B,0X73,0X6B,0X73,0X6B,0X73,0X6B,0X73,0X6B,0X73,0X6B,0X73,0X6B,0X73,
        0X6B,0X73,0X6B,0X73,0X6B,0X73,0X6B,0X73,0X4B,0X73,0X4B,0X73,0X4B,0X73,0X4B,0X73,
        0X6B,0X73,0X6B,0X73,0X6B,0X73,0X4B,0X73,0X4B,0X73,0X4B,0X73,0X4B,0X6B,0X4B,0X6B,
        0X2B,0X6B,0X2B,0X6B,0X2B,0X6B,0X2B,0X6B,0X2B,0X6B,0X2B,0X6B,0X2B,0X6B,0X2B,0X6B,
        0X2B,0X6B,0X2B,0X6B,0X2B,0X6B,0X2B,0X6B,0X2B,0X6B,0X2B,0X6B,0X2B,0X6B,0X2B,0X6B,
        0X2B,0X6B,0X2B,0X6B,0X2B,0X6B,0X2B,0X6B,0X2B,0X6B,0X4B,0X6B,0X6B,0X6B,0X6C,0X6B,
        0XAC,0X6B,0XED,0X6B,0XED,0X73,0XAC,0X6B,0X4B,0X63,0X0A,0X5B,0XEA,0X5A,0XEA,0X62,
        0XEA,0X62,0XEA,0X62,0XCA,0X62,0XCA,0X62,0XCA,0X62,0XCA,0X62,0XCA,0X62,0XC9,0X62,
        0XC9,0X62,0XC9,0X62,0XC9,0X62,0XC9,0X62,0XC9,0X5A,0XC9,0X5A,0XC9,0X5A,0XC9,0X5A,
        0XC9,0X5A,0XC9,0X5A,0XA9,0X5A,0XA9,0X5A,0X89,0X5A,0X89,0X5A,0XA9,0X5A,0XA9,0X5A,
        0X89,0X5A,0X89,0X5A,0X89,0X5A,0X88,0X5A,0X88,0X5A,0X88,0X5A,0X88,0X5A,0X88,0X5A,
        0X88,0X5A,0X88,0X52,0X88,0X52,0X88,0X52,0X88,0X52,0X88,0X52,0X88,0X52,0X88,0X52,
        0X88,0X52,0X88,0X52,0X68,0X52,0X68,0X52,0X68,0X52,0X68,0X52,0X68,0X52,0X68,0X52,
        0X68,0X52,0X68,0X52,0X68,0X52,0X67,0X52,0X67,0X52,0X87,0X52,0X87,0X52,0X87,0X5A,
        0X87,0X5A,0X87,0X5A,0X87,0X5A,0X87,0X52,0X87,0X52,0X87,0X52,0X87,0X52,0X87,0X52,
        0XA7,0X52,0XA7,0X52,0XA8,0X52,0XC8,0X52,0XE8,0X52,0X28,0X53,0X89,0X5B,0XC9,0X63,
        0X6E,0X95,0XB2,0XBE,0X54,0XCF,0X53,0XCF,0XD2,0XBE,0X0F,0XA6,0X6D,0X8D,0XCC,0X7C,
        0X08,0X4B,0X25,0X2A,0XC5,0X21,0XE6,0X29,0XA6,0X21,0XE7,0X29,0XC7,0X21,0XE7,0X29,
        0X27,0X32,0X47,0X32,0X67,0X32,0X67,0X32,0X4B,0X7B,0X4B,0X7B,0X6B,0X7B,0X6B,0X7B 
    };

    compression(chs, sizeof(chs));
    printList();
}
