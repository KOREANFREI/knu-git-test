def celsius_to_fahrenheit(celsius):
    print('c2f')
def kilometers_to_miles(kilometers):
    print('k2m')
def pounds_to_kilograms(pounds):
    print('p2k')

my_functions = [celsius_to_fahrenheit, kilometers_to_miles, pounds_to_kilograms]

choice = int(input("번호를 입력하세요: "))

if 1 <= choice <= 3:
    result = my_functions[choice - 1](0)
