//
// Created by Sebastian on 11/10/2021.
//

#include "Meal.h"


std::ostream &operator<<(std::ostream &os, const Meal &meal) {
    os << "id: " << meal.id << " name: " << meal.name << " description: " << meal.description << " cost: " << meal.cost;
    return os;
}

Meal::Meal() {}


Meal::Meal(const std::string &id, const std::string &name, const std::string &description, double cost) : id(id),
                                                                                                          name(name),
                                                                                                          description(
                                                                                                                  description),
                                                                                                          cost(cost) {}

Meal::~Meal() {}
