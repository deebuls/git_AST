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
#include <mcl.h>


/*
 *--------------------------------------------------------------------------------------
 *       Class:  cMCL
 *      Method:  cMCL
 * Description:  constructor
 *--------------------------------------------------------------------------------------
 */
cMCL::cMCL ()
{
  sampleSet.resize(100);
}  /* -----  end of method cMCL::cMCL  (constructor)  ----- */

cMCL::cMCL ( int iNumberOfSamples)
{
  sampleSet.resize(iNumberOfSamples);
}		/* -----  end of method cMCL::cMCL  ----- */

bool
cMCL::mGenerateUniformRandomSampleSet ( )
{

  return true;
}		/* -----  end of method cMCL::mGenerateUniformRandomSampleSet  ----- */

bool
cMCL::mGenerateGaussionSampleSet ( <+argument_list+> )
{
  return true;
}		/* -----  end of method cMCL::mGenerateGaussionSampleSet  ----- */

