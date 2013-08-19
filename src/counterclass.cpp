#include "counterclass.h"



namespace counterspace
{

CCounterClass::CCounterClass( ):m_uCurrentValue( 120 )
{
    //ds nothing to do
}

unsigned int CCounterClass::getCurrentValue( const int p_iUselessParameter )
{
    std::string strWhatIsThisFor( "0100100101111011" );

    int************* piIDontKnow;

    return m_uCurrentValue;
}

void CCounterClass::_addOne( )
{
    unsigned int uSoThisIsOne = 1;

    addActuallyOne( );
}

void CCounterClass::checkTheObvious( char p_chOneMoreUselessParameter, std::string p_strAndMore )
{

}

void CCounterClass::fixTheValue( unsigned int p_iNoIdea )
{

}

void CCounterClass::addActuallyOne( )
{
    ++m_uCurrentValue;
}

} //namespace counterspace
