#ifndef SERVICE_H
#define SERVICE_H
#include "database.h"
#include <iostream>

class service
{
public:
    void start();
    QSqlQuery returnCSquery();
    QSqlQuery returnCquery();
private:
    database db;
};

#endif // SERVICE_H