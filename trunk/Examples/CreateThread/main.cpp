#include <iostream>
#include "oopthread"

using namespace oopt;
using namespace std;

// Some very complicated thread
struct ThreadClass : public thread::CustomDataFunction<int> 
{
private:
  int BigResult;

  void Func1( void )
  {
    BigResult = (*m_Data) * 50;
  }

  void Func2( void )
  {
    BigResult += 15;
  }
  
public:
  void* main( void ) {
    Func1();
    Func2();
    cout << "ThreadClass " << *m_Data << " Result : " << BigResult << endl;
    return NULL;
  }
};

// simple thread
void* ThreadFunc( const int& i )
{
  cout << "ThreadFunc " << i << endl;
  return NULL;
}

int main( int argc, char* argv[] )
{
  cout << "Main start" << endl;

  thread::Manager mng;
  mng.Launch<ThreadClass>( 11 );

  thread::Manager mng2;
  mng2.Launch( ThreadFunc, 22 );

  thread::Manager mng3( ThreadFunc, 33 );

  cout << "Main finish" << endl;
  pthread_exit( NULL );
}
