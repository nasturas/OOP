#include "pch.h"
#include "CurrentAccount.h"

CurrentAccount::CurrentAccount(String^ holder, double limit)
	: BankAccount(holder), overdtaftLimit(limit)
{

}

void CurrentAccount::ChangeOverdraftLimit(double newLimit)
{
	overdtaftLimit = newLimit;
}

double CurrentAccount::GetOverdraftLimit()
{
	return overdtaftLimit;
}

String^ CurrentAccount::ToString()
{
	String^ result = BankAccount::ToString();
	result = String::Concat(result, ", Overdtaft Limit : ");
	result = String::Concat(result, overdtaftLimit.ToString());
	return result;
}

bool CurrentAccount::CanDebit(double amount)
{
	String^ details = RoutingInstructions(amount);
	return (amount <= GetBalance() + overdtaftLimit);
}
