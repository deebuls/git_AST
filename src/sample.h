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
    Sample (double iX, double iY, double iTheta, double weight=0.0);

    /* ====================  ACCESSORS     ======================================= */
    void set_x( double value );
    void set_y( double value );
    void set_theta( double value );
    void set_weight ( double value );


    double get_x(  ) const;
    double get_y(  ) const;
    double get_theta(  ) const;
    double get_weight (  ) const;
    /* ====================  MUTATORS      ======================================= */

    /* ====================  OPERATORS     ======================================= */


  private:
    /* ====================  METHODS       ======================================= */

    /* ====================  DATA MEMBERS  ======================================= */
    double x;
    double y;
    double theta;
    double weight;

}; /* -----  end of class Sample  ----- */

