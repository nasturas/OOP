#include "pch.h"
// puteti inlocuii in unele cazuri cu:
//#include "stdafx.h"
using namespace System;

int main(array<System::String ^> ^args)
{
    unsigned counter = 0;
    int div = 0;
	try
	{
		for (counter = 0; counter < 5; counter++)
		{
			Console::WriteLine("Test Test Test {0}, {1}", "Hello World", counter);
		}
	}
	catch (Exception^ ex)
	{
		Console::WriteLine("O exceptie: " + ex->Message);
	}
    return 0;
}
