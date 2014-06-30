/*
 * =====================================================================================
 *
 *       Filename:  mcr.h
 *
 *    Description:  Declaration of class sample and sample set 
 *
 *        Version:  1.0
 *        Created:  Saturday 24 May 2014 04:14:33  CEST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Nair Deebul  (deebuls), deebul.nair@smail.inf.h-brs.de
 *   Organization:  
 *
 * =====================================================================================
 */
#include "point2d.h"

/*
 * =====================================================================================
 *        Class:  Sample
 *  Description:  A sample set *  S *  is a set of pairs of poses and associated weights
 * =====================================================================================
 */
class Sample
{
  public:
    /* ====================  LIFECYCLE     ======================================= */
    Sample ();                             /* constructor */
    Sample (cPoint*, double );

    /* ====================  ACCESSORS     ======================================= */
    void set_weight ( double value );
    double get_weight (  ) const;


  private:
    /* ====================  DATA MEMBERS  ======================================= */
    cPoint* point;
    double weight;

}; /* -----  end of class Sample  ----- */

