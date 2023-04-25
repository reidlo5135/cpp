#include "include/object_pointer.hpp"

EmployeeHandler::EmployeeHandler() : emp_num(0) {
    
}

void EmployeeHandler::add_employee(Employee * emp) {
    emp_list[emp_num++] = emp;
}

void EmployeeHandler::show_all_salary_info() const {

}

void EmployeeHandler::show_total_salary() const {
    int sum = 0;
    std::cout << "salary sum : " << sum << "\n";
}

// EmployeeHandler::~EmployeeHandler() {
//     for(int i=0;i<emp_num;i++) {
//         delete emp_list[i];
//     }
// }

Employee::Employee(char * name) {
    strcpy(this->name, name);
}

void Employee::show_your_name() const {
    std::cout << "employee name : " << name << "\n";
}

int PermanentWorker::get_pay() const {
    return salary;
}

void PermanentWorker::show_salary_info() const {
    show_your_name();
    std::cout << "permanent salary : " << get_pay() << "\n\n";
}

void TemporaryWorker::add_work_time(int time) {
    work_time += time;
}

int TemporaryWorker::get_pay() const {
    return work_time * pay_per_hour;
}

void TemporaryWorker::show_salary_info() const {
    show_your_name();
    std::cout << "temporary salary : " << get_pay() << "\n\n";
};

void SalesWorker::add_sales_result(int value) {
    sales_result += value;
}

int SalesWorker::get_pay() const {
    return PermanentWorker::get_pay() + (int)(sales_result * bonus_ratio);
}

void SalesWorker::show_salary_info() const {
    show_your_name();
    std::cout << "sales salary : " << get_pay() << "\n\n";
}

int main(void) {
    PermanentWorker per("reidlo_permanent", 5000);
    per.show_salary_info();

    TemporaryWorker temp("reidlo_temp", 7000);
    temp.show_salary_info();

    SalesWorker sales("reidlo_sales", 10000, 7.5);
    sales.add_sales_result(5000);
    sales.show_salary_info();

    return 0;
}