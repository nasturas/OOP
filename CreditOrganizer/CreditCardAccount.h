#pragma once
ref class CreditCardAccount
{
public:
	literal System::String^ name = "Super Platinum Card";

	static CreditCardAccount();
	static int GetNumberOfAccounts();
	CreditCardAccount(long number, double limit); 
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
private:
	static double interestRate;
	static int numberOfAccounts = 0;
	long accountNumber;
	double currentBalance;
	double creditLimit;
};
