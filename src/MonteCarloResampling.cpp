/*
 * =====================================================================================
 *
 *       Filename:  MonteCarloResampling.cpp
 *
 *    Description:  The main class for the Monte Carlo Resampling
 *
 *        Version:  1.0
 *        Created:  Tuesday 01 July 2014 06:54:37  CEST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Nair Deebul  (deebuls), deebul.nair@smail.inf.h-brs.de
 *   Organization:  
 *
 * =====================================================================================
 */

#include "mcl.h"
#include	<stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
  int
main ( int argc, char *argv[] )
{
   /* Instantiating the objects */
  cMCL* lMonteCarlo100 = new cMCL(100);
  cMCL* lMonteCarlo1000 = new cMCL(1000);
  cMCL* lMonteCarlo10000 = new cMCL(10000);
  cMCL* lMonteCarlo100000 = new cMCL(100000);

 /* Calling the generators */
  cPoint::tPointType lType ;
  lMonteCarlo100->mGenerateUniformDistributedSampleSet(lType);
  lMonteCarlo1000->mGenerateUniformDistributedSampleSet(lType);
  lMonteCarlo10000->mGenerateUniformDistributedSampleSet(lType);
  lMonteCarlo100000->mGenerateUniformDistributedSampleSet(lType);
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
