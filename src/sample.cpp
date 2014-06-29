/*
 * =====================================================================================
 *
 *       Filename:  Sample.cpp
 *
 *    Description:  Class Definition of sample classes
 *
 *        Version:  1.0
 *        Created:  Saturday 24 May 2014 04:31:53  CEST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Nair Deebul  (deebuls), deebul.nair@smail.inf.h-brs.de
 *   Organization:  
 *
 * =====================================================================================
 */

#include "sample.h"
/*
 *--------------------------------------------------------------------------------------
 *       Class:  Sample
 *      Method:  Sample
 * Description:  constructor
 *--------------------------------------------------------------------------------------
 */
Sample::Sample ()
{
    x = 0.0;
    y = 0.0;
    theta = 0.0;
}  /* -----  end of method Sample::Sample  (constructor)  ----- */

/*
 *--------------------------------------------------------------------------------------
 *       Class:  Sample
 *      Method:  Sample :: Sample
 * Description:  Parametrized constructor
 *--------------------------------------------------------------------------------------
 */
Sample::Sample ( double iX , double iY, double iTheta, double iWeight )
{
  x = iX;
  y = iY;
  theta = iTheta;
  weight = iWeight;
}		/* -----  end of method Sample::Sample  ----- */

/*
 *--------------------------------------------------------------------------------------
 *       Class:  Sample
 *      Method:  get_x
 *--------------------------------------------------------------------------------------
 */
inline double
Sample::get_x (  ) const
{
  return x;
}		/* -----  end of method Sample::get_x  ----- */

/*
 *--------------------------------------------------------------------------------------
 *       Class:  Sample
 *      Method:  set_x
 *--------------------------------------------------------------------------------------
 */
  inline void
Sample::set_x ( double value )
{
  x	= value;
  return ;
}		/* -----  end of method Sample::set_x  ----- */

/*
 *--------------------------------------------------------------------------------------
 *       Class:  Sample
 *      Method:  get_y
 *--------------------------------------------------------------------------------------
 */
inline double
Sample::get_y (  ) const
{
  return y;
}		/* -----  end of method Sample::get_y  ----- */

/*
 *--------------------------------------------------------------------------------------
 *       Class:  Sample
 *      Method:  set_y
 *--------------------------------------------------------------------------------------
 */
  inline void
Sample::set_y ( double value )
{
  y	= value;
  return ;
}		/* -----  end of method Sample::set_y  ----- */

/*
 *--------------------------------------------------------------------------------------
 *       Class:  Sample
 *      Method:  get_theta
 *--------------------------------------------------------------------------------------
 */
inline double
Sample::get_theta (  ) const
{
  return theta;
}		/* -----  end of method Sample::get_theta  ----- */

/*
 *--------------------------------------------------------------------------------------
 *       Class:  Sample
 *      Method:  set_theta
 *--------------------------------------------------------------------------------------
 */
inline void
Sample::set_theta ( double value )
{
  theta	= value;
  return ;
}		/* -----  end of method Sample::set_theta  ----- */

/*
 *--------------------------------------------------------------------------------------
 *       Class:  Sample
 *      Method:  get_weight
 *--------------------------------------------------------------------------------------
 */
inline double
Sample::get_weight (  ) const
{
  return weight;
}		/* -----  end of method Sample::get_weight  ----- */

/*
 *--------------------------------------------------------------------------------------
 *       Class:  Sample
 *      Method:  set_weight
 *--------------------------------------------------------------------------------------
 */
inline void
Sample::set_weight ( double value )
{
  weight	= value;
  return ;
}		/* -----  end of method Sample::set_weight  ----- */

