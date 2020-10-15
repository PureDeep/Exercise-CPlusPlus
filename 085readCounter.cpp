/*
 * @Author: PureDeep
 * @Date: 2020-10-15 11:55:22
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-15 12:05:38
 * @FilePath: \Exercise-CPlusPlus\085readCounter.cpp
 */
#include <iostream>

using namespace std;

static unsigned cyc_hi = 0;
static unsigned cyc_lo = 0;

/* Set *hi and *lo to the high and low order bits
   of the cycle counter.
*/
void access_counter(unsigned *hi, unsigned *lo)
{
    asm("rdtsc; movl %%edx,%0; movl %%eax,%1"
        : "=r"(*hi), "=r"(*lo)
        :
        : "%edx", "%eax");
}

/* Record the current value of the cycle counter. */
void start_counter()
{
    access_counter(&cyc_hi, &cyc_lo);
}

/* Number of cycles since the last call to start_counter. */
double get_counter()
{
    unsigned ncyc_hi, ncyc_lo;
    unsigned hi, lo, borrow;
    /* Get cycle counter */
    access_counter(&ncyc_hi, &ncyc_lo);
    /* Do double precision subtraction */
    lo = ncyc_lo - cyc_lo;
    borrow = lo > ncyc_lo;
    hi = ncyc_hi - cyc_hi - borrow;
    return (double)hi * (1 << 30) * 4 + lo;
}

int main()
{
    double x = 0;
    start_counter();
    x = get_counter();
    cout << x << endl;
    return 0;
}