// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cubic_2d_c
NumericMatrix cubic_2d_c(int height, int width, int seed, double freq, int fractal, int octaves, double lacunarity, double gain, int pertube, double pertube_amp);
RcppExport SEXP _ambient_cubic_2d_c(SEXP heightSEXP, SEXP widthSEXP, SEXP seedSEXP, SEXP freqSEXP, SEXP fractalSEXP, SEXP octavesSEXP, SEXP lacunaritySEXP, SEXP gainSEXP, SEXP pertubeSEXP, SEXP pertube_ampSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type fractal(fractalSEXP);
    Rcpp::traits::input_parameter< int >::type octaves(octavesSEXP);
    Rcpp::traits::input_parameter< double >::type lacunarity(lacunaritySEXP);
    Rcpp::traits::input_parameter< double >::type gain(gainSEXP);
    Rcpp::traits::input_parameter< int >::type pertube(pertubeSEXP);
    Rcpp::traits::input_parameter< double >::type pertube_amp(pertube_ampSEXP);
    rcpp_result_gen = Rcpp::wrap(cubic_2d_c(height, width, seed, freq, fractal, octaves, lacunarity, gain, pertube, pertube_amp));
    return rcpp_result_gen;
END_RCPP
}
// cubic_3d_c
NumericMatrix cubic_3d_c(int height, int width, int depth, int seed, double freq, int fractal, int octaves, double lacunarity, double gain, int pertube, double pertube_amp);
RcppExport SEXP _ambient_cubic_3d_c(SEXP heightSEXP, SEXP widthSEXP, SEXP depthSEXP, SEXP seedSEXP, SEXP freqSEXP, SEXP fractalSEXP, SEXP octavesSEXP, SEXP lacunaritySEXP, SEXP gainSEXP, SEXP pertubeSEXP, SEXP pertube_ampSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type depth(depthSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type fractal(fractalSEXP);
    Rcpp::traits::input_parameter< int >::type octaves(octavesSEXP);
    Rcpp::traits::input_parameter< double >::type lacunarity(lacunaritySEXP);
    Rcpp::traits::input_parameter< double >::type gain(gainSEXP);
    Rcpp::traits::input_parameter< int >::type pertube(pertubeSEXP);
    Rcpp::traits::input_parameter< double >::type pertube_amp(pertube_ampSEXP);
    rcpp_result_gen = Rcpp::wrap(cubic_3d_c(height, width, depth, seed, freq, fractal, octaves, lacunarity, gain, pertube, pertube_amp));
    return rcpp_result_gen;
END_RCPP
}
// gen_cubic2d_c
NumericVector gen_cubic2d_c(NumericVector x, NumericVector y, double freq, int seed);
RcppExport SEXP _ambient_gen_cubic2d_c(SEXP xSEXP, SEXP ySEXP, SEXP freqSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_cubic2d_c(x, y, freq, seed));
    return rcpp_result_gen;
END_RCPP
}
// gen_cubic3d_c
NumericVector gen_cubic3d_c(NumericVector x, NumericVector y, NumericVector z, double freq, int seed);
RcppExport SEXP _ambient_gen_cubic3d_c(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP freqSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_cubic3d_c(x, y, z, freq, seed));
    return rcpp_result_gen;
