include<stdio.h>

int main()
{
    def switch_case(char):
    if 'a' <= char <= 'z':  
        return char.upper()
    elif 'A' <= char <= 'Z':  
        return char.lower()
    else:
        return "Invalid input"

character = input("Enter a single character: ")

if len(character) == 1:
    result = switch_case(character)
    print("Result:", result)
else:
    print("Invalid input")
}