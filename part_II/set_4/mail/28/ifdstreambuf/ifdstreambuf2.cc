#include "ifdstreambuf.ih"

IFdStreambuf::IFdStreambuf(int fd, Mode mode)
:
    d_buffer(new char[s_SIZE]),
    d_fd(fd),
    d_mode(mode)
{
    setg(d_buffer, d_buffer + s_SIZE, d_buffer + s_SIZE);
}
