#include "header.ih"
// decode url-encoded stream

void decode(std::istream &is, std::ostream &os)
{
    char ch;
    while (is.get(ch))                         
    {
        if (ch == '%' && is.get(ch))
        {
            std::string str; 
            str.push_back(ch);               // 2nd digit
            if (is.get(ch))
                str.append(1, ch);
            os << static_cast<char>(hexToDec(str));                     
        }
        else
        os << ch;                             // skip  
    } 
    return;
}
