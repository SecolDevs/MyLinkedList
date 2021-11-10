//
// Created by Sebastian on 11/10/2021.
//

#ifndef TALLER_MEAL_H
#define TALLER_MEAL_H

#include <string>
#include <ostream>

class Meal {
public:
    Meal();

    Meal(const std::string &id, const std::string &name, const std::string &description, double cost);

    const std::string &getId() const;

    void setId(const std::string &id);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getDescription() const;

    void setDescription(const std::string &description);

    double getCost() const;

    void setCost(double cost);

    virtual ~Meal();

    friend std::ostream &operator<<(std::ostream &os, const Meal &meal);

private:
    std::string id, name, description;
    double cost;
};


#endif //TALLER_MEAL_H
