#include "MyCalculatorViewModelTest.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
MyCalculatorViewModelTest::MyCalculatorViewModelTest()
{
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void MyCalculatorViewModelTest::injectOperation( MyCalculator_Operation operation )
{
    m_currentOperation = operation;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int MyCalculatorViewModelTest::addTest( int A, int B)
{
    return add( A, B );
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int MyCalculatorViewModelTest::subtractTest( int A, int B)
{
    return subtract( A, B );
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void MyCalculatorViewModelTest::injectUserInput( int userInput )
{
    m_userInput = userInput;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void MyCalculatorViewModelTest::injectMyResult( int myResult )
{
    m_myResult = myResult;
}