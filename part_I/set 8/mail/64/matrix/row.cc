#include "matrix.ih"

double const *Matrix::row(size_t row) const
{
    return d_data + d_ncols * row;
}

