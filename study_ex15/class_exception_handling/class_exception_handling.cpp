#include "include/class_exception_handling.hpp"

Account::Account(char * acc, int money) : balance(money) {
	strcpy(acc_num, acc);
}

Account::~Account() {

}

DepositException::DepositException(int money) : req_dep(money) {

}

DepositException::~DepositException() {

}

void DepositException::show_exception_reason() {
	std::cout << "[exception message : " << req_dep << " can't be input]" << "\n";
}

void Account::deposit(int money) throw (DepositException) {
	if(money < 0) {
		DepositException expn(money);
		throw expn;
	}
	balance += money;
}

WithDrawException::WithDrawException(int money) : balance(money) {

}

WithDrawException::~WithDrawException() {

}

void WithDrawException::show_exception_reason() {
	std::cout << "[exception message : " << balance << " not enough remained money]" << "\n";
}

void Account::with_draw(int money) throw (WithDrawException) {
	if(money > balance) throw WithDrawException(balance);
	balance -= money;
}

void Account::show_money() {
	std::cout << "remained money : " << balance << "\n" << "\n";
}

void run() {
	Account my_acc("56789-827120", 5000);

	try {
		my_acc.deposit(2000);
		my_acc.deposit(-300);
	} catch (DepositException &expn) {
		expn.show_exception_reason();
	} 
	my_acc.show_money();

	try {
		my_acc.with_draw(3500);
		my_acc.with_draw(4500);
	} catch (WithDrawException &expn) {
		expn.show_exception_reason();
	}
	my_acc.show_money();
}

int main(void) {
	run();
	return 0;
}
