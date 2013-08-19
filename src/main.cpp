#include "counterclass.h"



void thisIsAFunction( const unsigned int p_i1, char p_chACharacter );
int _getSomething( std::string p_strText );

int main( int argc, char** argv )
{
	//ds -----------------------------------------------------------------------------
	//ds basic types testing
	std::cout << "Hello Milk" << std::endl;

	int i1 = 0;
	int i2( 2 );
	int* i3;
	int****** i4;
	int arki5[ 10 ];

	char ch1;
	char* ch2;

	unsigned int u1 = 0;
	unsigned int****** u2;

	std::string strWhat = "asdasd";
	std::string* strDada;
	std::string arrstrTest[20];
	//ds -----------------------------------------------------------------------------

	//ds -----------------------------------------------------------------------------
	//ds function calling
	thisIsAFunction( 1, 'a' );
	int i6 = getSomething( "nono" );

    int* i7 = new int[20];

    i7[20] = 0;

	return 0;
}

void thisIsAFunction( const unsigned int p_i1, char p_chACharacter )
{
	std::cout << p_i1 << std::endl;
}

int _getSomething( std::string p_strText )
{
	thisIsAFunction( 123, 'a' );

	return p_strText.length( );
}

