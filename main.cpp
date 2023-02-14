/*
 * Name: Nathan D'Agostino
 * COPP 3003 | Programming 2
 * Summary:  This is a program built to create and display orders from different customers.
 *         This program will have a prebuilt inventory to take from and if there is not enough
 *         within the inventory the user will receive an error saying that there is not enough.
 *         The order will display an Order Number, Customer Name, Order Creator Name, and what
 *         the order entails.  The program can also close orders making the product within the
 *         order return to the database.
*/
#include <iostream>

int main() {
    int EmployeeSelect;
    std::string Employee[] = {"Employee: Nathan D'Agostino", "Employee: Justin Wright",
                              "Employee: Cadence Bakker", "Manager: Josiah Greenwell"};
    std::cout << "Please Enter Who Is Using The Interface: \n"
                 "[0] Employee: Nathan D'Agostino \n"
                 "[1] Employee: Justin Wright \n"
                 "[2] Employee: Cadence Bakker \n"
                 "[3] Manager: Josiah Greenwell \n"
                 "[99] -New Entry- \n";
    std::cin >> EmployeeSelect;
    std::cout << "Welcome! " << Employee[EmployeeSelect] << std::endl;
    //This is to see which 'employee' is creating, searching, editing, or closing orders.

    int OrderSelect;
    std::cout << "Which Order You Wish To Search For: \n"
                 "[0]: Order [09123] \n"
                 "[1]: Order [42069] \n"
                 "[2]: Order [12209] \n"
                 "[99] -New Entry- \n";
    std::cin >> OrderSelect;
    std:: cout << "Retrieving..."
                  " Order ErroR! Sorry for the inconvinience!";
    /* This is to select which order is needed to be pulled, or if a new order must be created!
     * There will be a database created soon to pull OrderSelect.
     */
    return 0;
}