END_RCPP
}
// perlin_2d_c
NumericMatrix perlin_2d_c(int height, int width, int seed, double freq, int interp, int fractal, int octaves, double lacunarity, double gain, int pertube, double pertube_amp);
RcppExport SEXP _ambient_perlin_2d_c(SEXP heightSEXP, SEXP widthSEXP, SEXP seedSEXP, SEXP freqSEXP, SEXP interpSEXP, SEXP fractalSEXP, SEXP octavesSEXP, SEXP lacunaritySEXP, SEXP gainSEXP, SEXP pertubeSEXP, SEXP pertube_ampSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type interp(interpSEXP);
    Rcpp::traits::input_parameter< int >::type fractal(fractalSEXP);
    Rcpp::traits::input_parameter< int >::type octaves(octavesSEXP);
    Rcpp::traits::input_parameter< double >::type lacunarity(lacunaritySEXP);
    Rcpp::traits::input_parameter< double >::type gain(gainSEXP);
    Rcpp::traits::input_parameter< int >::type pertube(pertubeSEXP);
    Rcpp::traits::input_parameter< double >::type pertube_amp(pertube_ampSEXP);
    rcpp_result_gen = Rcpp::wrap(perlin_2d_c(height, width, seed, freq, interp, fractal, octaves, lacunarity, gain, pertube, pertube_amp));
    return rcpp_result_gen;
END_RCPP
}
// perlin_3d_c
NumericMatrix perlin_3d_c(int height, int width, int depth, int seed, double freq, int interp, int fractal, int octaves, double lacunarity, double gain, int pertube, double pertube_amp);
RcppExport SEXP _ambient_perlin_3d_c(SEXP heightSEXP, SEXP widthSEXP, SEXP depthSEXP, SEXP seedSEXP, SEXP freqSEXP, SEXP interpSEXP, SEXP fractalSEXP, SEXP octavesSEXP, SEXP lacunaritySEXP, SEXP gainSEXP, SEXP pertubeSEXP, SEXP pertube_ampSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type depth(depthSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type interp(interpSEXP);
    Rcpp::traits::input_parameter< int >::type fractal(fractalSEXP);
    Rcpp::traits::input_parameter< int >::type octaves(octavesSEXP);
    Rcpp::traits::input_parameter< double >::type lacunarity(lacunaritySEXP);
    Rcpp::traits::input_parameter< double >::type gain(gainSEXP);
    Rcpp::traits::input_parameter< int >::type pertube(pertubeSEXP);
    Rcpp::traits::input_parameter< double >::type pertube_amp(pertube_ampSEXP);
    rcpp_result_gen = Rcpp::wrap(perlin_3d_c(height, width, depth, seed, freq, interp, fractal, octaves, lacunarity, gain, pertube, pertube_amp));
    return rcpp_result_gen;
END_RCPP
}
// gen_perlin2d_c
NumericVector gen_perlin2d_c(NumericVector x, NumericVector y, double freq, int seed, int interp);
RcppExport SEXP _ambient_gen_perlin2d_c(SEXP xSEXP, SEXP ySEXP, SEXP freqSEXP, SEXP seedSEXP, SEXP interpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type interp(interpSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_perlin2d_c(x, y, freq, seed, interp));
    return rcpp_result_gen;
END_RCPP
}
// gen_perlin3d_c
NumericVector gen_perlin3d_c(NumericVector x, NumericVector y, NumericVector z, double freq, int seed, int interp);
RcppExport SEXP _ambient_gen_perlin3d_c(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP freqSEXP, SEXP seedSEXP, SEXP interpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type interp(interpSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_perlin3d_c(x, y, z, freq, seed, interp));
    return rcpp_result_gen;
END_RCPP
}
// simplex_2d_c
NumericMatrix simplex_2d_c(int height, int width, int seed, double freq, int fractal, int octaves, double lacunarity, double gain, int pertube, double pertube_amp);
RcppExport SEXP _ambient_simplex_2d_c(SEXP heightSEXP, SEXP widthSEXP, SEXP seedSEXP, SEXP freqSEXP, SEXP fractalSEXP, SEXP octavesSEXP, SEXP lacunaritySEXP, SEXP gainSEXP, SEXP pertubeSEXP, SEXP pertube_ampSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type fractal(fractalSEXP);
    Rcpp::traits::input_parameter< int >::type octaves(octavesSEXP);
    Rcpp::traits::input_parameter< double >::type lacunarity(lacunaritySEXP);
    Rcpp::traits::input_parameter< double >::type gain(gainSEXP);
    Rcpp::traits::input_parameter< int >::type pertube(pertubeSEXP);
    Rcpp::traits::input_parameter< double >::type pertube_amp(pertube_ampSEXP);
    rcpp_result_gen = Rcpp::wrap(simplex_2d_c(height, width, seed, freq, fractal, octaves, lacunarity, gain, pertube, pertube_amp));
    return rcpp_result_gen;
END_RCPP
}
// simplex_3d_c
NumericMatrix simplex_3d_c(int height, int width, int depth, int seed, double freq, int fractal, int octaves, double lacunarity, double gain, int pertube, double pertube_amp);
RcppExport SEXP _ambient_simplex_3d_c(SEXP heightSEXP, SEXP widthSEXP, SEXP depthSEXP, SEXP seedSEXP, SEXP freqSEXP, SEXP fractalSEXP, SEXP octavesSEXP, SEXP lacunaritySEXP, SEXP gainSEXP, SEXP pertubeSEXP, SEXP pertube_ampSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type depth(depthSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type fractal(fractalSEXP);
    Rcpp::traits::input_parameter< int >::type octaves(octavesSEXP);
    Rcpp::traits::input_parameter< double >::type lacunarity(lacunaritySEXP);
    Rcpp::traits::input_parameter< double >::type gain(gainSEXP);
    Rcpp::traits::input_parameter< int >::type pertube(pertubeSEXP);
    Rcpp::traits::input_parameter< double >::type pertube_amp(pertube_ampSEXP);
    rcpp_result_gen = Rcpp::wrap(simplex_3d_c(height, width, depth, seed, freq, fractal, octaves, lacunarity, gain, pertube, pertube_amp));
    return rcpp_result_gen;
END_RCPP
}
// simplex_4d_c
NumericMatrix simplex_4d_c(int height, int width, int depth, int time, int seed, double freq, int fractal, int octaves, double lacunarity, double gain, int pertube, double pertube_amp);
RcppExport SEXP _ambient_simplex_4d_c(SEXP heightSEXP, SEXP widthSEXP, SEXP depthSEXP, SEXP timeSEXP, SEXP seedSEXP, SEXP freqSEXP, SEXP fractalSEXP, SEXP octavesSEXP, SEXP lacunaritySEXP, SEXP gainSEXP, SEXP pertubeSEXP, SEXP pertube_ampSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type depth(depthSEXP);
    Rcpp::traits::input_parameter< int >::type time(timeSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type fractal(fractalSEXP);
    Rcpp::traits::input_parameter< int >::type octaves(octavesSEXP);
    Rcpp::traits::input_parameter< double >::type lacunarity(lacunaritySEXP);
    Rcpp::traits::input_parameter< double >::type gain(gainSEXP);
    Rcpp::traits::input_parameter< int >::type pertube(pertubeSEXP);
    Rcpp::traits::input_parameter< double >::type pertube_amp(pertube_ampSEXP);
    rcpp_result_gen = Rcpp::wrap(simplex_4d_c(height, width, depth, time, seed, freq, fractal, octaves, lacunarity, gain, pertube, pertube_amp));
    return rcpp_result_gen;
END_RCPP
}
// gen_simplex2d_c
NumericVector gen_simplex2d_c(NumericVector x, NumericVector y, double freq, int seed);
RcppExport SEXP _ambient_gen_simplex2d_c(SEXP xSEXP, SEXP ySEXP, SEXP freqSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_simplex2d_c(x, y, freq, seed));
    return rcpp_result_gen;
END_RCPP
}
// gen_simplex3d_c
NumericVector gen_simplex3d_c(NumericVector x, NumericVector y, NumericVector z, double freq, int seed);
RcppExport SEXP _ambient_gen_simplex3d_c(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP freqSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_simplex3d_c(x, y, z, freq, seed));
    return rcpp_result_gen;
END_RCPP
}
// gen_simplex4d_c
NumericVector gen_simplex4d_c(NumericVector x, NumericVector y, NumericVector z, NumericVector t, double freq, int seed);
RcppExport SEXP _ambient_gen_simplex4d_c(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP tSEXP, SEXP freqSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_simplex4d_c(x, y, z, t, freq, seed));
    return rcpp_result_gen;
END_RCPP
}
// value_2d_c
NumericMatrix value_2d_c(int height, int width, int seed, double freq, int interp, int fractal, int octaves, double lacunarity, double gain, int pertube, double pertube_amp);
RcppExport SEXP _ambient_value_2d_c(SEXP heightSEXP, SEXP widthSEXP, SEXP seedSEXP, SEXP freqSEXP, SEXP interpSEXP, SEXP fractalSEXP, SEXP octavesSEXP, SEXP lacunaritySEXP, SEXP gainSEXP, SEXP pertubeSEXP, SEXP pertube_ampSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type interp(interpSEXP);
    Rcpp::traits::input_parameter< int >::type fractal(fractalSEXP);
    Rcpp::traits::input_parameter< int >::type octaves(octavesSEXP);
    Rcpp::traits::input_parameter< double >::type lacunarity(lacunaritySEXP);
    Rcpp::traits::input_parameter< double >::type gain(gainSEXP);
    Rcpp::traits::input_parameter< int >::type pertube(pertubeSEXP);
    Rcpp::traits::input_parameter< double >::type pertube_amp(pertube_ampSEXP);
    rcpp_result_gen = Rcpp::wrap(value_2d_c(height, width, seed, freq, interp, fractal, octaves, lacunarity, gain, pertube, pertube_amp));
    return rcpp_result_gen;
END_RCPP
}
// value_3d_c
NumericMatrix value_3d_c(int height, int width, int depth, int seed, double freq, int interp, int fractal, int octaves, double lacunarity, double gain, int pertube, double pertube_amp);
RcppExport SEXP _ambient_value_3d_c(SEXP heightSEXP, SEXP widthSEXP, SEXP depthSEXP, SEXP seedSEXP, SEXP freqSEXP, SEXP interpSEXP, SEXP fractalSEXP, SEXP octavesSEXP, SEXP lacunaritySEXP, SEXP gainSEXP, SEXP pertubeSEXP, SEXP pertube_ampSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type depth(depthSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type interp(interpSEXP);
    Rcpp::traits::input_parameter< int >::type fractal(fractalSEXP);
    Rcpp::traits::input_parameter< int >::type octaves(octavesSEXP);
    Rcpp::traits::input_parameter< double >::type lacunarity(lacunaritySEXP);
    Rcpp::traits::input_parameter< double >::type gain(gainSEXP);
    Rcpp::traits::input_parameter< int >::type pertube(pertubeSEXP);
    Rcpp::traits::input_parameter< double >::type pertube_amp(pertube_ampSEXP);
    rcpp_result_gen = Rcpp::wrap(value_3d_c(height, width, depth, seed, freq, interp, fractal, octaves, lacunarity, gain, pertube, pertube_amp));
    return rcpp_result_gen;
END_RCPP
}
// gen_value2d_c
NumericVector gen_value2d_c(NumericVector x, NumericVector y, double freq, int seed, int interp);
RcppExport SEXP _ambient_gen_value2d_c(SEXP xSEXP, SEXP ySEXP, SEXP freqSEXP, SEXP seedSEXP, SEXP interpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type interp(interpSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_value2d_c(x, y, freq, seed, interp));
    return rcpp_result_gen;
END_RCPP
}
// gen_value3d_c
NumericVector gen_value3d_c(NumericVector x, NumericVector y, NumericVector z, double freq, int seed, int interp);
RcppExport SEXP _ambient_gen_value3d_c(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP freqSEXP, SEXP seedSEXP, SEXP interpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type interp(interpSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_value3d_c(x, y, z, freq, seed, interp));
    return rcpp_result_gen;
END_RCPP
}
// white_2d_c
NumericMatrix white_2d_c(int height, int width, int seed, double freq, int pertube, double pertube_amp);
RcppExport SEXP _ambient_white_2d_c(SEXP heightSEXP, SEXP widthSEXP, SEXP seedSEXP, SEXP freqSEXP, SEXP pertubeSEXP, SEXP pertube_ampSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type pertube(pertubeSEXP);
    Rcpp::traits::input_parameter< double >::type pertube_amp(pertube_ampSEXP);
    rcpp_result_gen = Rcpp::wrap(white_2d_c(height, width, seed, freq, pertube, pertube_amp));
    return rcpp_result_gen;
END_RCPP
}
// white_3d_c
NumericMatrix white_3d_c(int height, int width, int depth, int seed, double freq, int pertube, double pertube_amp);
RcppExport SEXP _ambient_white_3d_c(SEXP heightSEXP, SEXP widthSEXP, SEXP depthSEXP, SEXP seedSEXP, SEXP freqSEXP, SEXP pertubeSEXP, SEXP pertube_ampSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type depth(depthSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type pertube(pertubeSEXP);
    Rcpp::traits::input_parameter< double >::type pertube_amp(pertube_ampSEXP);
    rcpp_result_gen = Rcpp::wrap(white_3d_c(height, width, depth, seed, freq, pertube, pertube_amp));
    return rcpp_result_gen;
END_RCPP
}
// white_4d_c
NumericMatrix white_4d_c(int height, int width, int depth, int time, int seed, double freq, int pertube, double pertube_amp);
RcppExport SEXP _ambient_white_4d_c(SEXP heightSEXP, SEXP widthSEXP, SEXP depthSEXP, SEXP timeSEXP, SEXP seedSEXP, SEXP freqSEXP, SEXP pertubeSEXP, SEXP pertube_ampSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type depth(depthSEXP);
    Rcpp::traits::input_parameter< int >::type time(timeSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type pertube(pertubeSEXP);
    Rcpp::traits::input_parameter< double >::type pertube_amp(pertube_ampSEXP);
    rcpp_result_gen = Rcpp::wrap(white_4d_c(height, width, depth, time, seed, freq, pertube, pertube_amp));
    return rcpp_result_gen;
END_RCPP
}
// gen_white2d_c
NumericVector gen_white2d_c(NumericVector x, NumericVector y, double freq, int seed);
RcppExport SEXP _ambient_gen_white2d_c(SEXP xSEXP, SEXP ySEXP, SEXP freqSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_white2d_c(x, y, freq, seed));
    return rcpp_result_gen;
END_RCPP
}
// gen_white3d_c
NumericVector gen_white3d_c(NumericVector x, NumericVector y, NumericVector z, double freq, int seed);
RcppExport SEXP _ambient_gen_white3d_c(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP freqSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_white3d_c(x, y, z, freq, seed));
    return rcpp_result_gen;
END_RCPP
}
// gen_white4d_c
NumericVector gen_white4d_c(NumericVector x, NumericVector y, NumericVector z, NumericVector t, double freq, int seed);
RcppExport SEXP _ambient_gen_white4d_c(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP tSEXP, SEXP freqSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_white4d_c(x, y, z, t, freq, seed));
    return rcpp_result_gen;
END_RCPP
}
// worley_2d_c
NumericMatrix worley_2d_c(int height, int width, int seed, double freq, int fractal, int octaves, double lacunarity, double gain, int dist, int value, IntegerVector dist2ind, double jitter, int pertube, double pertube_amp);
RcppExport SEXP _ambient_worley_2d_c(SEXP heightSEXP, SEXP widthSEXP, SEXP seedSEXP, SEXP freqSEXP, SEXP fractalSEXP, SEXP octavesSEXP, SEXP lacunaritySEXP, SEXP gainSEXP, SEXP distSEXP, SEXP valueSEXP, SEXP dist2indSEXP, SEXP jitterSEXP, SEXP pertubeSEXP, SEXP pertube_ampSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type fractal(fractalSEXP);
    Rcpp::traits::input_parameter< int >::type octaves(octavesSEXP);
    Rcpp::traits::input_parameter< double >::type lacunarity(lacunaritySEXP);
    Rcpp::traits::input_parameter< double >::type gain(gainSEXP);
    Rcpp::traits::input_parameter< int >::type dist(distSEXP);
    Rcpp::traits::input_parameter< int >::type value(valueSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dist2ind(dist2indSEXP);
    Rcpp::traits::input_parameter< double >::type jitter(jitterSEXP);
    Rcpp::traits::input_parameter< int >::type pertube(pertubeSEXP);
    Rcpp::traits::input_parameter< double >::type pertube_amp(pertube_ampSEXP);
    rcpp_result_gen = Rcpp::wrap(worley_2d_c(height, width, seed, freq, fractal, octaves, lacunarity, gain, dist, value, dist2ind, jitter, pertube, pertube_amp));
    return rcpp_result_gen;
END_RCPP
}
// worley_3d_c
NumericMatrix worley_3d_c(int height, int width, int depth, int seed, double freq, int fractal, int octaves, double lacunarity, double gain, int dist, int value, IntegerVector dist2ind, double jitter, int pertube, double pertube_amp);
RcppExport SEXP _ambient_worley_3d_c(SEXP heightSEXP, SEXP widthSEXP, SEXP depthSEXP, SEXP seedSEXP, SEXP freqSEXP, SEXP fractalSEXP, SEXP octavesSEXP, SEXP lacunaritySEXP, SEXP gainSEXP, SEXP distSEXP, SEXP valueSEXP, SEXP dist2indSEXP, SEXP jitterSEXP, SEXP pertubeSEXP, SEXP pertube_ampSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type depth(depthSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type fractal(fractalSEXP);
    Rcpp::traits::input_parameter< int >::type octaves(octavesSEXP);
    Rcpp::traits::input_parameter< double >::type lacunarity(lacunaritySEXP);
    Rcpp::traits::input_parameter< double >::type gain(gainSEXP);
    Rcpp::traits::input_parameter< int >::type dist(distSEXP);
    Rcpp::traits::input_parameter< int >::type value(valueSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dist2ind(dist2indSEXP);
    Rcpp::traits::input_parameter< double >::type jitter(jitterSEXP);
    Rcpp::traits::input_parameter< int >::type pertube(pertubeSEXP);
    Rcpp::traits::input_parameter< double >::type pertube_amp(pertube_ampSEXP);
    rcpp_result_gen = Rcpp::wrap(worley_3d_c(height, width, depth, seed, freq, fractal, octaves, lacunarity, gain, dist, value, dist2ind, jitter, pertube, pertube_amp));
    return rcpp_result_gen;
END_RCPP
}
// gen_worley2d_c
NumericVector gen_worley2d_c(NumericVector x, NumericVector y, double freq, int seed, int dist, int value, IntegerVector dist2ind, double jitter);
RcppExport SEXP _ambient_gen_worley2d_c(SEXP xSEXP, SEXP ySEXP, SEXP freqSEXP, SEXP seedSEXP, SEXP distSEXP, SEXP valueSEXP, SEXP dist2indSEXP, SEXP jitterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type dist(distSEXP);
    Rcpp::traits::input_parameter< int >::type value(valueSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dist2ind(dist2indSEXP);
    Rcpp::traits::input_parameter< double >::type jitter(jitterSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_worley2d_c(x, y, freq, seed, dist, value, dist2ind, jitter));
    return rcpp_result_gen;
END_RCPP
}
// gen_worley3d_c
NumericVector gen_worley3d_c(NumericVector x, NumericVector y, NumericVector z, double freq, int seed, int dist, int value, IntegerVector dist2ind, double jitter);
RcppExport SEXP _ambient_gen_worley3d_c(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP freqSEXP, SEXP seedSEXP, SEXP distSEXP, SEXP valueSEXP, SEXP dist2indSEXP, SEXP jitterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type dist(distSEXP);
    Rcpp::traits::input_parameter< int >::type value(valueSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dist2ind(dist2indSEXP);
    Rcpp::traits::input_parameter< double >::type jitter(jitterSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_worley3d_c(x, y, z, freq, seed, dist, value, dist2ind, jitter));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ambient_cubic_2d_c", (DL_FUNC) &_ambient_cubic_2d_c, 10},
    {"_ambient_cubic_3d_c", (DL_FUNC) &_ambient_cubic_3d_c, 11},
    {"_ambient_gen_cubic2d_c", (DL_FUNC) &_ambient_gen_cubic2d_c, 4},
    {"_ambient_gen_cubic3d_c", (DL_FUNC) &_ambient_gen_cubic3d_c, 5},
    {"_ambient_perlin_2d_c", (DL_FUNC) &_ambient_perlin_2d_c, 11},
    {"_ambient_perlin_3d_c", (DL_FUNC) &_ambient_perlin_3d_c, 12},
    {"_ambient_gen_perlin2d_c", (DL_FUNC) &_ambient_gen_perlin2d_c, 5},
    {"_ambient_gen_perlin3d_c", (DL_FUNC) &_ambient_gen_perlin3d_c, 6},
    {"_ambient_simplex_2d_c", (DL_FUNC) &_ambient_simplex_2d_c, 10},
    {"_ambient_simplex_3d_c", (DL_FUNC) &_ambient_simplex_3d_c, 11},
    {"_ambient_simplex_4d_c", (DL_FUNC) &_ambient_simplex_4d_c, 12},
    {"_ambient_gen_simplex2d_c", (DL_FUNC) &_ambient_gen_simplex2d_c, 4},
    {"_ambient_gen_simplex3d_c", (DL_FUNC) &_ambient_gen_simplex3d_c, 5},
    {"_ambient_gen_simplex4d_c", (DL_FUNC) &_ambient_gen_simplex4d_c, 6},
    {"_ambient_value_2d_c", (DL_FUNC) &_ambient_value_2d_c, 11},
    {"_ambient_value_3d_c", (DL_FUNC) &_ambient_value_3d_c, 12},
    {"_ambient_gen_value2d_c", (DL_FUNC) &_ambient_gen_value2d_c, 5},
    {"_ambient_gen_value3d_c", (DL_FUNC) &_ambient_gen_value3d_c, 6},
    {"_ambient_white_2d_c", (DL_FUNC) &_ambient_white_2d_c, 6},
    {"_ambient_white_3d_c", (DL_FUNC) &_ambient_white_3d_c, 7},
    {"_ambient_white_4d_c", (DL_FUNC) &_ambient_white_4d_c, 8},
    {"_ambient_gen_white2d_c", (DL_FUNC) &_ambient_gen_white2d_c, 4},
    {"_ambient_gen_white3d_c", (DL_FUNC) &_ambient_gen_white3d_c, 5},
    {"_ambient_gen_white4d_c", (DL_FUNC) &_ambient_gen_white4d_c, 6},
    {"_ambient_worley_2d_c", (DL_FUNC) &_ambient_worley_2d_c, 14},
    {"_ambient_worley_3d_c", (DL_FUNC) &_ambient_worley_3d_c, 15},
    {"_ambient_gen_worley2d_c", (DL_FUNC) &_ambient_gen_worley2d_c, 8},
    {"_ambient_gen_worley3d_c", (DL_FUNC) &_ambient_gen_worley3d_c, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_ambient(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
