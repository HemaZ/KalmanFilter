#ifndef KALMAN_FILTER_HPP
#define KALMAN_FILTER_HPP
#include <tuple>

namespace KF{

    class OneDKF{


        public:
            OneDKF();
            static std::tuple<double,double> measurement_update(const double mean1, const double var1, const double mean2, const double var2); 
            static std::tuple<double, double> state_prediction(const double mean1, const double var1, const double mean2, const double var2);

    };




}










#endif