// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// ips_to_xy
List ips_to_xy(std::vector<unsigned> ips, int addr_space_bits_per_image, int addr_space_bits_per_pixel);
RcppExport SEXP _hilbertv4_ips_to_xy(SEXP ipsSEXP, SEXP addr_space_bits_per_imageSEXP, SEXP addr_space_bits_per_pixelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<unsigned> >::type ips(ipsSEXP);
    Rcpp::traits::input_parameter< int >::type addr_space_bits_per_image(addr_space_bits_per_imageSEXP);
    Rcpp::traits::input_parameter< int >::type addr_space_bits_per_pixel(addr_space_bits_per_pixelSEXP);
    rcpp_result_gen = Rcpp::wrap(ips_to_xy(ips, addr_space_bits_per_image, addr_space_bits_per_pixel));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_hilbertv4_ips_to_xy", (DL_FUNC) &_hilbertv4_ips_to_xy, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_hilbertv4(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
