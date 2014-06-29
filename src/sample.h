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

    /* ====================  ACCESSORS     ======================================= */
    double x();
    double y();
    double theta();


    /* ====================  MUTATORS      ======================================= */
    bool updateX(double newX);
    bool updateY(double newY);
    bool updateTheta(double newTheta);


    /* ====================  OPERATORS     ======================================= */


  private:
    /* ====================  METHODS       ======================================= */

    /* ====================  DATA MEMBERS  ======================================= */
    double x;
    double y;
    double theta;

}; /* -----  end of class Sample  ----- */

