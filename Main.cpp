#include "Ctx.h"

static void addUserToStruct(
    std::vector<User>& users,
    std::string city,
    std::string street,
    int homeNumber,
    int homeApartments,
    int cityIndex)
{
    User user;
    user.city = city;
    user.street = street;
    user.homeNumber = homeNumber;
    user.homeApartments = homeApartments;
    user.cityIndex = cityIndex;

    users.push_back(user);
}

static void printUserInfo(const User& user)
{
    std::cout << "City: " << user.city << std::endl;
    std::cout << "Street: " << user.street << std::endl;
    std::cout << "Home number: " << user.homeNumber << std::endl;
    std::cout << "Apartments: " << user.homeApartments << std::endl;
    std::cout << "City index: " << user.cityIndex << std::endl;
}

int main()
{
    std::vector<User> users;

    addUserToStruct(users, "Moscow", "Arbat", 12, 8, 123456);
    addUserToStruct(users, "Izhevsk", "Pushkin", 59, 143, 953769);

    for (const auto& currentUser : users)
    {
        printUserInfo(currentUser);
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}