// Row constructor could throw
#include "matrix.ih"

Matrix::Row const Matrix::at(size_t rowindex) const
{
    try
    {
        return Row(rowindex, *this);
    }
    catch (...)
    {
        throw;
    }
}
