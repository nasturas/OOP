#pragma once

using namespace System;
ref class BankAccount abstract
{
public:
	BankAccount(String^ holder);
	void Credit(double amount);
	bool Debit(double amount);
	double GetBalance();
	//Derived classes can override this function
	virtual String^ ToString() override;
	//Derived classes must override this function
	// YOu can use '=0' instead of 'abstract'
	virtual bool CanDebit(double amount) abstract;
protected:
	String^ RoutingInstructions(double amount);
private:
	String^ accountHolder;
	double balance;
};
