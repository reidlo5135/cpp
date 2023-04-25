#ifndef OBJECT_POINTER
#define OBJECT_POINTER

#include <iostream>
#include <cstring>

class Employee {
    private :
        char name[100];
    public :
        Employee(char * name);
        void show_your_name() const;
};

class EmployeeHandler {
    private :
        Employee * emp_list[50];
        int emp_num;
    public :
        EmployeeHandler();
        void add_employee(Employee * emp);
        void show_all_salary_info() const;
        void show_total_salary() const;
        ~EmployeeHandler() {
            for(int i=0;i<emp_num;i++) {
                delete emp_list[i];
            }
        }
};

class PermanentWorker : public Employee {
    private :
        int salary;
    public :
        PermanentWorker(char * name, int money) : Employee(name), salary(money) {};
        int get_pay() const;
        void show_salary_info() const;
};

class TemporaryWorker : public Employee {
    private :
        int work_time;
        int pay_per_hour;
    public :
        TemporaryWorker(char * name, int pay) : Employee(name), work_time(0), pay_per_hour(pay) {};
        void add_work_time(int time);
        int get_pay() const;
        void show_salary_info() const;
};

class SalesWorker : public PermanentWorker {
    private :
        int sales_result;
        double bonus_ratio;
    public :
        SalesWorker(char * name, int money, double ratio) : PermanentWorker(name, money), sales_result(0), bonus_ratio(ratio) {};
        void add_sales_result(int value);
        int get_pay() const;
        void show_salary_info() const;
};

#endif