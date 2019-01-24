#include <Rcpp.h>
using namespace Rcpp;

//' Apply cumsum to each column of matrix
//' 
//' Fast computation of apply(x,2,cumsum)
//'
//' @param m A matrix
//' @return A matrix the same size as m with the column-wise cumulative sums.
//' @author Claus Ekstrom <claus@@rprimer.dk>
//' @examples
//'   // Generate 100000 predictors and 100 observations
//'   x <- matrix(rnorm(100*100000), nrow=100)
//'   colCumSum(y, x)
//'
//' @export
// [[Rcpp::export]]
NumericMatrix colCumSum(const NumericMatrix& m) {
  Rcpp::NumericMatrix M(Rcpp::clone(m));
  for (int j = 0; j < M.ncol(); ++j) {
    for (int i = 1; i < M.nrow(); ++i) {
      M(i, j) += M(i - 1, j);
    }
  }
  return M;
}