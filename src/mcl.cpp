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
  sampleSet.resize(iNumberOfSamples);
}		/* -----  end of method cMCL::cMCL  ----- */

bool
cMCL::mGenerateUniformDistributedRandomSampleSet ( )
{
  for (int i=0; i<mNumberOfSamples; i++)
  {

  }

  return true;
}		/* -----  end of method cMCL::mGenerateUniformRandomSampleSet  ----- */

bool
cMCL::mGenerateGaussioniDistributedSampleSet ( )
{
  return true;
}		/* -----  end of method cMCL::mGenerateGaussionSampleSet  ----- */

