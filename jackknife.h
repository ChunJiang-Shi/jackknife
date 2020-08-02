//jackknife.h
#ifndef __JACKKNIFE_H__
#define __JACKKNIFE_H__

#include <string>

namespace scj{
class jackknife
{
private:
    int m_ndata;
    int m_nitem;
    double* m_data; 
    // double m_average;
    // double m_error;

public:
    jackknife();
    jackknife(double* data,int ndata, int nitem);
    ~jackknife();
    double average(int i_item);
    double error(int i_item);
    void show();
};

}//end of namespace scj


#endif
