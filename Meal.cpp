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

const std::string &Meal::getId() const {
    return id;
}

void Meal::setId(const std::string &id) {
    Meal::id = id;
}

const std::string &Meal::getName() const {
    return name;
}

void Meal::setName(const std::string &name) {
    Meal::name = name;
}

const std::string &Meal::getDescription() const {
    return description;
}

void Meal::setDescription(const std::string &description) {
    Meal::description = description;
}

double Meal::getCost() const {
    return cost;
}

void Meal::setCost(double cost) {
    Meal::cost = cost;
}
