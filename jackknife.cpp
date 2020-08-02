//jiackknife.cpp --for jackknife analysis method using class.

#include <iostream>
#include <cmath>
#include "jackknife.h"

namespace scj{
jackknife::jackknife(double* data, int ndata, int nitem){
    m_data = data;
    m_ndata = ndata;
    m_nitem = nitem;
}

jackknife::~jackknife(){}

double jackknife::average(int i_item){
    double sum = 0;
    for (int i = 0; i < m_ndata; i++) sum+=m_data[i*m_nitem+i_item];
    return sum/m_ndata;
}

double jackknife::error(int i_item){
    double sum = 0; double ave = average(i_item);
    double jack_tmp[m_ndata] = {0};
    for (int i = 0; i < m_ndata; i++) {
        double sum_j = 0;
        for (int j = 0; j < m_ndata; j++) if(j!=i) sum_j += m_data[i*m_nitem+i_item];
        jack_tmp[i] = sum_j / (m_ndata - 1);
    }
    for (int i = 0; i < m_ndata; i++) sum += pow((jack_tmp[i]-ave),2);
    return sqrt(sum * (m_ndata -1)/m_ndata);
}
}//end namespace
