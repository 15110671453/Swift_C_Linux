//
//  CFramWork.h
//  SwiftBasicMac
//
//  Created by admindyn on 2018/5/9.
//  Copyright © 2018年 admindyn. All rights reserved.
//




#ifndef CFramWork_h
#define CFramWork_h



#include <stdio.h>
void cTest(void);
int cFuncStr(const char *str);
void cFuncInt(const int *str);
void generic_function(int value_type, void* value);
size_t  cFuncStrlen(const char* str);
void set_callback(void (*functionPtr)(const void*),void const * userData);
#endif /* CFramWork_h */
