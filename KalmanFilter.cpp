#include "KalmanFilter.hpp"

using namespace KF;

std::tuple<double,double> OneDKF::measurement_update(const double mean1, const double var1, const double mean2, const double var2){
    double new_mean = (var2 * mean1 + var1 * mean2) / (var1 + var2);
    double new_var = 1 / (1 / var1 + 1 / var2);
    return std::make_tuple(new_mean, new_var);
}

std::tuple<double, double> OneDKF::state_prediction(const double mean1, const double var1, const double mean2, const double var2){
    return std::make_tuple(mean1+mean2, var1+var2);
}