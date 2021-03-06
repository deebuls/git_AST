/*
 * =====================================================================================
 *
 *       Filename:  mcl.cpp
 *
 *    Description:  Implementaion of the cMCL class.
 *
 *        Version:  1.0
 *        Created:  Sunday 29 June 2014 03:25:41  CEST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Nair Deebul  (deebuls), deebul.nair@smail.inf.h-brs.de
 *   Organization:  
 *
 * =====================================================================================
 */
#include "mcl.h"


/*
 *--------------------------------------------------------------------------------------
 *       Class:  cMCL
 *      Method:  cMCL
 * Description:  constructor
 *--------------------------------------------------------------------------------------
 */
cMCL::cMCL ()
{
  mNumberOfSamples = 100;
  mSampleSet.resize(100);
}  /* -----  end of method cMCL::cMCL  (constructor)  ----- */

cMCL::cMCL ( int iNumberOfSamples)
{
  mNumberOfSamples = iNumberOfSamples;
  mSampleSet.resize(iNumberOfSamples);
}		/* -----  end of method cMCL::cMCL  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  mGenerateUniformDistributedRandomSampleSet
 *  Description:  Generate the Sample set for the MCL based on Normal
 *  distribution. Takes and argument of tPointType determining the type of the
 *  point to be considered.
 * =====================================================================================
 */
bool
cMCL::mGenerateUniformDistributedSampleSet( cPoint::tPointType iType)
{
  for (int i=0; i<mNumberOfSamples; i++)
  {

  }

  return true;
}		/* -----  end of method cMCL::mGenerateUniformRandomSampleSet  ----- */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  mGenerateGaussioniDistributedSampleSet 
 *  Description:  Generate the Sample set for the MCL based on Normal
 *  distribution. Takes and argument of tPointType determining the type of the
 *  point to be considered.
 * =====================================================================================
 */

bool
cMCL::mGenerateGaussianDistributedSampleSet(  cPoint::tPointType iType)
{
  return true;
}		/* -----  end of method cMCL::mGenerateGaussionSampleSet  ----- */

/*
 *--------------------------------------------------------------------------------------
 *       Class:  cMCL
 *      Method:  cMCL :: mGenerateGaussianDistributionRealPose
 * Description:  Generate an additional
 * sample using the second method from above and use this as the ”real” pose.
 * Using a Gaussian distribution around this pose, compute the weight of the
 * samples as the value of the Gaussian at that pose.
 *--------------------------------------------------------------------------------------
 */
bool
cMCL::mComputeGaussianDistributionRealPose( cPoint::tPointType iType)
{
  return true;
}		/* -----  end of method cMCL::mGenerateGaussianDistributionRealPose  ----- */

/*
 *--------------------------------------------------------------------------------------
 *       Class:  cMCL
 *      Method:  cMCL :: mVisualize
 * Description:  building a nice GUI to visualize the results
 *--------------------------------------------------------------------------------------
 */
bool
cMCL::mVisualize ( cPoint::tPointType iType)
{
  return true;
}		/* -----  end of method cMCL::mVisualize  ----- */

