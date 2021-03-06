//  Made by:
//  Christian Andreas Jacobsen
//  Hekla Rún Ámundadóttir
//  Kristín Vala Einarsdóttir
//  Þórmundur Smári Hilmarsson

#include "core.h"
#include <QCoreApplication>

void logo();

int main()
{
    logo();
    vector<scientists> cs;
    vector<computers> c;
    core view;
    view.controller(cs, c);
    return 0;
}

void logo(){
    char i = 92;
    cout << "  ________                          ___________    " << endl;
    cout << " /  _____/______  ____  __ ________/_   " << i << "   _  " << i << "   " << endl;
    cout << "/   " << i << "  __" << i << "_  __ " << i << "/  _ " << i << "|  |  " << i << "____ "
         << i << "|   /  /_" << i << "  " << i << "  " << endl;
    cout << i << "    " << i << "_" << i << "  " << i << "  | " << i
         << "(  <_> )  |  /  |_> >   " << i << "  " << i << "_/   " << i << " " << endl;
    cout << " " << i << "______  /__|   " << i << "____/|____/|   __/|___|" << i << "_____  / " << endl;
    cout <<  "        " << i << "/                   |__|              " << i << "/        " << endl;
}
