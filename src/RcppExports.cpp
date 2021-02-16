// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// parse_md_cpp
Rcpp::List parse_md_cpp(std::string x, int flag);
RcppExport SEXP _md4r_parse_md_cpp(SEXP xSEXP, SEXP flagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type flag(flagSEXP);
    rcpp_result_gen = Rcpp::wrap(parse_md_cpp(x, flag));
    return rcpp_result_gen;
END_RCPP
}
// flag_mask
int flag_mask(std::vector<std::string> const& flags);
RcppExport SEXP _md4r_flag_mask(SEXP flagsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> const& >::type flags(flagsSEXP);
    rcpp_result_gen = Rcpp::wrap(flag_mask(flags));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_md4r_parse_md_cpp", (DL_FUNC) &_md4r_parse_md_cpp, 2},
    {"_md4r_flag_mask", (DL_FUNC) &_md4r_flag_mask, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_md4r(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
