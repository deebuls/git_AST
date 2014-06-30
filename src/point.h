/*
 * =====================================================================================
 *
 *       Filename:  point.h
 *
 *    Description:  Base class for point 
 *
 *        Version:  1.0
 *        Created:  Monday 30 June 2014 08:40:31  CEST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Nair Deebul  (deebuls), deebul.nair@smail.inf.h-brs.de
 *   Organization:  
 *
 * =====================================================================================
 */

/*
 * =====================================================================================
 *        Class:  cPoint
 *  Description:  Base class for Points 2D and 3D
 * =====================================================================================
 */
class cPoint
{
  public:
    /* ====================  LIFECYCLE     ======================================= */
    cPoint (){}                             /* constructor */
    enum tPointType
    {
      t2D,
      t3D
    };

}; /* -----  end of class cPoint  ----- */

