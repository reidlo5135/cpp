#ifndef CLASS_EXCEPTION_HANDLING
#define CLASS_EXCEPTION_HANDLING

#include <iostream>
#include <cstring>

class Account {
	private :
		char acc_num[50];
		int balance;
	public :
		Account(char * acc, int money);
		virtual ~Account();
		void deposit(int money);
		void with_draw(int money);
		void show_money();
};

class DepositException {
	private :
		int req_dep;
	public :
		DepositException(int money);
		virtual ~DepositException();
		void show_exception_reason();
};

class WithDrawException {
	private :
		int balance;
	public :
		WithDrawException(int money);
		virtual ~WithDrawException();
		void show_exception_reason();
};

void run();

#endif