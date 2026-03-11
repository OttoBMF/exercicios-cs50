#include <cs50.h>
#include <stdio.h>

int age;
string name, phone_number, location;

int main(void){

    name = get_string("Name: ");
    age = get_int("Age: ");
    phone_number = get_string("Phone Number: ");
    location = get_string("Location: ");
    printf("New contact: %s, %i, lives in %s and can be reached at %s\n", name, age, location, phone_number);

}
