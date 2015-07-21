#include <numeric>
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
double sum4(NumericVector x){
	return std::accumulate(x.begin(), x.end(), 0.0);
}

