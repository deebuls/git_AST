/*
 * =====================================================================================
 *
 *       Filename:  point2d.h
 *
 *    Description:  Stores a 2D point
 *
 *        Version:  1.0
 *        Created:  Monday 30 June 2014 08:11:21  CEST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Nair Deebul  (deebuls), deebul.nair@smail.inf.h-brs.de
 *   Organization:  
 *
 * =====================================================================================
 */
#include "point.h"
/*
 * =====================================================================================
 *        Class:  cPoint2D
 *  Description:  Stores the 2D point Description (x,y) and theta
 * =====================================================================================
 */
class cPoint2D: public cPoint
{
  public:
    /* ====================  LIFECYCLE     ======================================= */
    cPoint2D (){x=0.0; y=0.0; theta =0.0;}                        /* constructor */
    cPoint2D (double iX, double iY, double iTheta)
    {
      x = iX;
      y = iY;
      theta = iTheta;
    }

    /* ====================  ACCESSORS     ======================================= */

    /*
     *--------------------------------------------------------------------------------------
     *       Class:  cPoint2D
     *      Method:  get_x
     *--------------------------------------------------------------------------------------
     */
    inline double
      get_x (  ) const
      {
        return x;
      }		/* -----  end of method cPoint2D::get_x  ----- */

    /*
     *--------------------------------------------------------------------------------------
     *       Class:  cPoint2D
     *      Method:  set_x
     *--------------------------------------------------------------------------------------
     */
    inline void
      set_x ( double value )
      {
        x	= value;
        return ;
      }		/* -----  end of method set_x  ----- */
    
    /*
     *--------------------------------------------------------------------------------------
     *       Class:  cPoint2D
     *      Method:  get_y
     *--------------------------------------------------------------------------------------
     */
    inline double
      get_y (  ) const
      {
        return y;
      }		/* -----  end of method cPoint2D::get_y  ----- */

    /*
     *--------------------------------------------------------------------------------------
     *       Class:  cPoint2D
     *      Method:  set_y
     *--------------------------------------------------------------------------------------
     */
    inline void
      set_y ( double value )
      {
        y	= value;
        return ;
      }		/* -----  end of method cPoint2D::set_y  ----- */
    
    /*
     *--------------------------------------------------------------------------------------
     *       Class:  cPoint2D
     *      Method:  get_theta
     *--------------------------------------------------------------------------------------
     */
    inline double
      get_theta (  ) const
      {
        return theta;
      }		/* -----  end of method cPoint2D::get_theta  ----- */

    /*
     *--------------------------------------------------------------------------------------
     *       Class:  cPoint2D
     *      Method:  set_theta
     *--------------------------------------------------------------------------------------
     */
    inline void
      set_theta ( double value )
      {
        theta	= value;
        return ;
      }		/* -----  end of method cPoint2D::set_theta  ----- */
    

  private:
   double x;
   double y;
   double theta;
}; /* -----  end of class cPoint2D  ----- */

