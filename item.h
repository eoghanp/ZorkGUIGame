#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <QFile>
#include <vector>

using namespace std;

class item
{
public:
    item(string name);
    string getItemName();
private:
    string details;
};

#endif // ITEM_H
