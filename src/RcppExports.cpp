// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// nondominated
LogicalVector nondominated(NumericMatrix m);
RcppExport SEXP _mogsacpp_nondominated(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(nondominated(m));
    return rcpp_result_gen;
END_RCPP
}
// run_mogsa_cpp
List run_mogsa_cpp(Function fn, NumericMatrix starting_points, NumericVector lower, NumericVector upper, double epsilon_gradient, double epsilon_explore_set, double epsilon_initial_step_size, double max_explore_set);
RcppExport SEXP _mogsacpp_run_mogsa_cpp(SEXP fnSEXP, SEXP starting_pointsSEXP, SEXP lowerSEXP, SEXP upperSEXP, SEXP epsilon_gradientSEXP, SEXP epsilon_explore_setSEXP, SEXP epsilon_initial_step_sizeSEXP, SEXP max_explore_setSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Function >::type fn(fnSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type starting_points(starting_pointsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon_gradient(epsilon_gradientSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon_explore_set(epsilon_explore_setSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon_initial_step_size(epsilon_initial_step_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type max_explore_set(max_explore_setSEXP);
    rcpp_result_gen = Rcpp::wrap(run_mogsa_cpp(fn, starting_points, lower, upper, epsilon_gradient, epsilon_explore_set, epsilon_initial_step_size, max_explore_set));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mogsacpp_nondominated", (DL_FUNC) &_mogsacpp_nondominated, 1},
    {"_mogsacpp_run_mogsa_cpp", (DL_FUNC) &_mogsacpp_run_mogsa_cpp, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_mogsacpp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
