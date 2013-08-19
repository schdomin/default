#ifndef COUNTERCLASS_H_
#define COUNTERCLASS_H_

#include <iostream>



namespace counterspace
{

class CCounterClass
{

public:

    CCounterClass( );
    ~CCounterClass( ){ };

public:

    unsigned int getCurrentValue( const int p_iUselessParameter );
    void _addOne( );
    void checkTheObvious( char p_chOneMoreUselessParameter, std::string p_strAndMore );
    void fixTheValue( unsigned int p_iNoIdea );

private:

    std::string m_strMyName;
    unsigned int m_uCurrentValue;
    unsigned int m_uPreviousValue;

private:

    void addActuallyOne( );

};

} //namespace counterspace

#endif /* COUNTERCLASS_H_ */
