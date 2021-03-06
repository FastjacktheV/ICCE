// new can throw, 
#include "matrix.ih"

Matrix::Matrix(IniList iniList)
try
:
    d_nRows(iniList.size()),
    d_nCols(iniList.begin()->size()),
    d_data(new double[size()])
{
    auto ptr = d_data;
    for (auto &list: iniList)
    {
        if (list.size() != d_nCols)
            throw invalid_argument("Inconsistent matrix");

        memcpy(ptr, &*list.begin() , list.size() * sizeof(double));
        ptr += list.size();
    }
}
catch (...)
{ // JB: LEAK. If invalid_argument, then d_data is already allocated and destructor won't be called because constructor hasn't finished.
    delete[] d_data;
    throw;
}
