// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// convertToSccs
List convertToSccs(const DataFrame& cases, const DataFrame& eras, int covariateStart, int covariatePersistencePeriod, int naivePeriod, bool firstOutcomeOnly);
RcppExport SEXP SelfControlledCaseSeries_convertToSccs(SEXP casesSEXP, SEXP erasSEXP, SEXP covariateStartSEXP, SEXP covariatePersistencePeriodSEXP, SEXP naivePeriodSEXP, SEXP firstOutcomeOnlySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const DataFrame& >::type cases(casesSEXP );
        Rcpp::traits::input_parameter< const DataFrame& >::type eras(erasSEXP );
        Rcpp::traits::input_parameter< int >::type covariateStart(covariateStartSEXP );
        Rcpp::traits::input_parameter< int >::type covariatePersistencePeriod(covariatePersistencePeriodSEXP );
        Rcpp::traits::input_parameter< int >::type naivePeriod(naivePeriodSEXP );
        Rcpp::traits::input_parameter< bool >::type firstOutcomeOnly(firstOutcomeOnlySEXP );
        List __result = convertToSccs(cases, eras, covariateStart, covariatePersistencePeriod, naivePeriod, firstOutcomeOnly);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}