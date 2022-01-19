#ifndef __PERSON_H__
#define __PERSON_H__

#define STR_LEN     50

typedef struct _person
{
    int ssn;
    char name[STR_LEN];
    char addr[STR_LEN];
} Person;

int GetSSN(const Person *p);
void ShowPerInfo(const Person *p);
Person* MakePersonData(const int ssn, const char *name, const char *addr);

#endif