#include "glob.ih"

char const *Glob::operator[](size_t idx) const
{
    return idx < size() ? d_share->begin[idx] : "";
}

