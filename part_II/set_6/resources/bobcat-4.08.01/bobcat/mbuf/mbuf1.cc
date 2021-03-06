#include "mbuf.ih"

Mbuf::Mbuf()
:
    d_ostr(cout.rdbuf()),

    d_firstChar(true),
    d_throw(false),

    d_count(0),
    d_maxCount(numeric_limits<size_t>::max()),
    d_lineExcess(false),

    d_showLineNr(false),
    d_lineNr(0),
    d_lineTag("Line")
{}
