/*
                              fsadriver.cc

   $Id$

   $Log$
   Revision 1.1  2005/08/19 15:12:52  frank
   Initial revision

   Revision 1.1.1.1  2003/04/19 14:24:00  frank
   Installation of Pattern

*/

#include "fsadriver.h"

#ifndef INCLUDED_PATTERN_H_
#include "../pattern.hh"
#endif

using namespace std;
using namespace FBB;


int main(int argc, char **argv)
{
    string line;
    PerlSetFSA fsa;

    while (true)
    {
        cout << "line to convert: ";
        if (!getline(cin, line) || line.empty())
            break;

        fsa.convert(line);
    }
}
