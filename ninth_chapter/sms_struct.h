// sms_struct.h
#ifndef sms_stuct_INCLUDED
#define sms_stuct_INCLUDED
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 3
typedef struct student
{
    char no[11];
    char name[15];
    float score[N];
    float sum;
    float average;
    int order;
} STUDENT;
// 函数声明
int input(STUDENT *stud, int n);
void print(STUDENT *stud, int n);
void sort(STUDENT *stud, int n);
void search(STUDENT *stud, int n);
int insert(STUDENT *stud, int n);
int Delete(STUDENT *stud, int n);
void fileWrite(STUDENT *stud, int n);
int fileRead(STUDENT *stud);
#endif