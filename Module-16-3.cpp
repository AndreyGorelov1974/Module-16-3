/*Задание 3. Калькулятор
Что нужно сделать
Создайте небольшую программу для вычисления простых действий с числами.
При запуске программа ожидает пользовательского ввода во временную переменную строку.
После ввода строки она распарсивается на отдельные члены. Строка записывается в форме “<число-1><действие><число-2>” (без пробелов).
Оба числа — это значения с плавающей точкой, повышенной точности (double). Действие может быть одним из: +, −, /, *.
Результат действия выводится в стандартный вывод cout.

Рекомендации
Чтобы разделить полученную строку на отдельные элементы — числа и оператор, воспользуйтесь строковым потоком.
Для этого создайте пустую строку std::string buffer и дайте пользователю возможность при помощи std::cin ввести в неё команду.
Затем оберните полученную строку так: std::stringstream buffer_stream(buffer);
Это позволит вам  получить каждый из трёх компонентов команды: buffer_stream >> a >> operation >> b;*/

#include <iostream>
#include <string>
#include <sstream>


int main()
{
	//переменная для математического выражения
	std::string mathExpression = "";
	//переменная для математической операции
	std::string mathOperation = "";
	//переменные для чисел
	double number1;
	double number2;

	//ввод математического выражения для вычисления
	std::cout << "The calculator program." << std::endl << "Enter, separated by a space, two real numbers and the operation sign between them: +, -, *, /: ";
	std::getline(std::cin, mathExpression);

	//оборачиваем строку в поток
	std::stringstream buffer_stream(mathExpression);
	//смчитываем из потока переменные
	buffer_stream >> number1 >> mathOperation >> number2;

	//в зависимости от операции выводим результат
	if (mathOperation == "+") {
		std::cout << "Result: " << number1 + number2;
	}
	else
		if (mathOperation == "-") {
			std::cout << "Result: " << number1 - number2;
		}
		else
			if (mathOperation == "*") {
				std::cout << "Result: " << number1 * number2;
			}
			else
				if (mathOperation == "/") {
					std::cout << "Result: " << number1 / number2;
				}
				else {
					std::cout << "Incorrect operation!" << number1 / number2;
				}
}