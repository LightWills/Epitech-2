//
// IBrun.hh for IBrun in /home/antgar/rendu/cpp_plazza/app
//
// Made by Antoine Garcia
// Login   <antgar@epitech.net>
//
// Started on  Sat Apr 18 10:33:12 2015 Antoine Garcia
// Last update Sat Apr 18 12:38:13 2015 Antoine Garcia
//

#ifndef IBrun_HH_
# define IBrun_HH_

class	IBrun
{
public:
  virtual ~IBrun(){};
  virtual void *backRun(void *Class) = 0;
};

#endif
