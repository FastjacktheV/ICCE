#include "dna.ih"

uint32_t DNA::readSize()
{
    uint32_t sz;
    d_is.read(reinterpret_cast<char *>(&sz), sizeof(uint32_t));
    return sz;
}
