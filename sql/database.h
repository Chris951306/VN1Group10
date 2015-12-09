#ifndef DATABASE_H
#define DATABASE_H
#include "scientist.h"
#include "computer.h"
#include "link.h"
#include <iostream>
#include <QtSql>
#include <string>
#include <vector>
#include <iomanip>

const int STILLALIVE = 3000;
const int MINYEAR = -1000;
const int MAXYEAR = 2015;
    /*^Constants used to define if the scientist is still alive,
    and the minimum/maximum valid year a scientist can be born*/

using namespace std;

class database{
public:
    void start();
    unsigned int returnCScount();
    unsigned int returnCcount();
    void addScientist(QString name, bool gender, int yob, int yod);
    void returnScientist(unsigned int val, scientist &cs);
    void returnScientists(vector<scientist> &cs);
    void sortCSname(bool &namesort, vector<int> &cs);
    void sortCSgender(bool &gendersort, vector<int> &cs);
    void sortCSyob(bool &yobsort, vector<int> &cs);
    void searchCSname(QString name, vector<int> &id);
    void searchCSgender(bool gender, vector<int> &id);
    void searchCSyob(int yob, vector<int> &id);
    void searchCSyod(int yod, vector<int> &id);
    void addComputer(QString name, int year, QString type, bool built);
    void returnComputer(unsigned int val, computer &c);
    void returnComputers(vector<computer> &c);
    void sortCname(bool &namesort, vector<int> &c);
    void sortCyear(bool &yearsort, vector<int> &c);
    void sortCtype(bool &typesort, vector<int> &c);
    void sortCbuilt(bool &builtsort, vector<int> &c);
    void searchCname(QString name, vector<int> &id);
    void searchCyear(int year, vector<int> &id);
    void searchCtype(QString type, vector<int> &id);
    void searchCbuilt(bool built, vector<int> &id);
    void addLink(int csid, int cid);
    bool isLink(int csid, int cid);
    void updateCSname(unsigned int val, QString name);
    bool returnCSgender(unsigned int val);
    void updateCSgender(unsigned int val, bool gender);
    int returnCSyob(unsigned int val);
    void updateCSyob(unsigned int val, int yob);
    void updateCSyod(unsigned int val, int yod);
    void updateCname(unsigned int val, QString name);
    void updateCyear(unsigned int val, int year);
    void updateCtype(unsigned int val, QString type);
    bool returnCbuilt(unsigned int val);
    void updateCbuilt(unsigned int val, bool built);
    unsigned int maxCSid();
    void getCSid(string &csname, unsigned int &csid, unsigned int step);
    unsigned int getCIDcount(unsigned int csid);
    void getCidFromCSid(unsigned int csid, unsigned int &cid, unsigned int step);
    void getCnameFromCid(unsigned int cid, string &cname);
    unsigned int maxCid();
};

#endif // DATABASE_H
