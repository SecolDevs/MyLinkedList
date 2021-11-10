#include <iostream>
#include "LinkedList.cpp"
#include "Meal.h"

using namespace std;

int main() {
    LinkedList<Meal> *meals = new LinkedList<Meal>();
    meals->prepend(Meal("1", "Hamburger", "Burger with meat and lettuce", 100));
    meals->prepend(Meal("2", "HotDog", "Hot Dog with sausage", 80));
    meals->prepend(Meal("3", "Salad", "Salad with lettuce, tomato and onion", 150));
    meals->append(Meal("4", "Hard Tacos", "With tortilla and tomato", 200));
    meals->append(Meal("5", "Burritos", "With meat, tomato and spicy sausage", 2500));
    meals->append(Meal("6", "Meatballs", "With chicken meat", 110));

    cout << "My Meals" << endl;
    for (Meal meal: meals->getLinkedList()) {
        cout << "- " << meal << endl;
    }

    return EXIT_SUCCESS;
}
