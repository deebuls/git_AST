/*
 * =====================================================================================
 *
 *       Filename:  mcl.h
 *
 *    Description:  Monte Carlo Localization is a popular method for mobile
 *    robot localization. The following class implement various methods for
 *    monte carlo localization
 *
 *        Version:  1.0
 *        Created:  Sunday 29 June 2014 03:00:55  CEST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Nair Deebul  (deebuls), deebul.nair@smail.inf.h-brs.de
 *   Organization:  
 *
 * =====================================================================================
 */
#include <vector>
#include "sample.h"
/*
 * =====================================================================================
 *        Class:  cMCL
 *  Description:  Monte Carlo Localization 
 * =====================================================================================
 */
class cMCL
{
  public:
    /* ====================  LIFECYCLE     ======================================= */
    cMCL ();                             /* constructor */
    cMCL (int);

    /* ====================  OPERATORS     ======================================= */
    bool mGenerateUniformDistributedSampleSet();
    bool mGenerateGaussianDistributedSampleSet();


  private:
    /* ====================  DATA MEMBERS  ======================================= */
    int mNumberOfSamples;
    std::vector<Sample> mSampleSet;              /* current set of Sample Set */



}; /* -----  end of class cMCL  ----- */

