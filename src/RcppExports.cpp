// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// nondominated
LogicalVector nondominated(NumericMatrix m);
RcppExport SEXP _moleopt_nondominated(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(nondominated(m));
    return rcpp_result_gen;
END_RCPP
}
// run_mogsa_cpp
List run_mogsa_cpp(Function fn, NumericMatrix starting_points, NumericVector lower_bounds, NumericVector upper_bounds, int max_local_sets, double epsilon_gradient, double descent_direction_min, double descent_step_min, double descent_step_max, double descent_scale_factor, double descent_armijo_factor, int descent_history_size, int descent_max_iter, double explore_step_min, double explore_step_max, double explore_angle_max, double explore_scale_factor, int refine_after_nstarts, double refine_hv_target, Nullable<Function> custom_descent_fn, long max_budget, std::string logging);
RcppExport SEXP _moleopt_run_mogsa_cpp(SEXP fnSEXP, SEXP starting_pointsSEXP, SEXP lower_boundsSEXP, SEXP upper_boundsSEXP, SEXP max_local_setsSEXP, SEXP epsilon_gradientSEXP, SEXP descent_direction_minSEXP, SEXP descent_step_minSEXP, SEXP descent_step_maxSEXP, SEXP descent_scale_factorSEXP, SEXP descent_armijo_factorSEXP, SEXP descent_history_sizeSEXP, SEXP descent_max_iterSEXP, SEXP explore_step_minSEXP, SEXP explore_step_maxSEXP, SEXP explore_angle_maxSEXP, SEXP explore_scale_factorSEXP, SEXP refine_after_nstartsSEXP, SEXP refine_hv_targetSEXP, SEXP custom_descent_fnSEXP, SEXP max_budgetSEXP, SEXP loggingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Function >::type fn(fnSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type starting_points(starting_pointsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lower_bounds(lower_boundsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type upper_bounds(upper_boundsSEXP);
    Rcpp::traits::input_parameter< int >::type max_local_sets(max_local_setsSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon_gradient(epsilon_gradientSEXP);
    Rcpp::traits::input_parameter< double >::type descent_direction_min(descent_direction_minSEXP);
    Rcpp::traits::input_parameter< double >::type descent_step_min(descent_step_minSEXP);
    Rcpp::traits::input_parameter< double >::type descent_step_max(descent_step_maxSEXP);
    Rcpp::traits::input_parameter< double >::type descent_scale_factor(descent_scale_factorSEXP);
    Rcpp::traits::input_parameter< double >::type descent_armijo_factor(descent_armijo_factorSEXP);
    Rcpp::traits::input_parameter< int >::type descent_history_size(descent_history_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type descent_max_iter(descent_max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type explore_step_min(explore_step_minSEXP);
    Rcpp::traits::input_parameter< double >::type explore_step_max(explore_step_maxSEXP);
    Rcpp::traits::input_parameter< double >::type explore_angle_max(explore_angle_maxSEXP);
    Rcpp::traits::input_parameter< double >::type explore_scale_factor(explore_scale_factorSEXP);
    Rcpp::traits::input_parameter< int >::type refine_after_nstarts(refine_after_nstartsSEXP);
    Rcpp::traits::input_parameter< double >::type refine_hv_target(refine_hv_targetSEXP);
    Rcpp::traits::input_parameter< Nullable<Function> >::type custom_descent_fn(custom_descent_fnSEXP);
    Rcpp::traits::input_parameter< long >::type max_budget(max_budgetSEXP);
    Rcpp::traits::input_parameter< std::string >::type logging(loggingSEXP);
    rcpp_result_gen = Rcpp::wrap(run_mogsa_cpp(fn, starting_points, lower_bounds, upper_bounds, max_local_sets, epsilon_gradient, descent_direction_min, descent_step_min, descent_step_max, descent_scale_factor, descent_armijo_factor, descent_history_size, descent_max_iter, explore_step_min, explore_step_max, explore_angle_max, explore_scale_factor, refine_after_nstarts, refine_hv_target, custom_descent_fn, max_budget, logging));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_moleopt_nondominated", (DL_FUNC) &_moleopt_nondominated, 1},
    {"_moleopt_run_mogsa_cpp", (DL_FUNC) &_moleopt_run_mogsa_cpp, 22},
    {NULL, NULL, 0}
};

RcppExport void R_init_moleopt(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
