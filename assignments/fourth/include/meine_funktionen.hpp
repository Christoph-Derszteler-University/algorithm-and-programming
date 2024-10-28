#ifndef __MEINE_FUNKTIONEN_HPP__
#define __MEINE_FUNKTIONEN_HPP__

/**
 * Calculates the sin value of the specified parameter approximately via a
 * fixed tolerance.
 * Regarding the tolerance, see sinus(double, double).
 *
 * @param x The parameter of which the sin value should be calculated
 * @return The approximated calculation of sin(x)
 */
double sinus(double x);

/**
 * Calculates the sin value of the specified parameter approximately via the
 * specified tolerance value.
 * This tolerance value can be used to determine if another term of a taylor
 * series should be added, for example.
 *
 * @param x The parameter of which the sin value should be calculated
 * @param tolerance The tolerance value used to determine the closeness to the real sin function
 * @return The approximated calculation of sin(x)
 */
double sinus(double x, double tolerance);

/**
 * Calculates the cos value of the specified parameter approximately via a
 * fixed tolerance.
 * Regarding the tolerance, see kosinus(double, double).
 *
 * @param x The parameter of which the cos value should be calculated
 * @return The approximated calculation of cos(x)
 */
double kosinus(double x);

/**
 * Calculates the cos value of the specified parameter approximately via the
 * specified tolerance value.
 * This tolerance value can be used to determine if another term of a taylor
 * series should be added, for example.
 *
 * @param x The parameter of which the cos value should be calculated
 * @param tolerance The tolerance value used to determine the closeness to the real cos function
 * @return The approximated calculation of cos(x)
 */
double kosinus(double x, double tolerance);

/**
 * Calculates the tan value of the specified parameter approximately via a
 * fixed tolerance.
 * Regarding the tolerance, see tangens(double, double).
 *
 * @param x The parameter of which the tan value should be calculated
 * @return The approximated calculation of tan(x)
 */
double tangens(double x);

/**
 * Calculates the tan value of the specified parameter approximately via the
 * specified tolerance value.
 * This tolerance value can be used to determine if another term of a taylor
 * series should be added, if calculated via sin(x)/cos(x), for example.
 *
 * @param x The parameter of which the tan value should be calculated
 * @param tolerance The tolerance value used to determine the closeness to the real tan function
 * @return The approximated calculation of tan(x)
 */
double tangens(double x, double tolerance);

/**
 * Calculates the cot value of the specified parameter approximately via a
 * fixed tolerance.
 * Regarding the tolerance, see kotangens(double, double).
 *
 * @param x The parameter of which the cot value should be calculated
 * @return The approximated calculation of cot(x)
 */
double kotangens(double x);

/**
 * Calculates the cot value of the specified parameter approximately via the
 * specified tolerance value.
 * This tolerance value can be used to determine if another term of a taylor
 * series should be added, if calculated via cos(x)/sin(x), for example.
 *
 * @param x The parameter of which the cot value should be calculated
 * @param tolerance The tolerance value used to determine the closeness to the real cot function
 * @return The approximated calculation of cot(x)
 */
double kotangens(double x, double tolerance);


#endif