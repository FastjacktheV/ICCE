#include "digestbuf.ih"

namespace FBB
{

std::ostream &operator<<(std::ostream &out, DigestBuf const &digestbuf)
{
    OHexStreambuf ohex(out);
    ostream outs(&ohex);
    outs.write(digestbuf.d_pimpl->digest.data(), 
               digestbuf.d_pimpl->digest.length());
    return out;
}

} // FBB
