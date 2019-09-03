#ifndef MOTOR_
#define MOTOR_

#include <string>
using namespace std;

class MOTOR
{
  public:
   MOTOR();
   MOTOR(int);
   ~MOTOR();
   int getSerie() const;
   
  private:
   int serie;
};
#endif