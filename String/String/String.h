//Preprocessador
#ifndef __String_H__
#define __String_H__

#include <iostream>
typedef unsigned int uint;

class String
{

	private:
		uint Capacity;
		char* Str;

	public:

//Constructors	
	String():Str(NULL), Capacity(0){}
	
	String(unsigned int NewCapacity);

	String(const char* String); //Const perquè no la canvies

	String(const String &String);

	//Capacity: 
	uint Capacity()const;

	//C_Str Tornarà la cadena com a cadena de C (un get)
	const char* C_Str() const; //Const perquè el mètode no canvia les propietats 


//Destructor
	~String()
	{
		if (Str != NULL)
		{
			delete[] Str;
		}
	}; 

//Operators
	bool operator==(String& String)const;
	bool operator!=(String& String)const;

};
#endif





