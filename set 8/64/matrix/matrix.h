#ifndef INCLUDED_MATRIX_
#define INCLUDED_MATRIX_

#include <cstddef>
#include <initializer_list>

class Matrix
{
    double *d_data = nullptr;
    size_t  d_nrows = 0;
    size_t  d_ncols = 0; 

    public:
                                            // constructors
        Matrix() = default;                 //
        Matrix(Matrix const &other);        // matrix2.cc
        Matrix(Matrix &&tmp);               // matrix3.cc

        Matrix(size_t ncols, size_t nrows); // matrix4.cc
                                            // matrix5.cc
        Matrix(std::initializer_list<std::initializer_list<double>> inlist);

        ~Matrix();
        Matrix &operator=(Matrix const &other);
        Matrix &operator=(Matrix &&tmp);
        void swap(Matrix &other);

                                            // return members
        size_t const nRows()            const;
        size_t const nCols()            const;

        double const *row(size_t row)   const;
        double *row(size_t row);

        static Matrix identity(size_t dim); 

        Matrix &tr();           
    private:
};
        
inline size_t const Matrix::nRows() const
{
    return d_nrows;
}

inline size_t const Matrix::nCols() const
{
    return d_ncols;
}

#endif
